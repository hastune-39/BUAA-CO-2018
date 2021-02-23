`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:55:33 11/17/2019 
// Design Name: 
// Module Name:    D_register 
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
module D_register(
	 input clk,
	 input reset,

    input [31:0] IF,
    input [31:0] PCadd4,
	 
	 input En,
	 input clear,
	 
	 output reg [31:0] D_IF,
    output reg [31:0] D_PCadd4
    );
	 
	 always @(posedge clk) begin
		if(reset|clear) begin
			D_IF<=0;
			D_PCadd4<=0;
		end
		else begin
			if(En) begin
				D_IF<=IF;
				D_PCadd4<=PCadd4;
			end
		end
	 end
	 
endmodule
