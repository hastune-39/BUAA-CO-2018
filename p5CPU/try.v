`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:54:45 11/09/2019 
// Design Name: 
// Module Name:    try 
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
module try(
	input [5:0]A,
	output B
	);
	wire [1:0]a,b;
	assign b=2'b01;
		
	`define this 0
	assign B=b[`this];
	`define this 1
endmodule
