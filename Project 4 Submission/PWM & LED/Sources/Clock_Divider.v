`timescale 1ns / 1ps

//real digital source 
//using 4bit counter 
module Clock_Divider(
    input clk,
    input rst,
    output reg Clock_Divider
    );
    
    localparam Const = 12;
    
    reg [3:0] count;
    
    always @ (posedge(clk), posedge(rst))
    begin
        if (rst == 1'b1)
            count <= 3'b0;
        else if (count == Const - 1)
            count <= 3'b0;
        else
            count <= count + 1;
    end
    
    always @ (posedge(clk), posedge(rst))
    begin
        if (rst == 1'b1)
            Clock_Divider <= 1'b0;
        else if (count == Const - 1)
            Clock_Divider <= ~Clock_Divider;
        else
            Clock_Divider <= Clock_Divider;
    end
    
endmodule
