`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:03:07 12/11/2019 
// Design Name: 
// Module Name:    CP0 
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
module CP0(
    input clk,
    input reset,
	 input En,
	 input EXL_clear,
    input [4:0] Address,
    input [31:0] DI,
    input [31:0] PC,
	 
	 input IFU_Exc,
	 input undefined_code,
	 input Read_Exc,
	 input Save_Exc,
	 input ALU_Exc,
	 input if_delay,
	 
	 input [5:0] HWInt,
    output [31:0] CP0_Data_out,
    output [31:0] CP0_EPC_out,
	 output IntReq
    );
	 //异常或者中断:1、存入受害指令地址
	 //			  2、改变Cause寄存器的信息
	 //           3、跳转到异常处理程序
	 //退出异常处理：1、EPC->PC
	 //           2、EXL置为0（中断有效）
	 //			  3、保证eret后面的指令不被执行
	 `define IM SR[15:10]
	 `define EXL SR[1]
	 `define IE SR[0]
	 
	 `define IP Cause[15:10]
	 `define Cause_ExcCode Cause[6:2]
	 `define BD Cause[31]
	 //定义
	 reg [31:0] SR,EPC,PRId,Cause;
	 reg [31:0] rbq;
	 wire [4:0] ExcCode;
	 //初始化
	 initial begin
		SR=0;Cause=0;EPC=0;
	 end
	 
	 always @(posedge clk) begin
		if(reset|EXL_clear)begin
			if(reset)begin //复位
				SR<={31'b0,1'b1};
				EPC<=0;
			end
			if(EXL_clear)`EXL<=0; //允许中断
		end
		else begin
			if(IntReq) begin //异常与中断最先
				//SR
				`EXL<=1;
				if(if_delay)`BD<=1;
				else `BD<=0;
				//EPC
				EPC<={PC[31:2],2'b0};	
			end
			else begin
				if (En) begin  //写使能优先
					case(Address)
						5'd12:SR<=DI;
						5'd14:EPC<=DI;
						default:rbq<=0;
					endcase
				end
			end
		end
	 end
	 
	 always @(*) begin
		if(IntReq) begin
			`Cause_ExcCode<=ExcCode;
		end
		`IP<=HWInt;//注意这里的问题
	 end
	 
	 assign CP0_IM=`IM;
	 assign CP0_Data_out=(Address==5'd12)? SR:
								(Address==5'd13)? Cause:
								(Address==5'd14)? EPC:
								(Address==5'd15)? PRId:
															0;
	 assign CP0_EPC_out=EPC;
	 assign ExcCode=((`IM&HWInt)!=0)    ?5'd0: //优先级！ !=  >   &
					   (IFU_Exc|Read_Exc)  ?5'd4:
						(Save_Exc)			  ?5'd5:
						(undefined_code) 	  ?5'd10:
						(ALU_Exc) 	        ?5'd12:
											       5'd1;
													 
	 assign IntReq=((`IM&HWInt)!=0&&!`EXL&&`IE||(IFU_Exc|undefined_code|Save_Exc|Read_Exc|ALU_Exc)==1) ?1:0; //判断当前是否需要进入异常处理
	 
	 assign PRID=32'h75_6B_69_6D;//个性化签名?  miku天下第一！
endmodule
