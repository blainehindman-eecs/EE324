/*
 * main.c
 *
 *  Created on: Sep 20, 2020
 *      Author: Blaine
 *
 *  PROJECT 2.2
 */

#include "xil_types.h"
#include <stdlib.h>     /* srand, rand */

// Macro to access the base address of your LED controller
#define my_LED *((uint32_t *)0x4BB00000)

int main()
{
    int i = 0;
    //random to increase delay
    int rand1 = 0;
    // Turn off all LEDs
    my_LED = 0x00;
    // Turn on LED 1 and 3
    my_LED = 0xA;
    // Infinite loop
    while (1) {
        // invert the LED value
    	// with LED 1 and 3 on, then
    	// LED 1&3 will Alternate with LED 2&4
	my_LED= ~my_LED;
        // Delay
        for (i = 0; i < 10000000; i++)
        {
        	rand1 = rand() % 1;
        	rand1 = rand1 + i;
        }
    }
    return 1;
}
