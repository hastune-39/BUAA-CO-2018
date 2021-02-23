`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:56:32 11/09/2019 
// Design Name: 
// Module Name:    DM 
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
module DM(
	 input clk,
	 input reset,
    input [31:0] Address,
    input [31:0] DI,
	 input [1:0] Savesel,
	 input [2:0] Readsel,
	 input DMEn,
	 input [31:0] PCadd8,
    output reg [31:0] DMout
    );
	 //DM�ĸ���
	 //��չδ������ȷ�� ���̣�
	 //�����ʾ��
	 reg [31:0] memory [4095:0];
	 reg [31:0] temp;
	 //��ʼ��
	 integer i;
	 
	 initial begin
	 for(i=0;i<4096;i=i+1)memory[i]=0;
	 end
	 
	 initial begin
		temp=0;
	 end
	 //����
	 always @(posedge clk ) begin
		if(reset)
			for(i=0;i<4096;i=i+1)memory[i]<=0;
		else
			if(DMEn) begin
				case(Savesel)
					2'd0:begin
								memory[Address[13:2]]<=DI;
								$display("%d@%h: *%h <= %h", $time, PCadd8-32'h00000008, {Address[31:2],2'b00}, DI);
							end
					2'd1:begin//sh
								for(i=0;i<16;i=i+1)memory[Address[13:2]][Address[1]*16+i]<=DI[i];//��DI�ĵ�16λ
								//���
								temp=memory[Address[13:2]];//�м����
								for(i=0;i<16;i=i+1)temp[Address[1]*16+i]=DI[i];
								$display("%d@%h: *%h <= %h", $time, PCadd8-32'h00000008, {Address[31:2],2'b00}, temp);
							end
					2'd2:begin//sb
								for(i=0;i<8;i=i+1)memory[Address[13:2]][Address[1:0]*8+i]<=DI[i];//��DI��8λ
								//���
								temp=memory[Address[13:2]];//�м����
								for(i=0;i<8;i=i+1)temp[Address[1:0]*8+i]=DI[i];
								$display("%d@%h: *%h <= %h", $time, PCadd8-32'h00000008, {Address[31:2],2'b00}, temp);
							end
					default:memory[Address[13:2]]<=DI;
				endcase
				//memory[Address[13:2]]<=DI;
				//$display("%d@%h: *%h <= %h", $time, PCadd8-32'h00000008, {Address[31:2],2'b00}, DI);
			end
	 end
	 
	 //assign DMout=memory[Address[13:2]];//�������
	 always @(*) begin
		case(Readsel)
			3'd0:DMout=memory[Address[13:2]];
			3'd1:begin//�޷��Ű�����չ
						for(i=0;i<32;i=i+1)
							if(i<16)DMout[i]=memory[Address[13:2]][Address[1]*16+i];
							else DMout[i]=0;
					 end
			3'd2:begin//���Ű�����չ
						for(i=0;i<32;i=i+1)
							if(i<16)DMout[i]=memory[Address[13:2]][Address[1]*16+i];
							else DMout[i]=memory[Address[13:2]][Address[1]*16+15];
			       end
			3'd3:begin//�޷����ֽ���չ
						for(i=0;i<32;i=i+1)
							if(i<8)DMout[i]=memory[Address[13:2]][Address[1:0]*8+i];
							else DMout[i]=0;
					 end
			3'd4:begin//�����ֽ���չ
						for(i=0;i<32;i=i+1)
							if(i<8)DMout[i]=memory[Address[13:2]][Address[1:0]*8+i];
							else DMout[i]=memory[Address[13:2]][Address[1:0]*8+7];
					 end
			default:DMout=memory[Address[13:2]];
		endcase
	 end
endmodule
