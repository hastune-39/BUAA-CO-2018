`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:03:06 11/09/2019
// Design Name:   DM
// Module Name:   D:/ise_save/p4Cpu/DM_testbench.v
// Project Name:  p4Cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DM_testbench;

	// Inputs
	reg [31:0] Address;
	reg [31:0] DI;
	reg reset;
	reg clk;
	reg En;
	reg [1:0] DMsel;
	// Outputs
	wire [31:0] DO;

	// Instantiate the Unit Under Test (UUT)
	DM uut (
		.Address(Address), 
		.DI(DI), 
		.reset(reset), 
		.clk(clk), 
		.DMsel(DMsel),
		.En(En), 
		.DO(DO)
	);

	initial begin
		// Initialize Inputs
		Address = 0;
		DI = 0;
		reset = 0;
		clk = 0;
		En = 0;
		DMsel=2'b00;
		
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		En=1;
		//存字节
		DMsel=2'b10;
		DI=32'h87654321;
		//存半字节
		#10
		DMsel=2'b01;
		DI=32'h87654321;
		//存字
		#10
		DMsel=2'b00;
		Address=32'h00000000;
		DI=32'h87654321;
		//取出来看看
		#10 En=0;
		DMsel=2'b10;
		Address=32'h00000001;
		#10
		Address=43'h00000002;
		#10
		Address=43'h00000003;
		#10
		Address=43'h00000004; 
		//看half
		#10
		DMsel=2'b01;
		Address=32'h00000001;
		#10
		Address=43'h00000002;
		#10
		Address=43'h00000003;
		#10
		Address=43'h00000004; 
		//看word
		#10
		DMsel=2'b00;
		Address=32'h00000001;
		#10
		Address=43'h00000002;
		#10
		Address=43'h00000003;
		#10
		Address=43'h00000004; 
	end
      
	always #5 clk=~clk;
endmodule

