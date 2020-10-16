/*
 * main.c
 *
 *  Created on: Oct 14, 2020
 *      Author: Blaine
 */


//Header Data
#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <time.h>
#include "xil_types.h"
//Define Register
//since we are only using one register
//the functions will use this as a base to write to this address
#define LED_CTL *((uint32_t *)0x4BB00000)
#define SB_BASEADDR 0x4BB02000

//
//Read Function Given From Real Digital
uint32_t read_LED_val()
{
	uint32_t val=0;

	//read value from IPCore and
	//mask so we only get 4LSB
	val = LED_CTL & 0xF;

	return val;
}

uint32_t read_SW_val()
{
	uint32_t val=0;

	val = SB_BASEADDR & 0xF;

	return val;
}

//function to turn on all LED's
void write_LED_on()
{
	LED_CTL = 0x0F;
}
//function to turn off all LED's
void write_LED_off()
{
	//writing value to turn off LED's
	LED_CTL = 0x00;
}
//function to turn on LED1
void write_LED1_on()
{
	//writing value to turn on LED1
	LED_CTL = 0x01;
}
//function to turn on LED2
void write_LED2_on()
{
	//writing value to turn on LED2
	LED_CTL = 0x02;
}
//function to turn on LED3
void write_LED3_on()
{
	//writing value to turn on LED3
	LED_CTL = 0x04;
}
//function to turn on LED4
void write_LED4_on()
{
	//writing value to turn on LED3
	LED_CTL = 0x08;
}

void time_delay()
{
	int i = 0;
	for (i = 0; i < 100000000; i++);
}

int main()
{
	uint32_t switches, buttons;
	switches = *((uint32_t *) SB_BASEADDR); // read values from switches
	buttons = *((uint32_t *) SB_BASEADDR+0x01); // read values from buttons

	while(1)
	{
		switches = *((uint32_t *) SB_BASEADDR); // read values from switches
		buttons = *((uint32_t *) SB_BASEADDR+0x01); // read values from buttons
		if(switches == 0x01)
		{
			//Test LED with SW1 and LED1
			read_LED_val();
			write_LED1_on();
		}
	}

	return 1;
}