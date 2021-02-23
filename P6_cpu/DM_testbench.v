`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:17:57 12/03/2019
// Design Name:   DM
// Module Name:   D:/ise_save/P6_cpu/DM_testbench.v
// Project Name:  P6_cpu
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
	reg clk;
	reg reset;
	reg [31:0] Address;
	reg [31:0] DI;
	reg [1:0] Savesel;
	reg [2:0] Readsel;
	reg DMEn;
	reg [31:0] PCadd8;

	// Outputs
	wire [31:0] DMout;

	// Instantiate the Unit Under Test (UUT)
	DM uut (
		.clk(clk), 
		.reset(reset), 
		.Address(Address), 
		.DI(DI), 
		.Savesel(Savesel), 
		.Readsel(Readsel), 
		.DMEn(DMEn), 
		.PCadd8(PCadd8), 
		.DMout(DMout)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		Address = 0;
		DI = 0;
		Savesel = 0;
		Readsel = 0;
		DMEn = 0;
		PCadd8 = 0;

		// Wait 100 ns for global reset to finish
		#100;
      reset=0;
		DMEn=1;
		// Add stimulus here
		//´æ×Ö 87654321
		DI=32'h87654321;
		Address=0;
		Savesel=0;
		#10
		//´æ°ë×Ö 87658765
		DI=32'h12348765;
		Address=32'h00000004;
		Savesel=1;
		#10;
		DI=32'h12345678;
		Address=32'h00000005;
		Savesel=1;
		#10;
		DI=32'h12345678;
		Address=32'h00000006;
		Savesel=1;
		#10;
		DI=32'h12345678;
		Address=32'h00000007;
		Savesel=1;
		#10;
		//´æ×Ö½Ú 56877887
		DI=32'h12345687;
		Savesel=2;
		Address=32'h00000008;
		#10
		DI=32'h12345678;
		Savesel=2;
		Address=32'h00000009;
		#10
		DI=32'h12345687;
		Savesel=2;
		Address=32'h0000000a;
		#10
		DI=32'h12345656;
		Savesel=2;
		Address=32'h0000000b;
		#10
		
		DMEn=0;
		//È¡×Ö
		Readsel=3'b000;
		Address=32'h00000000;
		#10
		Readsel=3'b000;
		Address=32'h00000004;
		#10
		Readsel=3'b000;
		Address=32'h00000008;
		#10
		//È¡ÎÞ·ûºÅ°ë×Ö
		Readsel=3'b001;
		Address=32'h00000000;
		#10;
		Address=32'h00000001;
		#10;
		Address=32'h00000002;
		#10;
		Address=32'h00000003;
		#10;
		Address=32'h00000004;
		#10;
		Address=32'h00000005;
		#10;
		Address=32'h00000006;
		#10;
		Address=32'h00000007;
		#10;
		Address=32'h00000008;
		#10;
		Address=32'h00000009;
		#10;
		Address=32'h0000000a;
		#10;
		Address=32'h0000000b;
		#10;
		Address=32'h0000000c;
		#10;
		//È¡·ûºÅ°ë×Ö
		Readsel=3'b010;
		Address=32'h00000000;
		#10;
		Address=32'h00000001;
		#10;
		Address=32'h00000002;
		#10;
		Address=32'h00000003;
		#10;
		Address=32'h00000004;
		#10;
		Address=32'h00000005;
		#10;
		Address=32'h00000006;
		#10;
		Address=32'h00000007;
		#10;
		Address=32'h00000008;
		#10;
		Address=32'h00000009;
		#10;
		Address=32'h0000000a;
		#10;
		Address=32'h0000000b;
		#10;
		Address=32'h0000000c;
		#10;
		//È¡ÎÞ·ûºÅ×Ö½Ú
		Readsel=3'b011;
		Address=32'h00000000;
		#10;
		Address=32'h00000001;
		#10;
		Address=32'h00000002;
		#10;
		Address=32'h00000003;
		#10;
		Address=32'h00000004;
		#10;
		Address=32'h00000005;
		#10;
		Address=32'h00000006;
		#10;
		Address=32'h00000007;
		#10;
		Address=32'h00000008;
		#10;
		Address=32'h00000009;
		#10;
		Address=32'h0000000a;
		#10;
		Address=32'h0000000b;
		#10;
		Address=32'h0000000c;
		#10;
		//È¡·ûºÅ×Ö½Ú
		Readsel=3'b100;
		Address=32'h00000000;
		#10;
		Address=32'h00000001;
		#10;
		Address=32'h00000002;
		#10;
		Address=32'h00000003;
		#10;
		Address=32'h00000004;
		#10;
		Address=32'h00000005;
		#10;
		Address=32'h00000006;
		#10;
		Address=32'h00000007;
		#10;
		Address=32'h00000008;
		#10;
		Address=32'h00000009;
		#10;
		Address=32'h0000000a;
		#10;
		Address=32'h0000000b;
		#10;
		Address=32'h0000000c;
		#10;
	end
   always #5 clk=~clk;
endmodule

