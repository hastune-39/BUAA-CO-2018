`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:21:13 11/17/2019 
// Design Name: 
// Module Name:    W_register 
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
module W_register(
	 input clk,
	 input reset,

    input [31:0] IF,
    input [31:0] PCadd4,
    input [31:0] ALUout,
    input [31:0] DMout,
    input [1:0] A3sel,
    input [1:0] WDsel,
	 input GRFEn,
	 
	 output reg [31:0] W_IF,
    output reg [31:0] W_PCadd4,
    output reg [31:0] W_ALUout,
    output reg [31:0] W_DMout,
    output reg [1:0] W_A3sel,
    output reg [1:0] W_WDsel,
	 output reg W_GRFEn
    );
	 
	 always @(posedge clk) begin
		if(reset) begin
			W_IF<=0;
			W_PCadd4<=0;
			W_ALUout<=0;
			W_DMout<=0;
			W_A3sel<=0;
			W_WDsel<=0;
			W_GRFEn<=0;
		end
		else begin
			W_IF<=IF;
			W_PCadd4<=PCadd4;
			W_ALUout<=ALUout;
			W_DMout<=DMout;
			W_A3sel<=A3sel;
			W_WDsel<=WDsel;
			W_GRFEn<=GRFEn;
		end
	 end
endmodule
