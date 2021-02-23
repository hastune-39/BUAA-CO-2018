`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:48:09 11/10/2019 
// Design Name: 
// Module Name:    controller 
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
module controller(
    input [31:0] IF,
	 input ifequal,
    output  [3:0] PCsel,
	 output [3:0] comparesel,
	 output [3:0] EXTsel,
	 output [7:0] ALUsel,
	 output Bsel,
	 output DM_Save_En,
	 output DM_Read_En,
	 output [1:0] Savesel,
	 output [2:0] Readsel,
	 output [2:0] A3sel,
	 output [2:0] WDsel,
	 output GRFEn,
	 output rs_ifuse,
	 output rt_ifuse,
	 output [2:0] rs_Tuse,
	 output [2:0] rt_Tuse,
	 output [2:0] Tnew,
	 output MAD_start,
	 output HI_En,
	 output LO_En,
	 output [2:0] MAD_sel,
	 output ifMAD,
	 output undefined_code,
	 output CP0_En,
	 output CP0_EXL_clear,
	 output delay,
	 output eret
    );
	 `define opcode IF[31:26]
	 `define func IF[5:0]
	 `define rs IF[25:21]
	 `define rt IF[20:16]
	 //与阵列
	 //nop 指令
	 wire nop;
	 assign nop=(IF==0)?1:0;
	 //cal_r指令
	 wire add,addu,sub,subu,sll,srl,sra,sllv,srlv,srav,cal_and,cal_or,cal_xor,cal_nor,slt,sltu;
	 assign add=    (`opcode==0)&&(`func==6'b100000);
	 assign addu=   (`opcode==0)&&(`func==6'b100001);
	 assign sub=    (`opcode==0)&&(`func==6'b100010);
	 assign subu=   (`opcode==0)&&(`func==6'b100011);
	 assign sll=    (`opcode==0)&&(`func==6'b000000);
	 assign srl=    (`opcode==0)&&(`func==6'b000010);
	 assign sra=    (`opcode==0)&&(`func==6'b000011);
	 assign sllv=   (`opcode==0)&&(`func==6'b000100);
	 assign srlv=   (`opcode==0)&&(`func==6'b000110);
	 assign srav=   (`opcode==0)&&(`func==6'b000111);
	 assign cal_and=(`opcode==0)&&(`func==6'b100100);
	 assign cal_or= (`opcode==0)&&(`func==6'b100101);
	 assign cal_xor=(`opcode==0)&&(`func==6'b100110);
	 assign cal_nor=(`opcode==0)&&(`func==6'b100111);
	 assign slt=    (`opcode==0)&&(`func==6'b101010);
	 assign sltu=   (`opcode==0)&&(`func==6'b101011);
	 
	 wire cal_r;
	 assign cal_r=(add|addu|sub|subu|sll|srl|sra|sllv|srlv|srav|cal_and|cal_or|cal_xor|cal_nor|slt|sltu)?1:0;
	 
	 //cal_i指令
	 wire addi,addiu,andi,ori,xori,lui,slti,sltiu;
	 assign addi=   (`opcode==6'b001000)?1:0;
	 assign addiu=  (`opcode==6'b001001)?1:0;
	 assign andi=   (`opcode==6'b001100)?1:0;
	 assign ori=    (`opcode==6'b001101)?1:0;
	 assign xori=   (`opcode==6'b001110)?1:0;
	 assign lui=    (`opcode==6'b001111)?1:0;
	 assign slti=   (`opcode==6'b001010)?1:0;
	 assign sltiu=  (`opcode==6'b001011)?1:0;
	 
	 wire cal_i;
	 assign cal_i=(addi|addiu|andi|ori|xori|lui|slti|sltiu)? 1:0;
	 //load指令
	 wire lb,lbu,lh,lhu,lw;
	 assign lb=     (`opcode==6'b100000)?1:0;
	 assign lbu=    (`opcode==6'b100100)?1:0;
	 assign lh=     (`opcode==6'b100001)?1:0;
	 assign lhu=    (`opcode==6'b100101)?1:0;
	 assign lw=     (`opcode==6'b100011)?1:0;
	 
	 wire load;
	 assign load=(lb|lbu|lh|lhu|lw)?1:0;
	 //save指令
	 wire sb,sh,sw;
	 assign sb=(`opcode==6'b101000)?1:0;
	 assign sh=(`opcode==6'b101001)?1:0;
	 assign sw=(`opcode==6'b101011)?1:0;
	 
	 wire save;
	 assign save=(sb|sh|sw)?1:0;
	 
	 //branch类指令
	 wire beq,bne,blez,bgtz,bltz,bgez,j,jal,jalr,jr;
	 assign beq=  (`opcode==6'b000100)?1:0;
	 assign bne=  (`opcode==6'b000101)?1:0;
	 assign blez= (`opcode==6'b000110)?1:0;
	 assign bgtz= (`opcode==6'b000111)?1:0;
	 assign bltz= (`opcode==6'b000001)&&(`rt==5'b00000)?1:0;
	 assign bgez= (`opcode==6'b000001)&&(`rt==5'b00001)?1:0;
	 assign j=    (`opcode==6'b000010)?1:0;
	 assign jal=  (`opcode==6'b000011)?1:0;
	 assign jalr= (`opcode==6'b000000)&&(`func==6'b001001)?1:0;
	 assign jr=   (`opcode==6'b000000)&&(`func==6'b001000)?1:0;
	 
	 wire branch;
	 assign branch=(beq|bne|blez|bgtz|bltz|bgez|j|jal|jalr|jr) ?1:0;
	 //乘除计算类指令
	 wire mult,multu,div,divu;
	 assign mult=(`opcode==6'b000000)&&(`func==6'b011000)?1:0;
	 assign multu=(`opcode==6'b000000)&&(`func==6'b011001)?1:0;
	 assign div=(`opcode==6'b000000)&&(`func==6'b011010)?1:0;
	 assign divu=(`opcode==6'b000000)&&(`func==6'b011011)?1:0;
	 
	 wire cal_MAD;
	 assign cal_MAD=(mult|multu|div|divu)?1:0;
	 
	 //乘除转移类指令
	 wire mfhi,mflo,mthi,mtlo;
	 assign mfhi=(`opcode==6'b000000)&&(`func==6'b010000)?1:0;
	 assign mflo=(`opcode==6'b000000)&&(`func==6'b010010)?1:0;
	 assign mthi=(`opcode==6'b000000)&&(`func==6'b010001)?1:0;
	 assign mtlo=(`opcode==6'b000000)&&(`func==6'b010011)?1:0;
	 
	 wire move_MAD;
	 assign move_MAD=(mfhi|mflo|mthi|mtlo) ?1:0;
	 
	 //cp0指令
	 wire MFC0,MTC0,ERET;
	 assign MFC0=(`opcode==6'b010000)&&(`rs==0)?1:0;
	 assign MTC0=(`opcode==6'b010000)&&(`rs==5'b00100)?1:0;
	 assign ERET=(`opcode==6'b010000)&&(`func==6'b011000) ?1:0;
	 
	 wire Exc;
	 assign Exc=(MFC0|MTC0|ERET) ?	1:0;
	 //或阵列
	 assign PCsel=(jalr|jr)  ?4'd3:
					  (j|jal)    ?4'd2:
					  (beq|bne|blez|bgtz|bltz|bgez)?  4'd1:
															       0;
								
	 assign comparesel=(bgez)  ?4'd6:
						    (bltz)  ?4'd5:
							 (bgtz)  ?4'd4:
							 (blez)  ?4'd3:
							 (bne)   ?4'd2:
							 (beq)   ?4'd1:
										    0;
	 assign EXTsel=(lui)? 4'd2:
						(addi|addiu|slti|sltiu|load|save)? 4'd1:
						                            0;
									         
	 assign ALUsel=(sub) ? 8'd15:
						(add|save|load|addi) ? 8'd14:
						(sltu|sltiu)? 8'd13:
						(slt|slti) ? 8'd12:
						(cal_nor) ? 8'd11:
						(cal_xor|xori) ? 8'd10:
						(cal_and|andi) ? 8'd9:
						(srav)    ? 8'd8:
						(srlv)    ? 8'd7:
						(sllv)    ? 8'd6:
						(sra)     ? 8'd5:
						(srl)     ? 8'd4:
						(sll)     ? 8'd3:
						(cal_or|ori)  ? 8'd2:
						(subu)? 8'd1:
											0;

	 assign Bsel=(cal_i|load|save)? 1:0;
	
	 //DM控制信号
	 assign DM_Save_En=(save)?1:0;
	 assign DM_Read_En=(load)? 1:0;
	 assign Savesel=(sb)  ?2'd2:
						 (sh)  ?2'd1:
								     0;
	 assign Readsel=(lb)  ? 3'd4:
	                (lbu) ? 3'd3:
						 (lh)  ? 3'd2:
						 (lhu) ? 3'd1:
						            0;
	 
	 assign A3sel= (jal)			 ? 4'd2:
						(cal_i|load|MFC0) ? 4'd1:
											   0;
												
	 assign WDsel=(MFC0)     ? 4'd5:
					  (mfhi)		 ? 4'd4:
					  (mflo)		 ? 4'd3:
					  (jal|jalr) ? 4'd2:
					  (load)     ? 4'd1:
									      0;
										 
	 assign GRFEn=(cal_r|cal_i|load|jal|jalr|mfhi|mflo|MFC0)?1:0;

	 assign rs_ifuse=(add|addu|sub|subu|sllv|srlv|srav|cal_and|cal_or|cal_xor|cal_nor|slt|sltu|
							cal_i|load|save|
							beq|bne|blez|bgtz|bltz|bgez|jalr|jr|
							cal_MAD|
							mthi|mtlo) ?1:
										   0;
	 
	 assign rt_ifuse=(cal_r|save|beq|bne|cal_MAD|MTC0)?1:0;
	 
	 //注意，Tuse从D级开始算起（即D级为0）
	 assign rs_Tuse=(cal_r|cal_i|load|save|
						  cal_MAD|
						  mthi|mtlo)?   3'd1:
								             0;
	 
	 assign rt_Tuse=(save|MTC0)           ? 3'd2:
						 (cal_r|cal_MAD)  ? 3'd1:
										           0;
	 //注意： Tnew从E级开始算起（即E级为0）
	 assign Tnew=(load|MFC0)                   ? 3'd2:
					 (cal_r|cal_i|mult|multu|div|divu|mfhi|mflo)  ? 3'd1:
								                      0;
	 //乘除器控制信号
	 assign MAD_start=(cal_MAD)? 1:0;
	 assign HI_En=mthi ?1:0;
	 assign LO_En=mtlo ?1:0;
	 assign MAD_sel=(divu)   ?3'd3:
						 (div)    ?3'd2:
						 (multu)  ?3'd1:
						              0;
	 assign ifMAD=(cal_MAD|mfhi|mflo|mthi|mtlo)?1:0;
	 
	 //异常处理
	 assign undefined_code=!(nop|cal_r|cal_i|save|load|branch|cal_MAD|move_MAD|Exc) ?1:0;
	 assign CP0_En=MTC0;
	 assign CP0_EXL_clear=ERET;
	 assign delay=(branch)?1:0;
	 assign eret=(ERET)? 1:0;
endmodule
