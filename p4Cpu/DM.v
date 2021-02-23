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
    input [31:0] Address,
    input [31:0] DI,
    input reset,
    input clk,
	 input En,
	 input [1:0]DMsel,
	 input [31:0] PCadd4,
    output reg [31:0] DO
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
			if(En)
				case (DMsel)
					2'b00:begin
								memory[{Address[11:2],2'b00}]<=DI;
								$display ("@%h: *%h <= %h", PCadd4-32'h00000004, Address, DI);
							end
					2'b01:for(i=0;i<16;i=i+1)memory[{Address[11:2],2'b00}][16*Address[1]+i]<=DI[i];
					2'b10:for(i=0;i<8;i=i+1)memory[{Address[11:2],2'b00}][8*Address[1:0]+i]<=DI[i];
					default:memory[{Address[11:2],2'b00}]<=DI;
				endcase
	 end

	 //输出
	 always @(*) begin
		case(DMsel)
			2'b00:DO<=memory[{Address[11:2],2'b00}];
			2'b01:for(i=0;i<32;i=i+1)
						if(i<16)
							DO[i]<=memory[{Address[11:2],2'b00}][16*Address[1]+i];
						else
							if(memory[{Address[11:2],2'b00}][16*Address[1]+15]==1'b1)
								DO[i]<=1'b1;
							else
								DO[i]<=1'b0;
			2'b10:for(i=0;i<32;i=i+1)
							if(i<8)
								DO[i]<=memory[{Address[11:2],2'b00}][8*Address[1:0]+i];
							else
								if(memory[{Address[11:2],2'b00}][8*Address[1:0]+7]==1'b1)
									DO[i]<=1'b1;
								else
									DO[i]<=1'b0;
							
			default:DO<=0;
		endcase
	 end
	 
endmodule
