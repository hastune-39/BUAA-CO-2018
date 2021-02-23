`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:56:32 11/09/2019 
// Design Name: 
// Module Name:    DM 
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
module DM(
	 input clk,
	 input reset,
    input [31:0] Address,
    input [31:0] DI,
	 input DMEn,
	 input [31:0] PCadd4,
    output [31:0] DMout
    );
	 
	 reg [31:0] memory [1023:0];
	 //初始化
	 integer i;
	 
	 initial begin
	 for(i=0;i<1024;i=i+1)memory[i]=0;
	 end
	 
	 //更新
	 always @(posedge clk ) begin
		if(reset)
			for(i=0;i<1024;i=i+1)memory[i]<=0;
		else
			if(DMEn) begin
				memory[Address[11:2]]<=DI;
				$display("%d@%h: *%h <= %h", $time, PCadd4-32'h00000008, {Address[31:2],2'b00}, DI);
			end
	 end
	 
	 assign DMout=memory[Address[11:2]];
endmodule
