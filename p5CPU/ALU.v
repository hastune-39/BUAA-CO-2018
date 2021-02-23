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
    input [2:0] ALUsel,
    output reg [31:0] C
    );
	 
	 integer i,sum;
	 
	 always @(*) begin
		case(ALUsel)
			3'b000:
				C<=A+B;
			3'b001:
				C<=A-B;
			3'b010:
				C<=A|B;
			3'b011:
				C<=(A==B)?1:0;
			3'b100:
				C<=A&B;
			3'b101:
				begin
					for(i=0,sum=0;i<31;i=i+1)sum=sum+A[i];
					if(A[31]==0&&sum==1)
						C<=1;
					else
						C<=0;
				end
			default:
				C<=0;
		endcase
	 end
	 
endmodule
