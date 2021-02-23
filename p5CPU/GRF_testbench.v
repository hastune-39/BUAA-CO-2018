`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:40:16 11/09/2019
// Design Name:   GRF
// Module Name:   D:/ise_save/p4Cpu/GRF_testbench.v
// Project Name:  p4Cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: GRF
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module GRF_testbench;

	// Inputs
	reg clk;
	reg reset;
	reg [4:0] A1;
	reg [4:0] A2;
	reg [4:0] A3;
	reg [31:0] WD;
	reg En;

	// Outputs
	wire [31:0] BUSA;
	wire [31:0] BUSB;

	// Instantiate the Unit Under Test (UUT)
	GRF uut (
		.clk(clk), 
		.reset(reset), 
		.A1(A1), 
		.A2(A2), 
		.A3(A3), 
		.WD(WD), 
		.En(En), 
		.BUSA(BUSA), 
		.BUSB(BUSB)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		A1 = 0;
		A2 = 0;
		A3 = 0;
		WD = 0;
		En = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		//����ʹ�ܶ�
		En=1;
		A3=5'b00000;
		WD=32'hffffffff;
	end
	
		always #5 clk=~clk;
      
endmodule

