`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:32:17 02/11/2014 
// Design Name: 
// Module Name:    master 
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
module master(
    input clk,
    input din,
    input start,
	 input reset,
	 input miso,
    output reg mosi,
    output reg sclk,
    output reg ss
    );
	
	reg [1:0] curr_state, next_state;
	reg [7:0] buffer, transfer_reg;
	
	reg [4:0] cnt;
	
	initial cnt = 0;
	
	parameter IDLE = 3'b000, LOAD = 3'b001, TRANSFER = 3'b10, FINISH = 3'b11, UNLOAD = 3'b100;
	
	always@(posedge clk or negedge reset) //sequential posedge block
	begin
		sclk <= clk;
		if(reset == 0) //if reset
		begin
			transfer_reg <= 'b0;
			buffer <= 'b0;
			next_state <= IDLE;
			mosi <= 1'b0;
			ss <= 1'b1;
		end
		if(start == 1'b1) //when posedge clk && start == 1
		begin
			next_state <= LOAD;
		end
		else if(curr_state == IDLE) //accept new data into buffer when IDLE
		begin
				buffer[7:0] <= buffer[7:0] << 1;
				buffer[0] <= din;
		end
	end
	
	always@(negedge clk) //sequential negedge block
	begin
		sclk <= clk;
		curr_state <= next_state;
		if(ss == 1'b0) //transfer new data bit from MISO
		begin
			transfer_reg[7:0] <= transfer_reg[7:0] << 1;
			transfer_reg[0] <= miso;
		end
		if(curr_state == IDLE) //accept new data into buffer when IDLE
		begin
			buffer[7:0] <= buffer[7:0] << 1;
			buffer[0] <= din;
		end
	end
	
	always@(curr_state or transfer_reg) //combinational block
	begin
		case(curr_state)
			IDLE:
			begin
				ss = 1'b1;
			end
			LOAD:
			begin
				transfer_reg[7:0] = buffer[7:0];
				next_state = TRANSFER;
			end
			TRANSFER:
			begin
				if(cnt < 16)
				begin
					ss = 1'b0;
					mosi = transfer_reg[7];
					cnt = cnt + 1;
					if(cnt == 16)
					begin
						next_state = FINISH;
					end
				end
			end
			
			FINISH:
			begin
				ss = 1'b1;
				cnt = 1'b0;
				next_state = UNLOAD;
			end
			
			UNLOAD:
			begin
				buffer[7:0] = transfer_reg[7:0];
				next_state = IDLE;
			end
		endcase
	end

endmodule
