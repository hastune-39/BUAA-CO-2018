`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:12:02 11/17/2019 
// Design Name: 
// Module Name:    E_register 
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
module E_register(
	 input clk,
	 input reset,//？？？这个在哪里要用到
	 input clear,
	 
    input [31:0] IF,
    input [31:0] PCadd4,
    input [31:0] BUSA,
    input [31:0] BUSB,
    input [31:0] EXTout,
    input [2:0] ALUsel,
    input [0:0] Bsel,
    input DMEn,
    input [1:0] A3sel,
    input [1:0] WDsel,
	 input GRFEn,
	 
	 
	 output reg [31:0] E_IF,
    output reg [31:0] E_PCadd4,
    output reg [31:0] E_BUSA,
    output reg [31:0] E_BUSB,
    output reg [31:0] E_EXTout,
    output reg [2:0] E_ALUsel,
    output reg [0:0] E_Bsel,
    output reg E_DMEn,
    output reg [1:0] E_A3sel,
    output reg [1:0] E_WDsel,
	 output reg E_GRFEn
    );
	 
	 always @(posedge clk) begin
		if(reset|clear) begin
			E_IF<=0;
			E_PCadd4<=0;
			E_BUSA<=0;
			E_BUSB<=0;
			E_EXTout<=0;
			E_ALUsel<=0;
			E_Bsel<=0;
			E_DMEn<=0;
			E_A3sel<=0;
			E_WDsel<=0;
			E_GRFEn<=0;
		end
		else begin
			E_IF<=IF;
			E_PCadd4<=PCadd4;
			E_BUSA<=BUSA;
			E_BUSB<=BUSB;
			E_EXTout<=EXTout;
			E_ALUsel<=ALUsel;
			E_Bsel<=Bsel;
			E_DMEn<=DMEn;
			E_A3sel<=A3sel;
			E_WDsel<=WDsel;
			E_GRFEn<=GRFEn;
		end
	 end
endmodule
