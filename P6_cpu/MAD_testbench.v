`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:42:34 12/03/2019
// Design Name:   MAD
// Module Name:   D:/ise_save/P6_cpu/MAD_testbench.v
// Project Name:  P6_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MAD
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MAD_testbench;

	// Inputs
	reg reset;
	reg clk;
	reg MAD_start;
	reg HI_En;
	reg LO_En;
	reg [31:0] BUSA;
	reg [31:0] BUSB;
	reg [31:0] MAD_DI;
	reg [2:0] MAD_sel;

	// Outputs
	wire [4:0] Busy;
	wire [31:0] BUS_HI;
	wire [31:0] BUS_LO;

	// Instantiate the Unit Under Test (UUT)
	MAD uut (
		.reset(reset), 
		.clk(clk), 
		.MAD_start(MAD_start), 
		.HI_En(HI_En), 
		.LO_En(LO_En), 
		.BUSA(BUSA), 
		.BUSB(BUSB), 
		.MAD_DI(MAD_DI), 
		.MAD_sel(MAD_sel), 
		.Busy(Busy), 
		.BUS_HI(BUS_HI), 
		.BUS_LO(BUS_LO)
	);

	initial begin
		// Initialize Inputs
		reset = 1;
		clk = 0;
		MAD_start = 0;
		HI_En = 0;
		LO_En = 0;
		BUSA = 0;
		BUSB = 0;
		MAD_DI = 0;
		MAD_sel = 0;

		// Wait 100 ns for global reset to finish
		#100;
      reset=0;
		MAD_start=1;
		// Add stimulus here
		//madd测试
		//正数+正数
		BUSA=2;BUSB=2;
		MAD_sel=3'd0;
		#10
		MAD_start=0;
		#60
		
		//正数+负数
		MAD_start=1;
		BUSA=2;BUSB=2;
		MAD_sel=3'd4;
		#10
		MAD_start=0;
	end
      always #5 clk=~clk;
endmodule

