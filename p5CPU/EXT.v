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
    input [1:0] EXTsel,
    output [31:0] EXTout
    );
	 
	 reg [31:0] middle;
	 
	 always @(*) begin
		case(EXTsel)
			2'b00:middle<={16'h0000,imm};
			2'b01:middle<={{16{imm[15]}},imm};
			2'b10:middle<={imm,16'h0000};
			default:middle<=0;
		endcase
	 end
	 
	 //Êä³ö
	 assign EXTout=middle;
endmodule
