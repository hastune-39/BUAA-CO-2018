`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:55:38 12/04/2019
// Design Name:   ALU
// Module Name:   D:/ise_save/P6_cpu/ALU_testbench.v
// Project Name:  P6_cpu
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
	reg [31:0] IF;
	reg [7:0] ALUsel;

	// Outputs
	wire [31:0] C;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.A(A), 
		.B(B), 
		.IF(IF), 
		.ALUsel(ALUsel), 
		.C(C)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		IF = 0;
		ALUsel = 0;

		// Wait 100 ns for global reset to finish
		#100;
		//逻辑左移
		A=1;
      B=32'h8765432f;
		IF[11:7]=8;
		ALUsel=3;
		#10
		//逻辑右移
		ALUsel=4;
		IF[11:7]=8;
		B=32'h8765432f;
		#10
		//算数右移
		ALUsel=5;
		IF[11:7]=8;
		B=32'h8765432f;
		#10
		//逻辑可变左移
		ALUsel=6;
		A=32'hfffffff4;
		IF[11:7]=8;
		B=32'h8765432f;
		#10
		//逻辑可变右移
		ALUsel=7;
		A=32'hfffffff4;
		IF[11:7]=8;
		B=32'h8765432f;
		#10
		//算数可变右移
		ALUsel=8;
		A=32'hfffffff4;
		IF[11:7]=8;
		B=32'h8765432f;
		#10
		//符号小于置位
		ALUsel=12;
		A=32'hffffffff;
		B=0;
		#10
		//无符号小于置位
		ALUsel=13;
		A=32'hffffffff;
		B=0;
		// Add stimulus here

	end
      
endmodule

