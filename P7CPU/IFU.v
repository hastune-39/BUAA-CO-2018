`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:38:38 11/09/2019 
// Design Name: 
// Module Name:    IFU 
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
module IFU(
    input clk,
    input reset,
	 input [25:0]imm,
	 input ifequal,
	 input [31:0] BUSA,
	 input [3:0] PCsel,
	 input PCEn,
	 input IntReq,
	 input [31:0] EPC,
	 input eret,
	 output [31:0]	instruction,
	 output [31:0] PCadd8,
	 output IFU_Exc
    );
	//变量定义 /////////////////////////////////////////////////////////////////////////////
	reg [31:0] memory [4095:0];
	reg [31:0] PC;
	
	//初始化 //////////////////////////////////////////////////////////////////////////////
	initial begin
		PC=0;
	end
	
	initial begin
		$readmemh("code.txt", memory);
		$readmemh("code_handler.txt", memory, 1120, 2047);
	end
	
	//计算下一条指令位置 ////////////////////////////////////////////////////////////////////
	always @ (posedge clk ) begin
		if(reset)
			PC<=0;
		else
			if(IntReq) //中断异常优先级最高
				PC<=32'h0000_4180-32'h0000_3000;//异常处理地址
			else begin
				if(eret) //退出优先级其次
					PC<=EPC-32'h0000_3000;
				else begin
					if(PCEn) begin //最低优先级，正常跳转
						case (PCsel)
							4'd0: begin//常规+4
								PC<=PC+4;
								end
							4'd1: //b类跳转
								if(ifequal==1)
									PC<=PC+{{14{imm[15]}},(imm[15:0]),2'b00};
								else
									PC<=PC+32'h00000004;
							4'd2: //jal或者j
								PC<={PC[31:28],imm[25:0],2'b00}-32'h00003000;
							4'd3: //jr或jalr
								PC<=BUSA-32'h00003000;
								//default: PC<=32'bz;
						endcase
					end
				end
			end
	end
	
	//输出 ////////////////////////////////////////////////////////////////////////////////
	assign instruction=memory[PC/4];
	assign PCadd8=PC+8+32'h00003000;
	assign IFU_Exc=(PC[1:0]!=0||!(PC>=32'h0000_3000-32'h0000_3000&&PC<=32'h0000_4ffc-32'h0000_3000))? 1:0; //异常处理
endmodule
