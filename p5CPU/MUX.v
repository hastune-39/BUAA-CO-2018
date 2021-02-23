`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:13:54 11/09/2019 
// Design Name: 
// Module Name:    MUX 
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
module MUX(
	 input [4:0] rd,
	 input [4:0] rt,
	 input [1:0]A3sel,
	 output reg [4:0] A3,
	 
	 input [31:0] C,
	 input [31:0] DO,
	 input [31:0] PCadd4,
	 input [1:0] WDsel,
	 output reg [31:0] WD,
	 
	 input [31:0] BUSB,
	 input [31:0] EXTout,
	 input Bsel,
	 output reg[31:0] B)
	 ;
	 
	 //GRF A3
	 always @(*) begin
		case(A3sel)
			2'b00:A3<=rd;
			2'b01:A3<=rt;
			2'b10:A3<=5'b11111;
			default:A3<=0;
		endcase
	 end
	 
	 //GRF DI
	 always @(*) begin
		case(WDsel)
			2'b00:WD<=C;
			2'b01:WD<=DO;
			2'b10:WD<=PCadd4;
			default:WD<=0;
		endcase
	 end
	 
	 //ALU B
	 always @(*) begin
		B<=(Bsel==1)?EXTout:BUSB;
	 end
	 
	 
endmodule
