`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:29:04 03/09/2014
// Design Name:   master
// Module Name:   //gaia/hojmang/CpE 187/spibus/master_tb.v
// Project Name:  spibus
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: master
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module master_tb;

	// Inputs
	reg clk;
	reg rd_wr;
	reg [7:0] data;
	reg reset;
	reg start;
	reg [8:0] addr;
	reg [1:0] eeprom_sel;
	reg miso;
	reg go;

	// Outputs
	wire [7:0] data_out;
	wire busy_flag;
	wire mosi;
	wire sclk;
	wire [3:0] ss;

	// Instantiate the Unit Under Test (UUT)
	master master1 (
		.clk(clk), 
		.rd_wr(rd_wr), 
		.data(data), 
		.reset(reset), 
		.start(start), 
		.addr(addr), 
		.eeprom_sel(eeprom_sel), 
		.data_out(data_out), 
		.busy_flag(busy_flag), 
		.miso(miso), 
		.mosi(mosi), 
		.sclk(sclk), 
		.ss(ss),
		.go(go)
	);

	always #10 clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		rd_wr = 0;
		data = 0;
		reset = 1;
		start = 0;
		addr = 0;
		eeprom_sel = 0;
		miso = 0;
		go = 0;

		// Wait 100 ns for global reset to finish
		#100 reset = 0;
		#25 go = 1;
		#20 go = 0;
		#2000 go = 1;
		#20 go = 0;
		#2000 go = 1;
		#20 go = 0;
		#2000 go = 1;
		#20 go = 0;
		#2000 go = 1;
		#20 go = 0;
		#2000 go = 1;
		#20 go = 0;
		#2000 go = 1;
		#20 go = 0;
		#2000 go = 1;
		#20 go = 0;
		
		#80 eeprom_sel = 2;
		
		#2000 go = 1;
		#20 go = 0;
      #2000 go = 1;
		#20 go = 0;
		#2000 go = 1;
		#20 go = 0;
		#2000 go = 1;
		#20 go = 0;
		#2000 go = 1;
		#20 go = 0;
		// Add stimulus here

	end
      
endmodule

