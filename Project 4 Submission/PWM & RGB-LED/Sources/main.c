#include "xil_types.h"
#include <stdio.h>

// Base address of your RGB_LED IP
#define RGB_LED_BASEADDR 0x4BB01000

//Example from Blackboard Reference
//For The LED's
//Changed the period for the LED's
//Regarding rgPMW
int main() {
 /* Enable all LEDs, set LEDs to PWM mode */
 *((uint32_t *) RGB_LED_BASEADDR) = 0x1F;
 *((uint32_t *) RGB_LED_BASEADDR+0x01) = 1; // Set RGB_LED_0 color to red
 *((uint32_t *) RGB_LED_BASEADDR+0x02) = 2; // Set RGB_LED_1 color to green
 *((uint32_t *) RGB_LED_BASEADDR+0x03) = 4; // Set RGB_LED_2 color to blue
 *((uint32_t *) RGB_LED_BASEADDR+0x04) = 7; // Set RGB_LED_3 color to white
 *((uint32_t *) RGB_LED_BASEADDR+0x05) = 10;//Define PWM duty cycle for RGB LED 0
 *((uint32_t *) RGB_LED_BASEADDR+0x06) = 30;//Define PWM duty cycle for RGB LED 1
 *((uint32_t *) RGB_LED_BASEADDR+0x07) = 60;// Define PWM duty cycle for RGB LED 2
 *((uint32_t *) RGB_LED_BASEADDR+0x08) = 90;//Define PWM duty cycle for RGB LED 3
 *((uint32_t *) RGB_LED_BASEADDR+0x09) = 110;//Define PWM period for RGB LED 0
 *((uint32_t *) RGB_LED_BASEADDR+0x0a) = 130;//Define PWM period for RGB LED 1
 *((uint32_t *) RGB_LED_BASEADDR+0x0b) = 160;//Define PWM period for RGB LED 2
 *((uint32_t *) RGB_LED_BASEADDR+0x0c) = 190;//Define PWM period for RGB LED 4
 return 1;
}
