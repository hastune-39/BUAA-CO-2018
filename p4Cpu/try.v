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
	output reg [5:0]C);
	integer i,sum;
	always @(*) begin
		for(i=0,sum=0;i<6;i=i+1)sum=sum+A[i];
		C<=sum;
	end
endmodule
