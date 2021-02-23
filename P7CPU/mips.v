`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:37:43 11/10/2019 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
    input reset,
	 input interrupt,
	 output [31:0] addr
    );
	 
	 //cpu���
	 wire [31:0] cpu_addr;
	 wire [31:0] Pr_Addr_out;
	 wire [31:0] Pr_Data_out;
	 wire Pr_En;
	 //ϵͳ�����
	 wire TC1_En;
	 wire TC2_En;
	 wire [31:0] PrRD;
	 //���������
	 wire [31:0] TC1_out;
	 wire TC1_IRQ;
	 wire [31:0] TC2_out;
	 wire TC2_IRQ;
	 //�ж�
	 wire [7:0] HWInt;
	 assign HWInt={3'b0, interrupt, TC2_IRQ, TC1_IRQ, 2'b0}; //��ôд��ô��
	 
	 datapath my_cpu(clk, reset, PrRD, HWInt[7:2], cpu_addr, Pr_Addr_out, Pr_Data_out, Pr_En);
	 
	 //ϵͳ��
	 Bridge my_Bridge(Pr_Addr_out, Pr_En, TC1_En, TC2_En, TC1_out, TC2_out, PrRD);
	 //
	 TC TC1(clk, reset, Pr_Addr_out[31:2], TC1_En, Pr_Data_out, TC1_out, TC1_IRQ);//������ȷ��δ����
	 //
	 TC TC2(clk, reset, Pr_Addr_out[31:2], TC2_En, Pr_Data_out, TC2_out, TC2_IRQ);//������ȷ��δ����
	 
	 assign addr=cpu_addr;
endmodule
