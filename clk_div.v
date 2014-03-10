`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:58:25 03/09/2014 
// Design Name: 
// Module Name:    clk_div 
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
module clk_div(
    input clk,
	 input rst,
    input [6:0] div_by,
    output reg clk2
    );

reg [5:0] cnt;
wire cnt_2;

assign cnt_2 = div_by/2 - 1;

always @(negedge clk, posedge rst)
begin
	if(rst)
	begin
		cnt <= 0;
		clk2 <= 0;
	end
	else if(cnt == cnt_2)
	begin
		cnt <= 0;
		clk2 <= ~clk2;
	end
	else
	begin
		cnt <= cnt + 1;
		clk2 <= clk2;
	end
end

endmodule
