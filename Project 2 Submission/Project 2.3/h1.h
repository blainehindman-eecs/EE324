/*
 * h1.c
 *
 *  Created on: Sep 23, 2020
 *      Author: Blaine
 */

#ifndef H1_C_
#define H1_C_
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
//
#endif /* H1_C_ */
