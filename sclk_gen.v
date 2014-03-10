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
module sclk_gen(
    input clk,
	 input cs,
	 input rst,
    output reg clk2
    );

reg [2:0] cnt;

always @(negedge clk, posedge rst)
begin
	if(rst)
	begin
		cnt <= 0;
		clk2 <= 0;
	end
	else if(cs)
	begin
		cnt <= 0;
		clk2 <= 0;	
	end
	else if(&cnt)
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
