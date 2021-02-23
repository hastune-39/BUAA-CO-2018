`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:17:18 11/17/2019 
// Design Name: 
// Module Name:    M_register 
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
module M_register(
	 input clk,
	 input reset,

    input [31:0] IF,
    input [31:0] PCadd4,
    input [31:0] BUSB,
    input [31:0] ALUout,
    input DMEn,
    input [1:0] A3sel,
    input [1:0] WDsel,
	 input GRFEn,
	 
	 output reg [31:0] M_IF,
    output reg [31:0] M_PCadd4,
    output reg [31:0] M_BUSB,
    output reg [31:0] M_ALUout,
    output reg M_DMEn,
    output reg [1:0] M_A3sel,
    output reg [1:0] M_WDsel,
	 output reg M_GRFEn
    );
	 
	 always @(posedge clk) begin
		if(reset) begin
			M_IF<=0;
			M_PCadd4<=0;
			M_BUSB<=0;
			M_ALUout<=0;
			M_DMEn<=0;
			M_A3sel<=0;
			M_WDsel<=0;
			M_GRFEn<=0;
		end
		else begin
			M_IF<=IF;
			M_PCadd4<=PCadd4;
			M_BUSB<=BUSB;
			M_ALUout<=ALUout;
			M_DMEn<=DMEn;
			M_A3sel<=A3sel;
			M_WDsel<=WDsel;
			M_GRFEn<=GRFEn;
		end
	 end
endmodule
