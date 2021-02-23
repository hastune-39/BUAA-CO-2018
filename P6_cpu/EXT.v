`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:29:31 11/09/2019 
// Design Name: 
// Module Name:    EXT 
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
module EXT(
    input [15:0] imm,
    input [3:0] EXTsel,
    output [31:0] EXTout
    );
	 
	 reg [31:0] middle;
	 
	 always @(*) begin
		case(EXTsel)
			4'd0:middle<={16'h0000,imm};
			4'd1:middle<={{16{imm[15]}},imm};
			4'd2:middle<={imm,16'h0000}; //pb这个在ALU里计算
			default:middle<=0;
		endcase
	 end
	 
	 //输出
	 assign EXTout=middle;
endmodule
