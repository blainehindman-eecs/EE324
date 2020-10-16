/*
 * main.c
 *
 *  Created on: Sep 20, 2020
 *      Author: Blaine
 *
 *  THIS IS THE DEMO CODE FROM REAL DIGITAL FOR TUTORIAL ONLY
 *  PROJECT 2.1
 */

#include "xil_types.h"

// Macro to access the base address of your LED controller
#define my_LED *((uint32_t *)0x4BB00000)

int main()
{
    int i = 0;

    // Turn off all LEDs
    my_LED = 0x00;

    // Infinite loop
    while (1) {

        // invert the LED value
	my_LED= ~my_LED;

        // Delay
        for (i = 0; i < 10000000; i++);
    }
    return 1;
}
