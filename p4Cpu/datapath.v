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
    input reset,
    input clk
    );
	 //IFU输出
	 wire [31:0] instruction;
	 wire [31:0] PCadd4;
	 wire [31:0] target_instruction1;
	 //GRF输出
	 wire [31:0] BUSA;
	 wire [31:0] BUSB;
	 //EXT输出
	 wire [31:0] EXTout;
	 //ALU输出
	 wire [31:0] C;
	 //DM输出
	 wire [31:0] DO;
	 //MUX输出
	 wire [4:0] A3;
	 wire [31:0] WD;
	 wire [31:0] B;
	 //controller输出
	 wire [1:0] PCsel;
    wire GRFEn;
    wire [1:0] A3sel;
    wire [1:0] WDsel;
	 wire [1:0] EXTsel;
    wire Bsel;
	 wire [2:0] ALUop;
    wire DMEn;
	 wire [1:0] DMsel;
	 
	 //连接  emmmm 引用要实例化！
	 IFU ifu(.reset(reset),.clk(clk),.PCsel(PCsel),.imm(instruction[25:0]),.BUSA(BUSA),.C(C),.instruction(instruction),.PCadd4(PCadd4), .target_instruction1(target_instruction1));
	 
	 GRF grf(.reset(reset),.clk(clk), .En(GRFEn),.A1(instruction[25:21]),.A2(instruction[20:16]),.A3(A3),.WD(WD), .PCadd4(PCadd4), .BUSA(BUSA),.BUSB(BUSB));
	 
	 EXT ext(.imm(instruction[15:0]),.EXTsel(EXTsel),.EXTout(EXTout));
	 
	 ALU alu(.A(BUSA),.B(B),.ALUop(ALUop),.C(C), .S(instruction[10:6]));
	 
	 DM dm(.reset(reset), .clk(clk), .Address(C), .En(DMEn), .DI(BUSB), .PCadd4(PCadd4), .DO(DO), .DMsel(DMsel));
	 
	 MUX mux(.rd(instruction[15:11]), .rt(instruction[20:16]), .A3sel(A3sel), .A3(A3), .C(C), .DO(DO), .PCadd4(PCadd4), .WDsel(WDsel), .WD(WD), .BUSB(BUSB), .EXTout(EXTout), .Bsel(Bsel), .B(B));
	 
	 controller control(.opcode(instruction[31:26]), .func(instruction[5:0]), .C(C), .PCsel(PCsel), .GRFEn(GRFEn), .A3sel(A3sel), .WDsel(WDsel), .EXTsel(EXTsel), .Bsel(Bsel), .ALUop(ALUop), .DMEn(DMEn), .DMsel(DMsel));
	 
	 //显示
		//always @ (posedge clk) begin
		//if(GRFEn&&reset==0&&A3!=5'b00000)
		//	$display ("@%h: $%d <= %h", PCadd4-32'h00000004, A3, WD); //可能有问题
		//if(DMEn&&reset==0)
		//	$display ("@%h: *%h <= %h", PCadd4-32'h00000004, C, BUSB);
		//if(GRFEn&&reset==0)
			//$display ("@%h: $%d <= %h", 指令地址, A3, target_instruction1//别忘修改i); //可能有问题
		//if(DMEn&&reset==0)
			//$display ("@%h: *%h <= %h", 指令地址, C, target_instruction1//别忘修改i);
	 //end
endmodule
