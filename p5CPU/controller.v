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
    output  [1:0] PCsel,
	 output [1:0] EXTsel,
	 output [2:0] ALUsel,
	 output Bsel,
	 output DMEn,
	 output [1:0] A3sel,
	 output [1:0] WDsel,
	 output GRFEn
    );
	 
	 //与阵列
	 wire addu,subu,ori,lui,lw,sw,beq,jal,jr,j;
	 
	 
	 assign addu=(opcode==6'b000000&&func==6'b100001)?1:0; 
	 assign subu=(opcode==6'b000000&&func==6'b100011)?1:0; 
	 assign jr=(opcode==6'b000000&&func==6'b001000)?1:0; 
	 assign ori=(opcode==6'b001101)?1:0; 
	 assign lw=(opcode==6'b100011)?1:0; 
	 assign sw=(opcode==6'b101011)?1:0; 
	 assign beq=(opcode==6'b000100)?1:0;
	 assign lui=(opcode==6'b001111)?1:0; 
	 assign jal=(opcode==6'b000011)?1:0; 
	 assign j=(opcode==6'b000010)?1:0;
	 
	 //梦开始的地方
	 assign jalr=(opcode==6'b000000)&&(func==6'b001001)?1:0;
	 //或阵列
	 assign PCsel=(jr|jalr)? 2'b11:
					  (jal|j)? 2'b10:
					  (beq)? 2'b01:
								2'b00;
								
	 							  
	 assign EXTsel=(lui)? 2'b10:
					   (lw|sw)? 2'b01:
									2'b00;
									
	 assign ALUsel=(ori)? 3'b010:
					  (subu)? 3'b001:
								 3'b000;

	 assign Bsel=(ori|lw|sw|lui)? 1: 0;
	
	 assign DMEn=(sw)? 1: 0;
	 
	 assign A3sel=(jal)? 2'b10:
					  (ori|lw|lui)? 2'b01:
										 2'b00;
										 
	 assign WDsel=(jal|jalr)? 2'b10:
					  (lw)? 2'b01:
							  2'b00;
										 
	 assign GRFEn=(addu|subu|ori|lw|lui|jal|jalr)? 1: 0;


								

								 
endmodule
