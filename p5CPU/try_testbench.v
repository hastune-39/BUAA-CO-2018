`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:48:40 11/18/2019
// Design Name:   try
// Module Name:   D:/ise_save/p5CPU/try_testbench.v
// Project Name:  p5CPU
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
	wire B;

	// Instantiate the Unit Under Test (UUT)
	try uut (
		.A(A), 
		.B(B)
	);

	initial begin
		// Initialize Inputs
		A = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

