/*
 * s1.c
 *
 *  Created on: Sep 23, 2020
 *      Author: Blaine
 */

/*
 * s1.c
 *
 *  Created on: Sep 23, 2020
 *      Author: Blaine
 */


//Read Function Given From Real Digital
uint32_t read_LED_val()
{
	uint32_t val=0;

	//read value from IPCore and
	//mask so we only get 4LSB
	val = LED_CTL & 0xF;
	//call print and pass in value
	print_u32(val);

	return val;
}

//function to print val
void print_u32(uint32_t * value)
{
	//Prints the uint32_t value
	printf("%" PRIu32 "\n", value);
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
	int j=0;

	for(j=0; j<100; j++)
	{
		//Call Read Function
		read_LED_val();
		time_delay();
		write_LED1_on();
		time_delay();
		write_LED2_on();
		time_delay();
		write_LED3_on();
		time_delay();
		write_LED4_on();
	}

	return 1;
}
