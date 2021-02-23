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
	 input clear,
    input [31:0] IF,
    input [31:0] PCadd8,
	 input En,
	 
	 input IFU_interupt,
	 input delay,
	 
	 output reg [31:0] D_IF,
    output reg [31:0] D_PCadd8,
	 
	 output reg D_IFU_interupt,
	 output reg D_delay
    );
	 
	 always @(posedge clk) begin
		if(reset|clear) begin
			D_IF<=0;
			D_PCadd8<=0;
			
			D_delay<=0;
			D_IFU_interupt<=0;
		end
		else begin
			if(En) begin
				D_IF<=IF;
				D_PCadd8<=PCadd8;
				
				D_IFU_interupt<=IFU_interupt;
				D_delay<=delay;
			end
		end
	 end
	 
endmodule
