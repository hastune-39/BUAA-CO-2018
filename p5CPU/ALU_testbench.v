`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:52:51 11/09/2019
// Design Name:   ALU
// Module Name:   D:/ise_save/p4Cpu/ALU_testbench.v
// Project Name:  p4Cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_testbench;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg [1:0] ALUop;
	// Outputs
	wire [31:0] C;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.A(A), 
		.B(B), 
		.ALUop(ALUop), 
		.C(C)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		ALUop = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		// Add stimulus here
		//加法
		A=1;
		B=2;
		#10
		//减法
		ALUop=2'b01;
		#10
		//异或
		ALUop=2'b10;
		#10
		//比较
		ALUop=2'b11;
		#10
		B=1;
	end
      
endmodule

