/*
 * s1.c
 *
 *  Created on: Sep 24, 2020
 *      Author: Blaine
 */


#include "xil_types.h"
#include <stdio.h>
// Base address of your RGB_LED IP
//#define RGB_LED_BASEADDR 0x4BB01000
#define RGB_LED_EN *((uint32_t *) 0x4BB01000)
#define RGB_LED_1 *((uint32_t *) 0x4BB01000+0x01)
#define RGB_LED_2 *((uint32_t *) 0x4BB01000+0x02)

void time_delay()
{
	int i;
	for(i=0; i<90000000; i++);
}

int main()
{
	//enable 2 RGB LED's from IP
	RGB_LED_EN = 0x0F;

	while(1)
	{
		//LED set to Blue
		RGB_LED_1 = 4;
		//LED set to Red
		RGB_LED_2 = 0;
	}

	return 1;
}