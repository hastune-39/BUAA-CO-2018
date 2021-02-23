`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:17:18 11/17/2019 
// Design Name: 
// Module Name:    M_register 
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
module M_register(
	 input clk,
	 input reset,
	 input clear,
	 
	 //结果寄存器
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
	 input ALU_Exc,
	 input CP0_En,
	 input CP0_EXL_clear,
	 input delay,
	 input eret,
	 
	 //结果寄存器
	 output reg [31:0] M_IF,
    output reg [31:0] M_PCadd8,
    output reg [31:0] M_BUSA,
    output reg [31:0] M_BUSB,
    output reg [31:0] M_EXTout,
	 output reg [31:0] M_ALUout,
	 output reg M_overflow,
	 output reg [31:0] M_HI,
	 output reg [31:0] M_LO,
	 output reg [4:0] M_Busy,
	 //控制信号寄存器
	 output reg [3:0] M_PCsel,
	 output reg [3:0] M_comparesel,
	 output reg [3:0] M_EXTsel,
	 output reg [7:0] M_ALUsel,
	 output reg M_Bsel,
	 output reg M_DMEn,
	 output reg M_DM_Read_En,
	 output reg [1:0] M_Savesel,
	 output reg [2:0] M_Readsel,
	 output reg [2:0] M_A3sel,
	 output reg [2:0] M_WDsel,
	 output reg M_GRFEn,
	 output reg M_rs_ifuse,
	 output reg M_rt_ifuse,
	 output reg [2:0] M_rs_Tuse,
	 output reg [2:0] M_rt_Tuse,
	 output reg [2:0] M_Tnew,
	 output reg M_MAD_start,
	 output reg M_HI_En,
	 output reg M_LO_En,
	 output reg [2:0] M_MAD_sel,
	 output reg M_ifMAD,
	 //异常控制信号
	 output reg M_IFU_Exc,
	 output reg M_undefined_code,
	 output reg M_ALU_Exc,
	 output reg M_CP0_En,
	 output reg M_CP0_EXL_clear,
	 output reg M_delay,
	 output reg M_eret
    );
	 
	 `define Tnew_max 5
	 always @(posedge clk) begin
		if(reset|clear) begin
		    M_IF<=0;
			 M_PCadd8<=0;
			 M_BUSA<=0;
			 M_BUSB<=0;
			 M_EXTout<=0;
			 M_ALUout<=0;
			 M_overflow<=0;
			 M_HI<=0;
			 M_LO<=0;
			 M_Busy<=0;
			 
			 M_PCsel<=0;
			 M_comparesel<= 0;
			 M_EXTsel<=0;
			 M_ALUsel<=0;
			 M_Bsel<=0;
			 M_DMEn<=0;
			 M_DM_Read_En<=0;
			 M_Savesel<=0;
			 M_Readsel<=0;
			 M_A3sel<=0;
			 M_WDsel<=0;
			 M_GRFEn<=0;
			 M_rs_ifuse<=0;
			 M_rt_ifuse<=0;
			 M_rs_Tuse<=0;
			 M_rt_Tuse<=0;
			 M_Tnew<=0;
			 M_MAD_start<=0;
			 M_HI_En<=0;
			 M_LO_En<=0;
			 M_MAD_sel<=0;
			 M_ifMAD<=0;
			 
			 M_IFU_Exc<=0;
			 M_undefined_code<=0;
			 M_ALU_Exc<=0;
			 M_CP0_En<=0;
			 M_CP0_EXL_clear<=0;
			 M_delay<=0;
			 M_eret<=0;
		end
		else begin
			 M_IF<=IF;
			 M_PCadd8<=PCadd8;
			 M_BUSA<=BUSA;
			 M_BUSB<=BUSB;
			 M_EXTout<=EXTout;
			 M_ALUout<=ALUout;
			 M_overflow<=overflow;
			 M_HI<=HI;
			 M_LO<=LO;
			 M_Busy<=Busy;
			 
			 M_PCsel<=PCsel;
			 M_comparesel<=comparesel;
			 M_EXTsel<=EXTsel;
			 M_ALUsel<=ALUsel;
			 M_Bsel<=Bsel;
			 M_DMEn<=DMEn;
			 M_DM_Read_En<=DM_Read_En;
			 M_Savesel<=Savesel;
			 M_Readsel<=Readsel;
			 M_A3sel<=A3sel;
			 M_WDsel<=WDsel;
			 M_GRFEn<=GRFEn;
			 M_rs_ifuse<=rs_ifuse;
			 M_rt_ifuse<=rt_ifuse;
			 M_rs_Tuse<=rs_Tuse;
			 M_rt_Tuse<=rt_Tuse;
			 if(Tnew>0)M_Tnew<=Tnew-1;
			 else M_Tnew<=Tnew;
			 M_MAD_start<=MAD_start;
			 M_HI_En<=HI_En;
			 M_LO_En<=LO_En;
			 M_MAD_sel<=MAD_sel;
			 M_ifMAD<=ifMAD;
			 
			 M_IFU_Exc<=IFU_Exc;
			 M_undefined_code<=undefined_code;
			 M_ALU_Exc<=ALU_Exc;
			 
			 M_CP0_En<=CP0_En;
			 M_CP0_EXL_clear<=CP0_EXL_clear;
			 M_delay<=delay;
			 M_eret<=eret;
		end
	 end
endmodule
