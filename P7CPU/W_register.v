`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:21:13 11/17/2019 
// Design Name: 
// Module Name:    W_register 
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
module W_register(
	 input clk,
	 input reset,
	 input clear,
	 
	 //结果寄存器//
    input [31:0] IF,
    input [31:0] PCadd8,
    input [31:0] BUSA,
    input [31:0] BUSB,
    input [31:0] EXTout,
	 input [31:0] ALUout,
	 input overflow,
	 input [31:0] HI,
	 input [31:0] LO,
	 input [4:0] Busy,
	 input [31:0] DMout,
	 input [31:0] CP0_Data_out,
	 //控制信号 不管有没有用，都往下传
	 //输入控制信号
	 input [3:0] PCsel,
	 input [3:0] comparesel,
	 input [3:0] EXTsel,
	 input [7:0] ALUsel,
	 input Bsel,
	 input DMEn,
	 input DM_Read_En,
	 input [1:0] Savesel,
	 input [2:0] Readsel,
	 input [2:0] A3sel,
	 input [2:0] WDsel,
	 input GRFEn,
	 input rs_ifuse,
	 input rt_ifuse,
	 input [2:0] rs_Tuse,
	 input [2:0] rt_Tuse,
	 input [2:0] Tnew,
	 input MAD_start,
	 input HI_En,
	 input LO_En,
	 input [2:0] MAD_sel,
	 input ifMAD,
	 //异常控制信号
	 input IFU_Exc,
	 input undefined_code,
	 input CP0_En,
	 input CP0_EXL_clear,
	 input delay,
	 input eret,
	 
	 //结果寄存器
	 output reg [31:0] W_IF,
    output reg [31:0] W_PCadd8,
    output reg [31:0] W_BUSA,
    output reg [31:0] W_BUSB,
    output reg [31:0] W_EXTout,
	 output reg [31:0] W_ALUout,
	 output reg W_overflow,
	 output reg [31:0] W_HI,
	 output reg [31:0] W_LO,
	 output reg [4:0] W_Busy,
	 output reg [31:0] W_DMout,
	 output reg [31:0] W_CP0_Data_out,
	 //控制信号寄存器
	 output reg [3:0] W_PCsel,
	 output reg [3:0] W_comparesel,
	 output reg [3:0] W_EXTsel,
	 output reg [7:0] W_ALUsel,
	 output reg W_Bsel,
	 output reg W_DMEn,
	 output reg W_DM_Read_En,
	 output reg [1:0] W_Savesel,
	 output reg [2:0] W_Readsel,
	 output reg [2:0] W_A3sel,
	 output reg [2:0] W_WDsel,
	 output reg W_GRFEn,
	 output reg W_rs_ifuse,
	 output reg W_rt_ifuse,
	 output reg [2:0] W_rs_Tuse,
	 output reg [2:0] W_rt_Tuse,
	 output reg [2:0] W_Tnew,
	 output reg W_MAD_start,
	 output reg W_HI_En,
	 output reg W_LO_En,
	 output reg [2:0] W_MAD_sel,
	 output reg W_ifMAD,
	 //异常控制信号
	 output reg W_IFU_Exc,
	 output reg W_undefined_code,
	 output reg W_CP0_En,
	 output reg W_CP0_EXL_clear,
	 output reg W_delay,
	 output reg W_eret
    );
	 
	 `define Tnew_max 5
	 always @(posedge clk) begin
		if(reset|clear) begin
		    W_IF<=0;
			 W_PCadd8<=0;
			 W_BUSA<=0;
			 W_BUSB<=0;
			 W_EXTout<=0;
			 W_ALUout<=0;
			 W_overflow<=0;
			 W_HI<=0;
			 W_LO<=0;
			 W_Busy<=0;
			 W_DMout<=0;
			 W_CP0_Data_out<=0;
			 
			 W_PCsel<=0;
			 W_comparesel<= 0;
			 W_EXTsel<=0;
			 W_ALUsel<=0;
			 W_Bsel<=0;
			 W_DMEn<=0;
			 W_DM_Read_En<=0;
			 W_Savesel<=0;
			 W_Readsel<=0;
			 W_A3sel<=0;
			 W_WDsel<=0;
			 W_GRFEn<=0;
			 W_rs_ifuse<=0;
			 W_rt_ifuse<=0;
			 W_rs_Tuse<=0;
			 W_rt_Tuse<=0;
			 W_Tnew<=0;
			 W_MAD_start<=0;
			 W_HI_En<=0;
			 W_LO_En<=0;
			 W_MAD_sel<=0;
			 W_ifMAD<=0;
			 
			 W_IFU_Exc<=0;
			 W_undefined_code<=0;
			 W_CP0_En<=0;
			 W_CP0_EXL_clear<=0;
			 W_delay<=0;
			 W_eret<=0;
		end
		else begin
			 W_IF<=IF;
			 W_PCadd8<=PCadd8;
			 W_BUSA<=BUSA;
			 W_BUSB<=BUSB;
			 W_EXTout<=EXTout;
			 W_ALUout<=ALUout;
			 W_overflow<=overflow;
			 W_HI<=HI;
			 W_LO<=LO;
			 W_Busy<=Busy;
			 W_DMout<=DMout;
			 W_CP0_Data_out<=CP0_Data_out;
			 
			 W_PCsel<=PCsel;
			 W_comparesel<=comparesel;
			 W_EXTsel<=EXTsel;
			 W_ALUsel<=ALUsel;
			 W_Bsel<=Bsel;
			 W_DMEn<=DMEn;
			 W_DM_Read_En<=DM_Read_En;
			 W_Savesel<=Savesel;
			 W_Readsel<=Readsel;
			 W_A3sel<=A3sel;
			 W_WDsel<=WDsel;
			 W_GRFEn<=GRFEn;
			 W_rs_ifuse<=rs_ifuse;
			 W_rt_ifuse<=rt_ifuse;
			 W_rs_Tuse<=rs_Tuse;
			 W_rt_Tuse<=rt_Tuse;
			 if(Tnew>0)W_Tnew<=Tnew-1;
			 else W_Tnew<=Tnew;
			 W_MAD_start<=MAD_start;
			 W_HI_En<=HI_En;
			 W_LO_En<=LO_En;
			 W_MAD_sel<=MAD_sel;
			 W_ifMAD<=ifMAD;
			 
			 W_IFU_Exc<=IFU_Exc;
			 W_undefined_code<=undefined_code;
			 W_CP0_En<=CP0_En;
			 W_CP0_EXL_clear<=CP0_EXL_clear;
			 W_delay<=delay;
			 W_eret<=eret;
		end
	 end
endmodule
