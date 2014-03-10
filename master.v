`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: CSUS
// Engineers: Nathan, Gabriel
// 
// Create Date:    14:32:17 02/11/2014 
// Design Name: SPI Bus
// Module Name:    master 
// Project Name: 
// Target Devices: Xilinx Spartan 3E
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//	EEPROM Memory Allocation Specifications:
//		4K memory (4096 bits) = 512 bytes
//			512 bytes = 512 addresses ->
//				32 pages @ 16 bytes/page
//////////////////////////////////////////////////////////////////////////////////
module master(
    input clk,					 // 50 MHz
	 input rd_wr,				 // 1 = read, 0 = write
    input [7:0] data_in,    //  
	 input reset,				 // active low
	 input start,				 // data ready
	 input [8:0] addr,       // byte address
//	 input [1:0] mode,       // 0,1 -> rising edge; 0,2 -> normal low
	 input [1:0] eeprom_sel, // up to 4 slaves
//	 input endianess,        // 1 -> big; 0 -> little
//	 input [3:0] n_bytes, 	 // 1 byte selection; 16 bytes/page
	 
	 output [7:0] data_out,  //
	 output reg busy_flag,

	 
	 input miso,             // master in slave out
	 
    output reg mosi,			 // master out slave in
    output sclk,      	    // device clk
    output reg [3:0] ss,	 // chip select 0
	 input go
 );

//	parameter WRITE = {4'h0, x, 3'b010};

parameter DIV_CLOCK_BY = 16;

parameter IDLE     = 3'b000,
			 LOAD		 = 3'b001,
			 WREN_TFR = 3'b010,
			 SS_WAIT  = 3'b011,
			 INST_TFR = 3'b100,
			 ADDR_TFR = 3'b101, 
			 DATA_TFR = 3'b110,
			 DONE		 = 3'b111;

reg [31:0] buffer;
reg [2:0] cnt_transfer;	
reg cs;

wire wren_done, wait_done, inst_done, addr_done, data_done;

/*-----------------------------
		S Clock Creation
-----------------------------*/

sclk_gen cd(
	.clk(clk),
	.cs(cs),
	.rst(reset),
	.clk2(sclk)
	);
	
/*-----------------------------
		State Machine
-----------------------------*/
reg [2:0] state, next_state;
//------seq block
always @(negedge clk, posedge reset)
begin
   if(reset) state <= IDLE;
   else    state <= next_state;  
end
//-----comb block
always @*
begin
   case(state)
   IDLE     : next_state = start       ? LOAD     : IDLE;
	LOAD     : next_state = inst_reg[0] ? INST_TFR : WREN_TFR;
	WREN_TFR : next_state = load  ? SS_WAIT  : WREN_TFR;
	SS_WAIT	: next_state = wait_done   ? INST_TFR : SS_WAIT;
	INST_TFR : next_state = load   ? ADDR_TFR : INST_TFR;
	ADDR_TFR : next_state = addr_done   ? DATA_TFR : ADDR_TFR;
	DATA_TFR : next_state = load   ? DONE     : DATA_TFR;
	DONE     : next_state = IDLE;
   endcase
end


/*-----------------------------
		registered data
-----------------------------*/
parameter WREN = 8'h06;

reg [1:0] eeprom_sel_reg, eeprom_sel_nxt;
reg [7:0] data_in_reg, data_in_nxt;
reg [7:0] data_out_reg, data_out_nxt;
reg [7:0] addr_reg, addr_nxt;
reg [7:0] inst_reg, inst_nxt;
reg load, load_next;


//--------seq blobk
always @(negedge clk, posedge reset)
begin
	if(reset)
	begin
		eeprom_sel_reg <= 2'b00;
		data_in_reg <= 0;
		data_out_reg <= 0;
		addr_reg <= 0;
		inst_reg <= 0;
		load <= 0;
	end
	else
	begin
		eeprom_sel_reg <= eeprom_sel_nxt;
		data_in_reg <= data_in_nxt;
		data_out_reg <= data_out_nxt;
		addr_reg <= addr_nxt;
		inst_reg <= inst_nxt;
		load <= load_nxt;
	end
end



//---------comb block
always @*
begin
	data_out_nxt = load_nxt ? transfer_reg : data_out_reg;
	load_nxt = &{bitcount[3], ~bitcount[2], ~bitcount[1], ~bitcount[0]};
	eeprom_sel_nxt = eeprom_sel_reg;

   case(state)
	
   IDLE     : 
	begin 
		cs = 1'b1;
		if(start) begin
			eeprom_sel_nxt = eeprom_sel;
			data_in_nxt = data_in;
			addr_nxt = addr[7:0];
			inst_nxt = {4'h0, addr[8], 2'b01, rd_wr};
		end else begin
			eeprom_sel_nxt = 0;
			data_in_nxt = 0;
			addr_nxt = 0;
			inst_nxt = 0;
		end
	end
	
	LOAD     : 
	begin 
		cs = 1'b1;
		transfer_nxt = inst_nxt[0] ? inst_reg : WREN;
		load_nxt = 1;
	end
	
	WREN_TFR : 
	begin 
		cs = 1'b0;
		transfer_nxt = 
	end
	
	SS_WAIT  : 
	begin 
		cs = 1'b1;
		
	end
	
	INST_TFR : 
	begin 
		cs = 1'b0;
		
	end
	
	ADDR_TFR : 
	begin 
		cs = 1'b0;
		
	end
	
	DATA_TFR : 
	begin 
		cs = 1'b0;
		
	end
	
	DONE     : 
	begin 
		cs = 1'b1;
		
	end
	
   endcase
end


/*-----------------------------
		tx/rx data
-----------------------------*/
reg [7:0] transfer_reg, transfer_nxt;
reg [3:0] bitcount;

always@(negedge sclk, posedge load, posedge reset) //sequential posedge block
begin
	if(reset)     
	begin
		transfer_reg <= 0;
		bitcount <= 0;
	end
	else if(load) 
	begin
		transfer_reg <= transfer_nxt;
		bitcount <= 0;
	end
	else
	begin
		transfer_reg <= {transfer_reg[6:0], miso};
		bitcount <= bitcount + 1;
	end
end

assign mosi = transfer_reg[7];


/*-----------------------------
	Chip Select Mux
-----------------------------*/
	always@(*)
	begin
		ss = 4'hF;
		ss[eeprom_sel] = cs;
	end
	

endmodule
