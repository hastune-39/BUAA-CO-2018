`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:39:50 11/17/2019 
// Design Name: 
// Module Name:    compare 
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
module compare(
    input [31:0] num1,
    input [31:0] num2,
	 input [3:0] comparesel,
    output reg ifequal
    );
	 //compareÍ¨¹ý¼ìÑé
	 always @(*) begin
		case (comparesel)
			4'd1://beq
				if(num1==num2) ifequal<=1;
				else           ifequal<=0;
			4'd2://bne
				if(num1!=num2) ifequal<=1;
				else           ifequal<=0;
			4'd3://blez
				if(num1==0||num1[31]==1) ifequal<=1;
				else                     ifequal<=0;
			4'd4://bgtz
				if(num1[31]==0&&num1!=0) ifequal<=1;
				else                     ifequal<=0;
			4'd5://bltz
				if(num1[31]==1&&num1!=0) ifequal<=1;
				else                     ifequal<=0;
			4'd6://bgez
				if(num1==0||num1[31]==0) ifequal<=1;
				else                     ifequal<=0;
			default:ifequal<=0;
		endcase
	 end
endmodule
