`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:25:48 11/10/2019 
// Design Name: 
// Module Name:    datapath 
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
module datapath(
	 input clk,
	 input reset
    );
	 
	 `define rs 25:21
	 `define rt 20:16
	 `define rd 15:11

	 //IFU输出
	 wire [31:0] IF;
	 wire [31:0] PCadd4;
	 //GRF输出
	 wire [31:0] BUSA;
	 wire [31:0] BUSB;
	 //EXX输出
	 wire [31:0] EXTout;
	 //compare输出
	 wire ifequal;
	 //ALU输出
	 wire [31:0] ALUout;
	 //DM输出
	 wire [31:0] DMout;
	 //常规控制器输出
	 wire [1:0] PCsel;
	 wire [1:0] EXTsel;
	 wire [2:0] ALUsel;
	 wire Bsel;
	 wire DMEn;
	 wire [1:0] A3sel;
	 wire [1:0] WDsel;
	 wire GRFEn;
	 //流水级寄存器输出
	 //D级
	 wire [31:0] D_IF;
    wire[31:0] D_PCadd4;
	 //E级
	 wire [31:0] E_IF;
    wire [31:0] E_PCadd4;
    wire [31:0] E_BUSA;
    wire [31:0] E_BUSB;
    wire [31:0] E_EXTout;
    wire [2:0] E_ALUsel;
    wire [0:0] E_Bsel;
    wire E_DMEn;
    wire [1:0] E_A3sel;
    wire [1:0] E_WDsel;
	 wire E_GRFEn;
	 //M级
	 wire [31:0] M_IF;
    wire [31:0] M_PCadd4;
    wire [31:0] M_BUSB;
    wire [31:0] M_ALUout;
    wire M_DMEn;
    wire [1:0] M_A3sel;
    wire [1:0] M_WDsel;
	 wire M_GRFEn;
	 //W级
	 wire [31:0] W_IF;
    wire [31:0] W_PCadd4;
    wire [31:0] W_ALUout;
    wire [31:0] W_DMout;
    wire [1:0] W_A3sel;
    wire [1:0] W_WDsel;
	 wire W_GRFEn;
	 //多路选择
	 //转发
	 wire [31:0] MFRSD;
	 wire [31:0] MFRTD;
	 wire [31:0] MFRSE;
	 wire [31:0] MFRTE;
	 wire [31:0] MFRTM;
	 //常规多路选择
	 wire [31:0] MUX_B;
	 wire [4:0] MUX_A3;
	 wire [31:0] MUX_WD;
	 //冒险控制器
	 wire PCEn;
    wire D_En;
    wire D_clear;
	 wire E_clear;
    wire [2:0] RSDsel;
    wire [2:0] RTDsel;
    wire [2:0] RSEsel;
    wire [2:0] RTEsel;
    wire [2:0] RTMsel;
	 
	 //多路选择部分
	 //转发选择
	 assign MFRSD=(RSDsel==3'd1)? E_PCadd4:
					  (RSDsel==3'd2)? M_PCadd4:
					  (RSDsel==3'd3)? M_ALUout:
					  (RSDsel==3'd4)? MUX_WD:
											BUSA; //D级默认rs输出为BUSA
	
	 assign MFRTD=(RTDsel==3'd1)? E_PCadd4:
					  (RTDsel==3'd2)? M_PCadd4:
					  (RTDsel==3'd3)? M_ALUout:
					  (RTDsel==3'd4)? MUX_WD:
											BUSB; //D级默认rt输出为BUSB
	 assign MFRSE=(RSEsel==3'd2)? M_PCadd4:
					  (RSEsel==3'd3)? M_ALUout:
					  (RSEsel==3'd4)? MUX_WD:
											E_BUSA; //E级默认rs为E_BUSA
											
	 assign MFRTE=(RTEsel==3'd2)? M_PCadd4:
					  (RTEsel==3'd3)? M_ALUout:
					  (RTEsel==3'd4)? MUX_WD:
											E_BUSB; //E级默认rt为E_BUSB
											
	 assign MFRTM=(RTMsel==3'd4)? MUX_WD: //balabala
											M_BUSB;
											
	 //多路选择
	 assign MUX_B=(E_Bsel==1)?E_EXTout:MFRTE;
	 
	 assign MUX_A3=(W_A3sel==2'b10)? 5'b11111:
					  (W_A3sel==2'b01)? W_IF[`rt]:
											W_IF[`rd];
				
	 assign MUX_WD=(W_WDsel==2'b10)? W_PCadd4://延时槽！！
						(W_WDsel==2'b01)? W_DMout:
											 W_ALUout;
											 
	 //数据通路
	 IFU myIFU(clk, reset, D_IF[25:0], ifequal, MFRSD, PCsel, PCEn, IF, PCadd4);
	 //
	 D_register myD_register(clk, reset, IF, PCadd4, D_En, D_clear, D_IF, D_PCadd4);
	 //
	 GRF myGRF(clk, reset, D_IF[`rs], D_IF[`rt], MUX_A3, MUX_WD, W_GRFEn, W_PCadd4, BUSA, BUSB);
	 //
	 EXT myEXT(D_IF[15:0], EXTsel, EXTout);
	 //
	 compare mycompare(MFRSD, MFRTD, ifequal);
	 //
	 E_register myE_register(clk, reset, E_clear, D_IF, D_PCadd4, BUSA, BUSB, EXTout, ALUsel, Bsel, DMEn, A3sel, WDsel, GRFEn, E_IF, E_PCadd4, E_BUSA, E_BUSB, E_EXTout, E_ALUsel, E_Bsel, E_DMEn, E_A3sel, E_WDsel, E_GRFEn);
	 //
	 ALU my_ALU(MFRSE, MUX_B, E_ALUsel, ALUout);
	 //
	 M_register myM_register(clk, reset, E_IF, E_PCadd4, E_BUSB, ALUout, E_DMEn, E_A3sel, E_WDsel, E_GRFEn, M_IF, M_PCadd4, M_BUSB, M_ALUout, M_DMEn, M_A3sel, M_WDsel, M_GRFEn);
	 //
	 DM myDM(clk, reset, M_ALUout, MFRTM, M_DMEn, M_PCadd4, DMout);
	 //
	 W_register myW_register(clk, reset, M_IF, M_PCadd4, M_ALUout, DMout, M_A3sel, M_WDsel, M_GRFEn, W_IF, W_PCadd4, W_ALUout, W_DMout, W_A3sel, W_WDsel, W_GRFEn);
	 //
	 controller mycontroller(D_IF[31:26], D_IF[5:0], PCsel, EXTsel, ALUsel, Bsel, DMEn, A3sel, WDsel, GRFEn);
	 //
	 RFcontroller myRFcontroller(D_IF, E_IF, M_IF, W_IF, E_GRFEn, M_GRFEn, W_GRFEn, PCEn, D_En, D_clear, E_clear, RSDsel, RTDsel, RSEsel, RTEsel, RTMsel);
endmodule
