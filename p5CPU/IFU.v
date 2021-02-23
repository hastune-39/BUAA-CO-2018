`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:38:38 11/09/2019 
// Design Name: 
// Module Name:    IFU 
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
module IFU(
    input clk,
    input reset,
	 input [25:0]imm,
	 input ifequal,
	 input [31:0] BUSA,
	 input [1:0] PCsel,
	 input PCEn,
	 output [31:0] instruction,
	 output [31:0] PCadd4
    );
	
	reg [31:0] memory [1023:0];
	reg [31:0] PC;
	
	initial begin
		PC=0;
	end
	
	initial begin
		$readmemh ("code.txt",memory,0);
	end
	
	//若延时槽时冻住，怎么办？
	always @ (posedge clk ) begin
		if(reset)
			PC<=0;
		else begin
			if(PCEn) begin
				case (PCsel)
					2'b00: begin//常规+4
						PC<=PC+4;
						end
					2'b01: //beq跳转
						if(ifequal==1)
							PC<=PC+{{14{imm[15]}},(imm[15:0]),2'b00}; //截断值太恐怖了，注意同位数加减，要不然减法就莫得了，会给你补零
						else
							PC<=PC+32'h00000004;
					2'b10: //jal或者j
						PC<={PC[31:28],imm[25:0],2'b00}-32'h00003000;
					2'b11: //jr
						PC<=BUSA-32'h00003000;
				endcase
			end
		end
	end
	
	assign instruction=memory[PC/4];
	assign PCadd4=PC+8+32'h00003000;
endmodule
