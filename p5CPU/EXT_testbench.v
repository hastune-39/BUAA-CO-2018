`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:35:22 11/09/2019
// Design Name:   EXT
// Module Name:   D:/ise_save/p4Cpu/EXT_testbench.v
// Project Name:  p4Cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: EXT
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module EXT_testbench;

	// Inputs
	reg [15:0] imm;
	reg [1:0] EXTsel;

	// Outputs
	wire [31:0] EXTout;

	// Instantiate the Unit Under Test (UUT)
	EXT uut (
		.imm(imm), 
		.EXTOp(EXTOp), 
		.EXTout(EXTout)
	);

	initial begin
		// Initialize Inputs
		imm = 0;
		EXTsel = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		// Add stimulus here
		//检验无符号拓展
		imm=-8;
		#10
		//检验符号拓展
		EXTsel=2'b01;
		#10
		//检验低位无符号拓展
		EXTsel=2'b10;
	end
      
endmodule

