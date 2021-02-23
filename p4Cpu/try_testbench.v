`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:23:50 11/14/2019
// Design Name:   try
// Module Name:   D:/ise_save/p4Cpu/try_testbench.v
// Project Name:  p4Cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: try
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module try_testbench;

	// Inputs
	reg [5:0] A;

	// Outputs
	wire [5:0] C;

	// Instantiate the Unit Under Test (UUT)
	try uut (
		.A(A), 
		.C(C)
	);

	initial begin
		// Initialize Inputs
		A = 0;

		// Wait 100 ns for global reset to finish
		#100;
      A=5'b10101;
		#5
		A=5'b00001;
		// Add stimulus here

	end
      
endmodule

