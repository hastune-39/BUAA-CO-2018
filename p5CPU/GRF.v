`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:30:14 11/09/2019 
// Design Name: 
// Module Name:    GRF 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module GRF(
    input clk,
    input reset,
    input [4:0] A1,
    input [4:0] A2,
    input [4:0] A3,
    input [31:0] WD,
    input En,
	 input [31:0] PCadd4,
    output [31:0] BUSA,
    output [31:0] BUSB
    );
	 
	 reg [31:0] register [31:0];
	 integer i =0;
	 
	 //≥ı ºªØ
	 initial begin
	 for(i=0;i<32;i=i+1)
		register[i]=0;
	 end
	 
	 always @(posedge clk ) begin
		if (reset)
		for(i=0;i<32;i=i+1)register[i]<=0;
		else begin
			if(En&&A3!=5'b00000) begin
				register[A3]<=WD;
				$display("%d@%h: $%d <= %h", $time, PCadd4-32'h00000008, A3, WD);
			end
		end
	 end
	 
	 // ‰≥ˆ
	 assign BUSA=(En&&A3==A1&&A3!=5'b00000)? WD: register[A1];
	 assign BUSB=(En&&A3==A2&&A3!=5'b00000)? WD: register[A2];
endmodule
