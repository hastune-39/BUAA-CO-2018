`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:30:58 12/10/2019 
// Design Name: 
// Module Name:    Bridge 
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
module Bridge(
	 input [31:0] Addr,
	 input En,
    output TC1_En,
    output TC2_En,
	 //Ð´»ØCPU²¿·Ö
	 input [31:0] TC1_out,
	 input [31:0] TC2_out,
	 output [31:0] PrRD
    );
	 `define TC1_Addr (Addr==32'h0000_7F00||Addr==32'h0000_7F04||Addr==32'h0000_7F08)
	 `define TC2_Addr (Addr==32'h0000_7F10||Addr==32'h0000_7F14||Addr==32'h0000_7F18)
	 assign TC1_En=`TC1_Addr&&(En) ? 1:0;
	 assign TC2_En=`TC2_Addr&&(En) ? 1:0;
	 
	 assign PrRD=`TC1_Addr ? TC1_out:
	             `TC2_Addr ? TC2_out:
											 0;
endmodule
