`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:29:57 11/17/2019 
// Design Name: 
// Module Name:    RFcontroller 
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
module RFcontroller(
    input [31:0] D_IF,
    input [31:0] E_IF,
    input [31:0] M_IF,
    input [31:0] W_IF,
	 input E_GRFEn,
	 input M_GRFEn,
	 input W_GRFEn,
    output PCEn,
    output D_En,
    output D_clear,
	 output E_clear,
    output [2:0] RSDsel,
    output [2:0] RTDsel,
    output [2:0] RSEsel,
    output [2:0] RTEsel,
    output [2:0] RTMsel
    );
	 //端口宏定义
	 `define opcode 31:26
	 `define func 5:0
	 `define rs 25:21
	 `define rt 20:16
	 `define rd 15:11
	 //编码宏定义
	 `define R 6'b000000
	 
	 `define lw 6'b100011
	 `define sw 6'b101011
	 `define addu 6'b100001 //R
	 `define subu 6'b100011 //R
	 `define ori 6'b001101
	 `define lui 6'b001111
	 `define beq 6'b000100
	 `define j 6'b000010
	 `define jal 6'b000011
	 `define jr 6'b001000 //R
	 //Tuse
	 `define D_addu D_IF[`opcode]==`R&&D_IF[`func]==`addu
	 `define D_subu D_IF[`opcode]==`R&&D_IF[`func]==`subu
	 `define D_ori D_IF[`opcode]==`ori
	 `define D_lui D_IF[`opcode]==`lui
	 `define D_sw D_IF[`opcode]==`sw
	 `define D_lw D_IF[`opcode]==`lw
	 `define D_beq  D_IF[`opcode]==`beq
	 `define D_j D_IF[`opcode]==`j
	 `define D_jal D_IF[`opcode]==`jal
	 `define D_jr D_IF[`opcode]==`R&&D_IF[`func]==`jr
	 //Tneed
	 `define E_addu E_IF[`opcode]==`R&&E_IF[`func]==`addu
	 `define E_subu E_IF[`opcode]==`R&&E_IF[`func]==`subu
	 `define E_ori E_IF[`opcode]==`ori
	 `define E_lui E_IF[`opcode]==`lui
	 `define E_lw E_IF[`opcode]==`lw
	 `define M_lw M_IF[`opcode]==`lw
	 
	 //sw nmsl
	 `define M_addu M_IF[`opcode]==`R&&M_IF[`func]==`addu
	 `define M_subu M_IF[`opcode]==`R&&M_IF[`func]==`subu
	 `define M_ori M_IF[`opcode]==`ori
	 `define M_lui M_IF[`opcode]==`lui
	 `define M_jal M_IF[`opcode]==`jal
	 
	 //梦开始的地方
	 //根据表格搭建暂停信号
	 `define jalr 6'b001001
	 `define D_jalr D_IF[`opcode]==`R&&D_IF[`func]==`jalr
	 `define E_jalr E_IF[`opcode]==`R&&E_IF[`func]==`jalr
	 `define M_jalr M_IF[`opcode]==`R&&M_IF[`func]==`jalr
	 `define W_jalr W_IF[`opcode]==`R&&W_IF[`func]==`jalr
	 wire stop_cal_r;
	 wire stop_cal_i;
	 wire stop_sw, stop_lw, stop_beq, stop_jr;
	 wire stop;
	 assign stop_cal_r=(`D_addu||`D_subu)&&(`E_lw)&&(E_IF[`rt]!=5'b00000)&&(D_IF[`rs]==E_IF[`rt]||D_IF[`rt]==E_IF[`rt]);						
	 assign stop_cal_i=(`D_ori||`D_lui)&&(`E_lw)&&(E_IF[`rt]!=5'b00000)&&(D_IF[`rs]==E_IF[`rt]);						
    assign stop_sw=(`D_sw&&`E_lw)&&((E_IF[`rt]!=5'b00000)&&(D_IF[`rs]==E_IF[`rt]))||
						 `D_sw&&((`M_addu||`M_subu)&&(M_IF[`rd]==D_IF[`rt])||(`M_ori||`M_lui||`M_lw)&&(D_IF[`rt]==M_IF[`rt])||(`M_jal)&&(D_IF[`rt]==5'b11111));//转转转sw为D且M改变数据	并且E级不改变数据				
	 assign stop_lw=(`D_lw&&`E_lw)&&(E_IF[`rt]!=5'b00000)&&(D_IF[`rs]==E_IF[`rt]);	
	 
	 assign stop_beq=`D_beq&&(`E_addu||`E_subu)&&(E_IF[`rd]!=5'b00000)&&(D_IF[`rs]==E_IF[`rd]||D_IF[`rt]==E_IF[`rd])||
						  `D_beq&&(`E_ori||`E_lui)&&(E_IF[`rt]!=5'b00000)&&(D_IF[`rs]==E_IF[`rt]||D_IF[`rt]==E_IF[`rt])||				
						  `D_beq&&`E_lw&&(E_IF[`rt]!=5'b00000)&&(D_IF[`rs]==E_IF[`rt]||D_IF[`rt]==E_IF[`rt])||				
						  `D_beq&&`M_lw&&(M_IF[`rt]!=5'b00000)&&(D_IF[`rs]==M_IF[`rt]||D_IF[`rt]==M_IF[`rt]);
						  
	 assign stop_jr=`D_jr&&(`E_addu||`E_subu)&&(E_IF[`rd]!=5'b00000)&&(D_IF[`rs]==E_IF[`rd])||
						 `D_jr&&(`E_ori||`E_lui)&&(E_IF[`rt]!=5'b00000)&&(D_IF[`rs]==E_IF[`rt])||
						 `D_jr&&`E_lw&&(E_IF[`rt]!=5'b00000)&&(D_IF[`rs]==E_IF[`rt])||
						 `D_jr&&`M_lw&&(M_IF[`rt]!=5'b00000)&&(D_IF[`rs]==M_IF[`rt]);
						 
	 assign stop_jalr=`D_jalr&&(D_IF[`rs]!=0)&&((`E_addu||`E_subu)&&(D_IF[`rs]==E_IF[`rd])||(`E_ori||`E_lui)&&(D_IF[`rs]==E_IF[`rt])||(`E_lw)&&(D_IF[`rs]==E_IF[`rt])||(`M_lw)&&(D_IF[`rs]==M_IF[`rt]))?1:0;
		 
	 //暂停控制信号输出
	 assign stop=stop_cal_r+stop_cal_i+stop_sw+stop_lw+stop_beq+stop_jr+stop_jalr;
	 assign PCEn=(stop)?0:1;
	 assign D_En=(stop)?0:1;
	 assign E_clear=(stop)?1:0;
	 
	 //转发控制信号
	//待转发指令 R指令：addu,subu,jr
	`define E_sw E_IF[`opcode]==`sw
	`define M_sw M_IF[`opcode]==`sw
	//提供待转发数据指令
	`define E_jal E_IF[`opcode]==`jal
	`define M_jal M_IF[`opcode]==`jal
	`define M_addu M_IF[`opcode]==`R&&M_IF[`func]==`addu
	`define M_subu M_IF[`opcode]==`R&&M_IF[`func]==`subu
	`define M_ori M_IF[`opcode]==`ori
	`define M_lui M_IF[`opcode]==`lui
	`define W_jal W_IF[`opcode]==`jal
	`define W_addu W_IF[`opcode]==`R&&W_IF[`func]==`addu
	`define W_subu W_IF[`opcode]==`R&&W_IF[`func]==`subu
	`define W_ori W_IF[`opcode]==`ori
	`define W_lui W_IF[`opcode]==`lui
	`define W_lw W_IF[`opcode]==`lw
	wire [2:0] RSDsel, RTDsel, RSEsel, RTEsel, RTMsel;
	//根据表格构建转发信号
	assign RSDsel      =(`D_beq||`D_jr||`D_jalr)&&(D_IF[`rs]!=0)&&(E_GRFEn)&&((`E_jal)&&(D_IF[`rs]==5'b11111)||(`E_jalr)&&(D_IF[`rs]==E_IF[`rd]))?3'd1:
							  (`D_beq||`D_jr||`D_jalr)&&(D_IF[`rs]!=0)&&(M_GRFEn)&&((`M_jal)&&(D_IF[`rs]==5'b11111)||(`M_jalr)&&(D_IF[`rs]==M_IF[`rd]))?3'd2:
							  (`D_beq||`D_jr||`D_jalr)&&(D_IF[`rs]!=0)&&(M_GRFEn)&&(`M_addu||`M_subu)&&(D_IF[`rs]==M_IF[`rd]&&M_IF[`rd]!=5'b00000)?3'd3:
							  (`D_beq||`D_jr||`D_jalr)&&(D_IF[`rs]!=0)&&(M_GRFEn)&&(`M_ori||`M_lui)&&(D_IF[`rs]==M_IF[`rt]&&M_IF[`rt]!=5'b00000)?3'd3:
							  (`D_beq||`D_jr||`D_jalr)&&(D_IF[`rs]!=0)&&(W_GRFEn)&&(`W_jal&&(D_IF[`rs]==5'b11111)||(`W_jalr)&&(D_IF[`rs]==W_IF[`rd]))?3'd4:
							  (`D_beq||`D_jr||`D_jalr)&&(D_IF[`rs]!=0)&&(W_GRFEn)&&(`W_addu||`W_subu)&&(D_IF[`rs]==W_IF[`rd]&&W_IF[`rd]!=5'b00000)?3'd4:
							  (`D_beq||`D_jr||`D_jalr)&&(D_IF[`rs]!=0)&&(W_GRFEn)&&(`W_ori||`W_lui)&&(D_IF[`rs]==W_IF[`rt]&&W_IF[`rt]!=5'b00000)?3'd4:
							  (`D_beq||`D_jr||`D_jalr)&&(D_IF[`rs]!=0)&&(W_GRFEn)&&`W_lw&&(D_IF[`rs]==W_IF[`rt])&&W_IF[`rt]!=0?3'd4:
																														    0;
																							
	assign RTDsel   =(`D_beq)&&(`E_jal)&&(E_GRFEn)&&(D_IF[`rt]==5'b11111)?3'd1:
                    (`D_beq)&&(M_GRFEn)&&((`M_jal)&&(D_IF[`rt]==5'b11111)||(`M_jalr)&&(D_IF[`rt])==M_IF[`rd])?3'd2:
                    (`D_beq)&&(M_GRFEn)&&(`M_addu||`M_subu)&&(D_IF[`rt]==M_IF[`rd]&&M_IF[`rd]!=5'b00000)?3'd3:
						  (`D_beq)&&(M_GRFEn)&&(`M_ori||`M_lui)&&(D_IF[`rt]==M_IF[`rt]&&M_IF[`rt]!=5'b00000)?3'd3:
                    (`D_beq)&&(W_GRFEn)&&(`W_jal&&(D_IF[`rt]==5'b11111)||(`W_jalr)&&(D_IF[`rt]==W_IF[`rd]))?3'd4:
						  (`D_beq)&&(W_GRFEn)&&(`W_addu||`W_subu)&&(D_IF[`rt]==W_IF[`rd]&&W_IF[`rd]!=5'b00000)?3'd4:
						  (`D_beq)&&(W_GRFEn)&&(`W_ori||`W_lui)&&(D_IF[`rt]==W_IF[`rt]&&W_IF[`rt]!=5'b00000)?3'd4:
						  (`D_beq)&&(W_GRFEn)&&`W_lw&&D_IF[`rt]==W_IF[`rt]&&W_IF[`rt]!=0?3'd4:
                                                                                  0;
																											 
	assign RSEsel   =(`E_lw||`E_sw||`E_addu||`E_subu||`E_ori||`E_lui)&&(M_GRFEn)&&((`M_jal)&&(E_IF[`rs]==5'b11111)||(`M_jalr)&&(E_IF[`rs])==M_IF[`rd])?3'd2:
                    (`E_lw||`E_sw||`E_addu||`E_subu||`E_ori||`E_lui)&&(M_GRFEn)&&(`M_addu||`M_subu)&&(E_IF[`rs]==M_IF[`rd]&&M_IF[`rd]!=5'b00000)?3'd3:
						  (`E_lw||`E_sw||`E_addu||`E_subu||`E_ori||`E_lui)&&(M_GRFEn)&&(`M_ori||`M_lui)&&(E_IF[`rs]==M_IF[`rt]&&M_IF[`rt]!=5'b00000)?3'd3:
                    (`E_lw||`E_sw||`E_addu||`E_subu||`E_ori||`E_lui)&&(W_GRFEn)&&(`W_jal&&(E_IF[`rs]==5'b11111)||(`W_jalr)&&(E_IF[`rs]==W_IF[`rd]))?3'd4:
						  (`E_lw||`E_sw||`E_addu||`E_subu||`E_ori||`E_lui)&&(W_GRFEn)&&(`W_addu||`W_subu)&&(E_IF[`rs]==W_IF[`rd]&&W_IF[`rd]!=5'b00000)?3'd4:
						  (`E_lw||`E_sw||`E_addu||`E_subu||`E_ori||`E_lui)&&(W_GRFEn)&&(`W_ori||`W_lui)&&(E_IF[`rs]==W_IF[`rt]&&W_IF[`rt]!=5'b00000)?3'd4:
						  (`E_lw||`E_sw||`E_addu||`E_subu||`E_ori||`E_lui)&&(W_GRFEn)&&`W_lw&&E_IF[`rs]==W_IF[`rt]&&W_IF[`rt]!=0?3'd4:
																																						 0;
                   
   assign RTEsel   =(`E_addu||`E_subu)&&(M_GRFEn)&&`M_jal&&((E_IF[`rt]==5'b11111)||(`M_jalr)&&(E_IF[`rt])==M_IF[`rd])?3'd2:
						  (`E_addu||`E_subu)&&(M_GRFEn)&&(`M_addu||`M_subu)&&(E_IF[`rt]==M_IF[`rd]&&M_IF[`rd]!=5'b00000)?3'd3:
						  (`E_addu||`E_subu)&&(M_GRFEn)&&(`M_ori||`M_lui)&&(E_IF[`rt]==M_IF[`rt]&&M_IF[`rt]!=5'b00000)?3'd3:
                    (`E_addu||`E_subu)&&(W_GRFEn)&&`W_jal&&((E_IF[`rt]==5'b11111)||(`W_jalr)&&(E_IF[`rt])==W_IF[`rd])?3'd4:
						  (`E_addu||`E_subu)&&(W_GRFEn)&&(`W_addu||`W_subu)&&(E_IF[`rt]==W_IF[`rd]&&W_IF[`rd]!=5'b00000)?3'd4:
						  (`E_addu||`E_subu)&&(W_GRFEn)&&(`W_ori||`W_lui)&&(E_IF[`rt]==W_IF[`rt]&&W_IF[`rt]!=5'b00000)?3'd4:
						  (`E_addu||`E_subu)&&(W_GRFEn)&&`W_lw&&E_IF[`rt]==W_IF[`rt]&&W_IF[`rt]!=0?3'd4:
																											    0;
                                                                           																																													  
	assign RTMsel   =(`M_sw)&&(W_GRFEn)&&(`W_jal&&(M_IF[`rt]==5'b11111)||(`W_jalr)&&M_IF[`rt]==W_IF[`rd])?3'd4:
						  (`M_sw)&&(W_GRFEn)&&(`W_addu||`W_subu)&&(M_IF[`rt]==W_IF[`rd]&&W_IF[`rd]!=5'b00000)?3'd4:
						  (`M_sw)&&(W_GRFEn)&&(`W_ori||`W_lui)&&(M_IF[`rt]==W_IF[`rt]&&W_IF[`rt]!=5'b00000)?3'd4:
						  (`M_sw)&&(W_GRFEn)&&`W_lw&&M_IF[`rt]==W_IF[`rt]&&W_IF[`rt]!=0?3'd4:
																								  0;
                
endmodule
