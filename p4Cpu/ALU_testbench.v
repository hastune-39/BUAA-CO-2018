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
	reg [2:0] ALUop;
	reg [4:0] S;
	// Outputs
	wire [31:0] C;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.A(A), 
		.B(B), 
		.ALUop(ALUop), 
		.C(C),
		.S(S)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		ALUop = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		// Add stimulus here
		//¼Ó·¨
		ALUop=3'b110;
		S=5'b00001;
		B=32'hf0000003;
		#10
		S=5'b00000;
		#10
		S=5'b00100;
		#10
		B=32'h00001111;
	end
      
endmodule

