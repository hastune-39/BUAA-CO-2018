`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:51:35 12/11/2019
// Design Name:   mips
// Module Name:   D:/code_software/ise_save/P7CPU/mips_testbench.v
// Project Name:  P7CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mips
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mips_testbench;

	// Inputs
	reg clk;
	reg reset;
	reg interrupt;

	// Outputs
	wire [31:0] addr;

	// Instantiate the Unit Under Test (UUT)
	mips uut (
		.clk(clk), 
		.reset(reset), 
		.interrupt(interrupt), 
		.addr(addr)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		interrupt = 0;

		// Wait 100 ns for global reset to finish
		#100;
      reset=0;
		// Add stimulus here

	end
	
   always #5 clk=~clk;
endmodule

