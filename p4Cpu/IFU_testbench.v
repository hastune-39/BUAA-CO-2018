`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:10:14 11/09/2019
// Design Name:   IFU
// Module Name:   D:/ise_save/p4Cpu/IFU_testbench.v
// Project Name:  p4Cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IFU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IFU_testbench;

	// Inputs
	reg reset;
	reg clk;
	reg [1:0] PCsel;
	reg [25:0] imm;
	reg [31:0] BUSA;
	reg [31:0] alu;

	// Outputs
	wire [31:0] instruction;
	wire [31:0] PCadd4;

	// Instantiate the Unit Under Test (UUT)
	IFU uut (
		.reset(reset), 
		.clk(clk), 
		.PCsel(PCsel), 
		.imm(imm), 
		.BUSA(BUSA), 
		.alu(alu), 
		.instruction(instruction), 
		.PCadd4(PCadd4)
	);

	initial begin
		// Initialize Inputs
		reset = 0;
		clk = 0;
		PCsel = 0;
		imm = 0;
		RA = 0;
		alu = 0;

		// Wait 100 ns for global reset to finish
		#100
      //测试基本功能，PC+4
      PCsel = 0;
		#10
		
		//测试beq功能
		PCsel=2'b01;
		alu = 1;
		imm=-4;
		#10
		//测试基本功能，PC+4
      PCsel = 0;
		#10
		//测试beq未跳转功能
		PCsel=2'b01;
		alu = 0;
		#10
		//测试jr功能
		PCsel=2'b11;
		BUSA=32'h00003000;
		#10
		//测试基本功能，PC+4
      PCsel = 0;
		#10
		//测试j功能
		PCsel=2'b10;
		imm = 26'b00_0000_0000_0000_1100_0000_0000;
		#10
		//测试基本功能，PC+4
      PCsel = 0;
		#10
		//测试复位
		reset=1;
		// Add stimulus here

	end
	
   always #5 clk=~clk;
endmodule

