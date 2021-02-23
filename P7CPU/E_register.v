`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:12:02 11/17/2019 
// Design Name: 
// Module Name:    E_register 
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
module E_register(
	 input clk,
	 input reset,
	 input clear,
	 
	 //����Ĵ���
    input [31:0] IF,
    input [31:0] PCadd8,
    input [31:0] BUSA,
    input [31:0] BUSB,
    input [31:0] EXTout,
	 //�����ź� ������û���ã������´�
	 //��������ź�
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
	 //�쳣�����ź�
	 input IFU_Exc,
	 input undefined_code,
	 input CP0_En,
	 input CP0_EXL_clear,
	 input delay,
	 input eret,
	 
	 //����Ĵ���
	 output reg [31:0] E_IF,
    output reg [31:0] E_PCadd8,
    output reg [31:0] E_BUSA,
    output reg [31:0] E_BUSB,
    output reg [31:0] E_EXTout,
	 //�����źżĴ���
	 output reg [3:0] E_PCsel,
	 output reg [3:0] E_comparesel,
	 output reg [3:0] E_EXTsel,
	 output reg [7:0] E_ALUsel,
	 output reg E_Bsel,
	 output reg E_DMEn,
	 output reg E_DM_Read_En,
	 output reg [1:0] E_Savesel,
	 output reg [2:0] E_Readsel,
	 output reg [2:0] E_A3sel,
	 output reg [2:0] E_WDsel,
	 output reg E_GRFEn,
	 output reg E_rs_ifuse,
	 output reg E_rt_ifuse,
	 output reg [2:0] E_rs_Tuse,
	 output reg [2:0] E_rt_Tuse,
	 output reg [2:0] E_Tnew,
	 output reg E_MAD_start,
	 output reg E_HI_En,
	 output reg E_LO_En,
	 output reg [2:0] E_MAD_sel,
	 output reg E_ifMAD,
	 //�쳣�����ź�
	 output reg E_IFU_Exc,
	 output reg E_undefined_code,
	 output reg E_CP0_En,
	 output reg E_CP0_EXL_clear,
	 output reg E_delay,
	 output reg E_eret
    );
	 
	 `define Tnew_max 5
	 always @(posedge clk) begin
		if(reset|clear) begin
		    E_IF<=0;
			 E_PCadd8<=0;
			 E_BUSA<=0;
			 E_BUSB<=0;
			 E_EXTout<=0;
			 
			 E_PCsel<=0;
			 E_comparesel<= 0;
			 E_EXTsel<=0;
			 E_ALUsel<=0;
			 E_Bsel<=0;
			 E_DMEn<=0;
			 E_DM_Read_En<=0;
			 E_Savesel<=0;
			 E_Readsel<=0;
			 E_A3sel<=0;
			 E_WDsel<=0;
			 E_GRFEn<=0;
			 E_rs_ifuse<=0;
			 E_rt_ifuse<=0;
			 E_rs_Tuse<=0;
			 E_rt_Tuse<=0;
			 E_Tnew<=0;
			 E_MAD_start<=0;
			 E_HI_En<=0;
			 E_LO_En<=0;
			 E_MAD_sel<=0;
			 E_ifMAD<=0;
			 
			 E_IFU_Exc<=0;
			 E_undefined_code<=0;
			 E_CP0_En<=0;
			 E_delay<=0;
			 E_eret<=0;
		end
		else begin
			 E_IF<=IF;
			 E_PCadd8<=PCadd8;
			 E_BUSA<=BUSA;
			 E_BUSB<=BUSB;
			 E_EXTout<=EXTout;
			 
			 E_PCsel<=PCsel;
			 E_comparesel<=comparesel;
			 E_EXTsel<=EXTsel;
			 E_ALUsel<=ALUsel;
			 E_Bsel<=Bsel;
			 E_DMEn<=DMEn;
			 E_DM_Read_En<=DM_Read_En;
			 E_Savesel<=Savesel;
			 E_Readsel<=Readsel;
			 E_A3sel<=A3sel;
			 E_WDsel<=WDsel;
			 E_GRFEn<=GRFEn;
			 E_rs_ifuse<=rs_ifuse;
			 E_rt_ifuse<=rt_ifuse;
			 E_rs_Tuse<=rs_Tuse;
			 E_rt_Tuse<=rt_Tuse;
			 E_Tnew<=Tnew;
			 E_MAD_start<=MAD_start;
			 E_HI_En<=HI_En;
			 E_LO_En<=LO_En;
			 E_MAD_sel<=MAD_sel;
			 E_ifMAD<=ifMAD;
			 
			 E_IFU_Exc<=IFU_Exc;
			 E_undefined_code<=undefined_code;
			 E_CP0_En<=CP0_En;
			 E_CP0_EXL_clear<=CP0_EXL_clear;
			 E_delay<=delay;
			 E_eret<=eret;
		end
	 end
endmodule
