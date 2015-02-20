/*----------------------------------------------------------------------------
 *----------------------------------------------------------------------------*/
#include <MKL25Z4.H>
#include <stdio.h>
#include "math.h"

#include "config.h"
#include "gpio_defs.h"
#include "LCD_4bit.h"
#include "LEDs.h"
#include "timers.h"
#include "i2c.h"
#include "mma8451.h"
#include "triggers.h"
#include "v2xe.h"

#include "delay.h"
#include "profile.h"

int debug_iter = 0;
uint32_t trigger = 0;

//Define if the code should do profiling
#define PROFILING_MODE

/*----------------------------------------------------------------------------
  MAIN function
 *----------------------------------------------------------------------------*/
int main (void) {
		uint32_t i;
	uint16_t res=0;
#ifdef USE_LCD
	char buffer[9];
#endif
	
	Init_RGB_LEDs();
	// Initializing, so turn on yellow
	Control_RGB_LEDs(1, 1, 0);

#ifdef USE_LCD
	Init_LCD();
	Clear_LCD();
	Set_Cursor(0,0);
	Print_LCD(" Hello  ");
	Set_Cursor(0,1);
	Print_LCD(" World! ");
#endif
	
	i2c_init();																/* init i2c	*/
	res = init_mma();													/* init mma peripheral */
	if (res == 0) {
		// Signal error condition
		Control_RGB_LEDs(1, 0, 0);
		while (1)
			;
	}
	//Init Triggers
	Init_Triggers();
	
	Delay(1000);

	//Compile this code only if PROFILING_MODE Enabled
#ifdef PROFILING_MODE

	Init_Profiling();
	__enable_irq();

	// Starting, so turn on magenta
	Control_RGB_LEDs(1,0,1);
	Enable_Profiling();
	
	for (i=0; i<NUM_TESTS; i++) {
		read_full_xyz();
		convert_xyz_to_roll_pitch();

		//Default heading
		Compensated_Heading_DEF(X_DEF,Y_DEF,Z_DEF,roll_rads,pitch_rads);


#ifdef USE_LCD
		sprintf(buffer, "R: %5.1f", roll);
		Set_Cursor(0,0);
		Print_LCD(buffer);

		sprintf(buffer, "P: %5.1f", pitch);
		Set_Cursor(0,1);
		Print_LCD(buffer);
#endif
		debug_iter++;
	}
	Disable_Profiling();
	
	// Done, turn on blue LED
	Control_RGB_LEDs(0, 0, 1);
	Delay(500);
	Control_RGB_LEDs(0, 0, 0);
#endif
	
#ifndef PROFILING_MODE
	while (1)
	{
		//Reading input at Port B and shifting the values to bits[1:0]
		trigger = (PTB->PDIR & PTB_TRIGGER_MASK);
		//if(!trigger)
		if(trigger == PTB_PIN_9)		//Remove comments after debug
		{
			//First Trigger
			Control_RGB_LEDs(1, 0, 0);
			//Read Accelerometer
			read_full_xyz();
			//Calculate Roll and Pitch
			convert_xyz_to_roll_pitch();
			
			Compensated_Heading_DEF(X_DEF_1,Y_DEF_1,Z_DEF_1,roll_rads,pitch_rads);
			
			Control_RGB_LEDs(0, 0, 0);
		}
		//else if(trigger)
		else if (trigger == PTB_PIN_8)	//Remove comments after debug
		{
			//Second Trigger
			Control_RGB_LEDs(0, 0, 1);
			
			//Calculate Roll and Pitch
			convert_xyz_to_roll_pitch_DEF();
			
			Compensated_Heading_DEF(X_DEF_2,Y_DEF_2,Z_DEF_2,roll_rads,pitch_rads);
			
			Control_RGB_LEDs(0, 0, 0);
		}
		else
		{
			Control_RGB_LEDs(0, 1, 0);

			read_full_xyz();
			//Calculate Roll and Pitch
			convert_xyz_to_roll_pitch();

			//TODO
			//Add code for reading magnetometer
			//Add code for calculating real time values
			//Placeholder default function
			Compensated_Heading_DEF(X_DEF,Y_DEF,Z_DEF,roll_rads,pitch_rads);
			
			//No Trigger Code
			Control_RGB_LEDs(0, 0, 0);

		}
	}
#endif
	
}

// *******************************ARM University Program Copyright © ARM Ltd 2013*************************************   
