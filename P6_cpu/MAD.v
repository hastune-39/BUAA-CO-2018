`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:07:06 12/03/2019 
// Design Name: 
// Module Name:    MAD 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module MAD(
    input reset,
    input clk,
	 input MAD_start,
    input HI_En,
    input LO_En,
	 input [31:0] BUSA,
	 input [31:0] BUSB,
	 input [31:0] MAD_DI,
    input [2:0] MAD_sel,
	 output [4:0]Busy,
    output [31:0] BUS_HI,
    output [31:0] BUS_LO
    );
	 //乘除模块未通过认真检测
	 //HI,LO寄存器
	 reg [31:0] HI;
	 reg [31:0] LO;
	 //计数寄存器
	 reg [4:0] temp;
	 
	 //初始化
	 initial begin
		HI=0;LO=0;temp=0;
	 end
	 
	 
	 always @(posedge clk) begin
		if(reset) begin
			HI<=0;
			LO<=0;
			temp<=0;
		end
		else begin
			if(HI_En|LO_En) begin  //支持同时写HI,LO
				if(HI_En) HI<=BUSA;
				if(LO_En) LO<=BUSA;
			end
			else begin
					//状态机部分
					if(MAD_start)//开始乘除
						if(MAD_sel==2'b00||MAD_sel==2'b01)temp<=5'd5;
						else temp<=5'd10;
					begin
					
					if(temp>0)temp<=temp-1;//状态机计数
					
					//乘除运算部分
					if(MAD_start) begin
						case (MAD_sel)
							3'd0:{HI,LO}<=$signed(BUSA)*$signed(BUSB);//符号乘法，符号数要加signed
							3'd1:{HI,LO}<={1'b0,BUSA}*{1'b0,BUSB};//无符号乘法
							3'd2:begin//符号除法
										 LO<=$signed(BUSA)/$signed(BUSB);
										 HI<=$signed(BUSA)%$signed(BUSB);
									 end
							3'd3:begin//无符号除
										 LO<={1'b0,BUSA}/{1'b0,BUSB};
										 HI<={1'b0,BUSA}%{1'b0,BUSB};
									 end
							3'd4:begin//madd
									  {HI,LO}<=$signed({HI,LO})+$signed(BUSA)*$signed(BUSB);
								 end
						endcase
					end
				end
			end
		end
	 end
	 
	 assign Busy=temp;
	 assign BUS_HI=HI;
	 assign BUS_LO=LO;
endmodule
