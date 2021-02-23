`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:48:09 11/10/2019 
// Design Name: 
// Module Name:    controller 
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
module controller(
    input [5:0] opcode,
    input [5:0] func,
	 input [31:0] C,
    output  [1:0] PCsel,
    output GRFEn,
    output [1:0] A3sel,
    output [1:0] WDsel,
	 output [1:0] EXTsel,
    output Bsel,
	 output [2:0] ALUop,
    output DMEn,
	 output [1:0] DMsel
    );
	 
	 //������
	 wire addu,subu,jr,ori,lw,sw,beq,lui,jal;
	 wire j,jalr,And;
	 wire sb,lb;
	 
	 wire balcon;
	 
	 assign addu=(opcode==6'b000000&&func==6'b100001)?1:0; //�Ľ׶�
	 assign subu=(opcode==6'b000000&&func==6'b100011)?1:0; //�Ľ׶�
	 assign jr=(opcode==6'b000000&&func==6'b001000)?1:0; //�����׶Σ���
	 assign ori=(opcode==6'b001101)?1:0; //�ĸ��׶� ����������Beqһ����
	 assign lw=(opcode==6'b100011)?1:0; //����׶�
	 assign sw=(opcode==6'b101011)?1:0; //�ĸ��׶�
	 assign beq=(opcode==6'b000100)?1:0;//�����׶�
	 assign lui=(opcode==6'b001111)?1:0; //�ĸ��׶�
	 assign jal=(opcode==6'b000011)?1:0; //�����׶�
	 
	 assign j=(opcode==6'b000010)?1:0;
	 assign jalr=(opcode==6'b000000&&func==6'b001001);
	 assign And=(opcode==6'b000000&&func==6'b100100)?1:0;
	 
	 assign sb=(opcode==6'b101000)?1:0;
	 assign lb=(opcode==6'b100000)?1:0;
	 
	 //�ο�ʼ�ĵط�
	 assign balcon=(opcode==6'b000001);
	 assign SRA=(opcode==6'b000000&&func==6'b000011)?1:0;
	 
	 //������
	 assign PCsel=(jr|jalr)? 2'b11:
					  (jal|j)? 2'b10:
					  (beq|balcon)? 2'b01:
								2'b00;
								
	 assign GRFEn=(addu|subu|ori|lw|lui|jal|jalr|And|lb|(balcon&&C==1)|SRA)? 1: 0;
	 assign A3sel=(jal|balcon)? 2'b10:
					  (ori|lw|lui|lb)? 2'b01:
										 2'b00;
										 
	 assign WDsel=(jal|jalr|balcon)? 2'b10:
					  (lw|lb)? 2'b01:
							  2'b00;
							  
	 assign EXTsel=(lui)? 2'b10:
					   (lw|sw|sb|lb)? 2'b01:
									2'b00;
									
	 assign Bsel=(ori|lw|sw|lui|sb|lb)? 1: 0;
	 assign ALUop=(SRA)? 3'b110:
					  (balcon)? 3'b101:
					  (And)? 3'b100:
					  (beq)? 3'b011:
					  (ori)? 3'b010:
					  (subu)? 3'b001:
								 3'b000;
								 
	 assign DMEn=(sw|sb)? 1: 0;
	 assign DMsel=(sb|lb)? 2'b10:
							  2'b00;
endmodule
