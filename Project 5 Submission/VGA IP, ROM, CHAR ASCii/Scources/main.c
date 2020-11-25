#include "xil_types.h"
#include <stdio.h>


//Example from Blackboard Reference

void set_bg_color(uint32_t color);
void set_char_color(uint32_t color);
void disp_char(char val,uint32_t x,uint32_t y);


int main() {

//Examples of usage below

//set character color to red:0x0F,blue:0x0B,green:0x0C
set_char_color(0x0F0B0C);

//set character color to red:0x00,blue0xFF,gree0xAA
set_char_color(0x00FFAA);

//set the character to F in the upper left corner
disp_char('F',0,0);
//set character to f in the lower right corner (720p)
disp_char('F',1279,719);
}