/*
 * s1.c
 *
 *  Created on: Sep 23, 2020
 *      Author: Blaine
 */

#include "xil_types.h"

//Macro for accessing memory address for read/write
//(permanently dereferenced constant pointer)
#define LED_CTL *((uint32_t *) 0x4BB00004)
#define LED_EN *((uint32_t *) 0x4BB00000)

void time_delay()
{
	int i;
	for(i=0; i<90000000; i++);
}

//test custom LED IP by blinking the lights using software delay
int main()
{
	while(1)
	{
		LED_EN = 0x01;
		time_delay();
		LED_EN = 0x02;
		time_delay();
		LED_EN = 0x04;
		time_delay();
		LED_EN = 0x08;
		time_delay();

	}

	return 1;
}
