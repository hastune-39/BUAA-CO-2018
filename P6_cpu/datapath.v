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
	 wire [31:0] PCadd8;
	 //GRF输出
	 wire [31:0] BUSA;
	 wire [31:0] BUSB;
	 //EXX输出
	 wire [31:0] EXTout;
	 //compare输出
	 wire ifequal;
	 //ALU输出
	 wire [31:0] ALUout;
	 //MAD输出
	 wire [4:0] Busy;
	 wire [31:0] BUS_HI;
	 wire [31:0] BUS_LO;
	 //DM输出
	 wire [31:0] DMout;
	 //常规控制器输出
	 wire [3:0] PCsel;
	 wire [3:0] comparesel;
	 wire [3:0] EXTsel;
	 wire [7:0] ALUsel;
	 wire Bsel;
	 wire DMEn;
	 wire [1:0] Savesel;
	 wire [2:0] Readsel;
	 wire [2:0] A3sel;
	 wire [2:0] WDsel;
	 wire GRFEn;
	 wire rs_ifuse;
	 wire rt_ifuse;
	 wire [2:0] rs_Tuse;
	 wire [2:0] rt_Tuse;
	 wire [2:0] Tnew;
	 wire MAD_start;
	 wire HI_En;
	 wire LO_En;
	 wire [2:0] MAD_sel;
	 wire ifMAD;
	 //流水级寄存器输出
	 //D级
	 wire [31:0] D_IF;
    wire[31:0] D_PCadd8;
	 //E级
	 //结果寄存器
	 wire [31:0] E_IF;
    wire [31:0] E_PCadd8;
    wire [31:0] E_BUSA;
    wire [31:0] E_BUSB;
    wire [31:0] E_EXTout;
	 //控制信号寄存器
	 wire [3:0] E_PCsel;
	 wire [3:0] E_comparesel;
	 wire [3:0] E_EXTsel;
	 wire [7:0] E_ALUsel;
	 wire E_Bsel;
	 wire E_DMEn;
	 wire [1:0] E_Savesel;
	 wire [2:0] E_Readsel;
	 wire [2:0] E_A3sel;
	 wire [2:0] E_WDsel;
	 wire E_GRFEn;
	 wire E_rs_ifuse;
	 wire E_rt_ifuse;
	 wire [2:0] E_rs_Tuse;
	 wire [2:0] E_rt_Tuse;
	 wire [2:0] E_Tnew;
	 wire E_MAD_start;
	 wire E_HI_En;
	 wire E_LO_En;
	 wire [2:0] E_MAD_sel;
	 wire E_ifMAD;
	 //M级
	 //结果寄存器
	 wire [31:0] M_IF;
    wire [31:0] M_PCadd8;
    wire [31:0] M_BUSA;
    wire [31:0] M_BUSB;
    wire [31:0] M_EXTout;
	 wire [31:0] M_ALUout;
	 wire [31:0] M_HI;
	 wire [31:0] M_LO;
	 wire [4:0] M_Busy;
	 //控制信号寄存器
	 wire [3:0] M_PCsel;
	 wire [3:0] M_comparesel;
	 wire [3:0] M_EXTsel;
	 wire [7:0] M_ALUsel;
	 wire M_Bsel;
	 wire M_DMEn;
	 wire [1:0] M_Savesel;
	 wire [2:0] M_Readsel;
	 wire [2:0] M_A3sel;
	 wire [2:0] M_WDsel;
	 wire M_GRFEn;
	 wire M_rs_ifuse;
	 wire M_rt_ifuse;
	 wire [2:0] M_rs_Tuse;
	 wire [2:0] M_rt_Tuse;
	 wire [2:0] M_Tnew;
	 wire M_MAD_start;
	 wire M_HI_En;
	 wire M_LO_En;
	 wire [2:0] M_MAD_sel;
	 wire M_ifMAD;
	 //W级
	 //结果寄存器
	 wire [31:0] W_IF;
    wire [31:0] W_PCadd8;
    wire [31:0] W_BUSA;
    wire [31:0] W_BUSB;
    wire [31:0] W_EXTout;
	 wire [31:0] W_ALUout;
	 wire [31:0] W_HI;
	 wire [31:0] W_LO;
	 wire [4:0] W_Busy;
	 wire [31:0] W_DMout;
	 //控制信号寄存器
	 wire [3:0] W_PCsel;
	 wire [3:0] W_comparesel;
	 wire [3:0] W_EXTsel;
	 wire [7:0] W_ALUsel;
	 wire W_Bsel;
	 wire W_DMEn;
	 wire [1:0] W_Savesel;
	 wire [2:0] W_Readsel;
	 wire [2:0] W_A3sel;
	 wire [2:0] W_WDsel;
	 wire W_GRFEn;
	 wire W_rs_ifuse;
	 wire W_rt_ifuse;
	 wire [2:0] W_rs_Tuse;
	 wire [2:0] W_rt_Tuse;
	 wire [2:0] W_Tnew;
	 wire W_MAD_start;
	 wire W_HI_En;
	 wire W_LO_En;
	 wire [2:0] W_MAD_sel;
	 wire W_ifMAD;
	 
	 										
	 //多路选择
	 //常规多路选择
	 wire [31:0] E_B;
	 wire [4:0] E_A3;
	 wire [31:0] E_WD;
	 
	 wire [4:0] M_A3;
	 wire [31:0] M_WD;
	 
	 wire [4:0] W_A3;
	 wire [31:0] W_WD;
	 
	 assign E_B =(E_Bsel==1)?E_EXTout:MFRTE;
	 assign E_A3=(E_A3sel==4'd2)? 5'b11111:
					 (E_A3sel==4'd1)? E_IF[`rt]:
											 E_IF[`rd];
											 
    assign E_WD=(E_WDsel==4'd4) ?  0://E_HI没有！
					 (E_WDsel==4'd3) ?  0://E_LO没有！
					 (E_WDsel==4'd2) ?  E_PCadd8:
					 (E_WDsel==4'd1) ?  0://E_DMout没有！
											  0;//E_ALUout没有！
	 						  
	 assign M_A3=(M_A3sel==4'd2)? 5'b11111:
					 (M_A3sel==4'd1)? M_IF[`rt]:
											 M_IF[`rd];
											 
    assign M_WD=(M_WDsel==4'd4) ? M_HI:
					 (M_WDsel==4'd3) ? M_LO:
					 (M_WDsel==4'd2) ? M_PCadd8:
					 (M_WDsel==4'd1) ? 0://M_DMout没有！
											  M_ALUout;		
											  
	 assign W_A3=(W_A3sel==4'd2)? 5'b11111:
					 (W_A3sel==4'd1)? W_IF[`rt]:
											W_IF[`rd];
											 
    assign W_WD=(W_WDsel==4'd4) ?  W_HI:
					 (W_WDsel==4'd3) ?  W_LO:
					 (W_WDsel==4'd2) ?  W_PCadd8:
					 (W_WDsel==4'd1) ?  W_DMout:
											  W_ALUout;		
	
	 //暂停
	 //冒险控制器
	 wire stop;
	 wire PCEn;
    wire D_En;
	 wire E_clear;
	 
	 assign stop=(rs_ifuse)&&((rs_Tuse<E_Tnew&&E_A3!=5'b00000&&E_A3==D_IF[`rs])||(rs_Tuse<M_Tnew&&M_A3!=5'b00000&&M_A3==D_IF[`rs]))||
	             (rt_ifuse)&&((rt_Tuse<E_Tnew&&E_A3!=5'b00000&&E_A3==D_IF[`rt])||(rt_Tuse<M_Tnew&&M_A3!=5'b00000&&M_A3==D_IF[`rt]))||
					 (ifMAD&&Busy>0||ifMAD&&E_MAD_start)? 1:0;//暂停未检验
	 assign PCEn=(stop==0)? 1:0;
	 assign D_En=(stop==0)? 1:0;
	 assign E_clear=(stop)? 1:0;
	 //多路选择
	 //转发
	 wire [31:0] MFRSD;
	 wire [31:0] MFRTD;
	 wire [31:0] MFRSE;
	 wire [31:0] MFRTE;
	 wire [31:0] MFRSM;
	 wire [31:0] MFRTM;
	
    assign MFRSD=(E_GRFEn==1)&&(E_Tnew==0)&&(E_A3!=5'b00000)&&(E_A3==D_IF[`rs])? E_WD:
					  (M_GRFEn==1)&&(M_Tnew==0)&&(M_A3!=5'b00000)&&(M_A3==D_IF[`rs])? M_WD:
					  (W_GRFEn==1)&&(W_Tnew==0)&&(W_A3!=5'b00000)&&(W_A3==D_IF[`rs])? W_WD:
					                                                     BUSA;
																				
	 assign MFRTD=(E_GRFEn==1)&&(E_Tnew==0)&&(E_A3!=5'b00000)&&(E_A3==D_IF[`rt])? E_WD:
					  (M_GRFEn==1)&&(M_Tnew==0)&&(M_A3!=5'b00000)&&(M_A3==D_IF[`rt])? M_WD:
					  (W_GRFEn==1)&&(W_Tnew==0)&&(W_A3!=5'b00000)&&(W_A3==D_IF[`rt])? W_WD:
					                                                     BUSB;
																				
	 assign MFRSE=(M_GRFEn==1)&&(M_Tnew==0)&&(M_A3!=5'b00000)&&(M_A3==E_IF[`rs])? M_WD:
					  (W_GRFEn==1)&&(W_Tnew==0)&&(W_A3!=5'b00000)&&(W_A3==E_IF[`rs])? W_WD:
					                                                   E_BUSA;
																						
	 assign MFRTE=(M_GRFEn==1)&&(M_Tnew==0)&&(M_A3!=5'b00000)&&(M_A3==E_IF[`rt])? M_WD:
					  (W_GRFEn==1)&&(W_Tnew==0)&&(W_A3!=5'b00000)&&(W_A3==E_IF[`rt])? W_WD:
					                                                   E_BUSB;
																						
    assign MFRSM=(W_GRFEn==1)&&(W_Tnew==0)&&(W_A3!=5'b00000)&&(W_A3==M_IF[`rs])? W_WD: //未检验正确性，包括M级数据通路连接，M级内部构造
					                                                   M_BUSA;
																						
	 assign MFRTM=(W_GRFEn==1)&&(W_Tnew==0)&&(W_A3!=5'b00000)&&(W_A3==M_IF[`rt])? W_WD:
					                                                   M_BUSB;
																		
	 
	 //数据通路
	 IFU myIFU(clk, reset, D_IF[25:0], ifequal, MFRSD, PCsel, PCEn, IF, PCadd8);
	 
	 D_register myD_register(clk, reset, IF, PCadd8, D_En,  D_IF, D_PCadd8);
	 //
	 GRF myGRF(clk, reset, D_IF[`rs], D_IF[`rt], W_A3, W_WD, W_GRFEn, W_PCadd8, BUSA, BUSB);
	 //
	 EXT myEXT(D_IF[15:0], EXTsel, EXTout);
	 //
	 compare mycompare(MFRSD, MFRTD, comparesel, ifequal);
	 //
	 E_register myE_register(clk, reset, E_clear, D_IF, D_PCadd8, MFRSD, MFRTD, EXTout, PCsel, comparesel, EXTsel, ALUsel, Bsel, DMEn, Savesel, Readsel, A3sel, WDsel, GRFEn, rs_ifuse, rt_ifuse, rs_Tuse, rt_Tuse, Tnew, MAD_start, HI_En, LO_En, MAD_sel, ifMAD, E_IF, E_PCadd8, E_BUSA, E_BUSB, E_EXTout, E_PCsel, E_comparesel, E_EXTsel, E_ALUsel, E_Bsel, E_DMEn, E_Savesel, E_Readsel, E_A3sel, E_WDsel, E_GRFEn, E_rs_ifuse, E_rt_ifuse, E_rs_Tuse, E_rt_Tuse, E_Tnew, E_MAD_start, E_HI_En, E_LO_En, E_MAD_sel, E_ifMAD);
	 //
	 ALU my_ALU(MFRSE, E_B, E_IF, E_ALUsel, ALUout);
	 //???
	 MAD my_MAD(reset, clk, E_MAD_start, E_HI_En, E_LO_En, MFRSE, MFRTE, MFRTE, E_MAD_sel, Busy, BUS_HI, BUS_LO);
	 //
	 M_register myM_register(clk, reset, E_IF, E_PCadd8, MFRSE, MFRTE, E_EXTout, ALUout, BUS_HI, BUS_LO, Busy, E_PCsel, E_comparesel, E_EXTsel, E_ALUsel, E_Bsel, E_DMEn, E_Savesel, E_Readsel, E_A3sel, E_WDsel, E_GRFEn, E_rs_ifuse, E_rt_ifuse, E_rs_Tuse, E_rt_Tuse, E_Tnew, E_MAD_start, E_HI_En, E_LO_En, E_MAD_sel, E_ifMAD, M_IF, M_PCadd8, M_BUSA, M_BUSB, M_EXTout, M_ALUout, M_HI, M_LO, M_Busy, M_PCsel, M_comparesel, M_EXTsel, M_ALUsel, M_Bsel, M_DMEn, M_Savesel, M_Readsel, M_A3sel, M_WDsel, M_GRFEn, M_rs_ifuse, M_rt_ifuse, M_rs_Tuse, M_rt_Tuse, M_Tnew, M_MAD_start, M_HI_En, M_LO_En, M_MAD_sel, M_ifMAD);
	 //
	 DM myDM(clk, reset, M_ALUout, MFRTM, M_Savesel, M_Readsel, M_DMEn, M_PCadd8, DMout);
	 //
	 W_register myW_register(clk, reset, M_IF, M_PCadd8, MFRSM, MFRTM, M_EXTout, M_ALUout, M_HI, M_LO, M_Busy, DMout, M_PCsel, M_comparesel, M_EXTsel, M_ALUsel, M_Bsel, M_DMEn, M_Savesel, M_Readsel, M_A3sel, M_WDsel, M_GRFEn, M_rs_ifuse, M_rt_ifuse, M_rs_Tuse, M_rt_Tuse, M_Tnew, M_MAD_start, M_HI_En, M_LO_En, M_MAD_sel, M_ifMAD, W_IF, W_PCadd8, W_BUSA, W_BUSB, W_EXTout, W_ALUout, W_HI, W_LO, W_Busy, W_DMout, W_PCsel, W_comparesel, W_EXTsel, W_ALUsel, W_Bsel, W_DMEn, W_Savesel, W_Readsel, W_A3sel, W_WDsel, W_GRFEn, W_rs_ifuse, W_rt_ifuse, W_rs_Tuse, W_rt_Tuse, W_Tnew, W_MAD_start, W_HI_En, W_LO_En, W_MAD_sel, W_ifMAD);
	 //
	 controller mycontroller(D_IF[31:26], D_IF[5:0], D_IF[20:16], ifequal, PCsel, comparesel, EXTsel, ALUsel, Bsel, DMEn, Savesel, Readsel, A3sel, WDsel, GRFEn, rs_ifuse, rt_ifuse, rs_Tuse, rt_Tuse, Tnew, MAD_start, HI_En, LO_En, MAD_sel, ifMAD);
endmodule
