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
	 //�˳�ģ��δͨ��������
	 //HI,LO�Ĵ���
	 reg [31:0] HI;
	 reg [31:0] LO;
	 //�����Ĵ���
	 reg [4:0] temp;
	 
	 //��ʼ��
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
			if(HI_En|LO_En) begin  //֧��ͬʱдHI,LO
				if(HI_En) HI<=BUSA;
				if(LO_En) LO<=BUSA;
			end
			else begin
					//״̬������
					if(MAD_start)//��ʼ�˳�
						if(MAD_sel==2'b00||MAD_sel==2'b01)temp<=5'd5;
						else temp<=5'd10;
					begin
					
					if(temp>0)temp<=temp-1;//״̬������
					
					//�˳����㲿��
					if(MAD_start) begin
						case (MAD_sel)
							3'd0:{HI,LO}<=$signed(BUSA)*$signed(BUSB);//���ų˷���������Ҫ��signed
							3'd1:{HI,LO}<={1'b0,BUSA}*{1'b0,BUSB};//�޷��ų˷�
							3'd2:begin//���ų���
										 LO<=$signed(BUSA)/$signed(BUSB);
										 HI<=$signed(BUSA)%$signed(BUSB);
									 end
							3'd3:begin//�޷��ų�
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
