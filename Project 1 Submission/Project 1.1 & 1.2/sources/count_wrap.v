`timescale 1ns / 1ps

module count_wrap
(
	input rst, clk,
	input [9:0] a_val,b_val,
	input en,
	output A,B	
);

	wire clkb;
	wire a_en,b_en;

	//define 10 bit wide counter which overflows at 823
	//called cntrA
	bin_count #(
		.MAX_COUNT(823),
		.WIDTH(10) 
	)
	cntrA(
		.rst(rst),
		.clk(clk),
		.cen(a_en),
		.val(a_val)
	);

	//10-wide counter up to 600
	bin_count #(
		.MAX_COUNT(600),
		.WIDTH(10)
	)
	cntrB(
		.rst(rst),
		.clk(clk),
		.cen(b_en),
		.val(b_val)
	);


	assign a_en = 1'b1; //counter A always enabled
	
	//counter B increments when cntA at max count
	assign b_en = (a_val==823);
	
	//start output on when counter reset/overflow
	//turn outputs off when respective counters are at half value
	assign A = (a_val<=412);
	assign B = (b_val<=300);

endmodule
