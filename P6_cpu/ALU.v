`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:46:54 11/09/2019 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input [31:0] A,
    input [31:0] B,
	 input [31:0] IF,
    input [7:0] ALUsel,
    output reg [31:0] C
    );
	 //ALUºÏ≤‚£®°Ã£©
	 `define s IF[10:6]
	 `define sA A[4:0]
	 integer i,sum;
	 
	 always @(*) begin//∂‡”‡º∆À„”–”∞œÏ√¥£ø£ø£ø
		case(ALUsel)
			8'd0:
				C<=A+B;
			8'd1:
				C<=A-B;
			8'd2:
				C<=A|B;
			8'd3://≤‚ ‘ ¬ﬂº≠◊Û“∆???
				for(i=0;i<32;i=i+1)
					if(i<`s) C[i]<=0;
					else C[i]<=B[i-`s];
			8'd4://≤‚ ‘ ¬ﬂº≠”““∆
				for(i=0;i<32;i=i+1)
					if(i<32-`s) C[i]<=B[i+`s];
					else C[i]<=0;
			8'd5://≤‚ ‘ À„ ı”““∆
				for(i=0;i<32;i=i+1)
					if(i<32-`s) C[i]<=B[i+`s];
					else C[i]<=B[31];
			8'd6://≤‚ ‘ sllv
				for(i=0;i<32;i=i+1)
					if(i<`sA) C[i]<=0;
					else C[i]<=B[i-`sA];
			8'd7://≤‚ ‘ ¬ﬂº≠ø…±‰”““∆ srlv
				for(i=0;i<32;i=i+1)
					if(i<32-`sA) C[i]<=B[i+`sA];
					else C[i]<=0;
			8'd8://≤‚ ‘ srav
				for(i=0;i<32;i=i+1)
					if(i<32-`sA) C[i]<=B[i+`sA];
					else C[i]<=B[31];
			8'd9://«“
				C<=A&B;
			8'd10://“ÏªÚ
				C<=A^B;
			8'd11://ªÚ∑«
				C<=~(A|B);
			8'd12://≤‚ ‘ slt
				if($signed(A)<$signed(B))C<=32'h00000001;
				else C<=0;
			8'd13://≤‚ ‘sltu
				if({1'b0,A}<{1'b0,B}) C<=32'h00000001;
				else C<=0;
			default:
				C<=0;
		endcase
	 end
	 
endmodule
