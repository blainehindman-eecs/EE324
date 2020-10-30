#include "xil_types.h"
#include <stdio.h>
// Base address of your _LED IP
#define LED_BASEADDR 0x4BB00000

//Example from Blackboard Reference
//For The LED's
//Changed the period for the LED's
//Regarding PMW
int main() {
 /*
 * Enable all LEDs, set LEDs to normal mode and disable counter clock before
 * defining counter clock frequency
 */
 *((uint32_t *) LED_BASEADDR) = 0x0F;
 *((uint32_t *) LED_BASEADDR+0x02) = 12; // Set counter clock frequency to 4.166MHz
 /* Enable PWM MODE and counter clock after clock has been configured */
 *((uint32_t *) LED_BASEADDR) = 0x1F;
 *((uint32_t *) LED_BASEADDR+0x03) = 50; // Define the PWM duty cycle for LED 0
 *((uint32_t *) LED_BASEADDR+0x04) = 200; // Define the PWM duty cycle for LED 1
 *((uint32_t *) LED_BASEADDR+0x05) = 500; // Define the PWM duty cycle for LED 2
 *((uint32_t *) LED_BASEADDR+0x06) = 700; // Define the PWM duty cycle for LED 3
 *((uint32_t *) LED_BASEADDR+0x07) = 1000; // Define the PWM period for LED 0
 *((uint32_t *) LED_BASEADDR+0x08) = 1200; // Define the PWM period for LED 1
 *((uint32_t *) LED_BASEADDR+0x09) = 1400; // Define the PWM period for LED 2
 *((uint32_t *) LED_BASEADDR+0x0a) = 1600; // Define the PWM period for LED 3
 return 1;
}