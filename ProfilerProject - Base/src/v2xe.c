#include "v2xe.h"
#include <math.h>
#include "lookup_tables.h"

float heading = 0;
float x_h = 0,y_h = 0;

void Compensated_Heading_DEF (float mx, float my, float mz, float roll_rads, float pitch_rads)
{
	float tmp1,tmp2,tmp3,tmp4;
	float sin_pitch = sin_lookup(pitch_rads);
	float sin_roll = sin_lookup(roll_rads);
	float cos_pitch = cos_lookup(pitch_rads);
	float cos_roll = cos_lookup(roll_rads);
	
	//x_h = mx*cos_lookup(pitch_rads) + mz*sin_lookup(pitch_rads);
	arm_mult_f32(&mx,&cos_pitch,&tmp1,1);
	arm_mult_f32(&mz,&sin_pitch,&tmp2,1);
	x_h = tmp1 + tmp2;
	
	/*
	y_h = mx*sin_lookup(roll_rads)*sin_lookup(pitch_rads) + my*cos_lookup(roll_rads)
	 - mz*sin_lookup(roll_rads)*cos_lookup(pitch_rads);
	*/
	
	//mx*sin_lookup(roll_rads)*sin_lookup(pitch_rads)
	arm_mult_f32(&mx,&sin_roll,&tmp1,1);
	arm_mult_f32(&tmp1,&sin_pitch,&tmp2,1);
	
	//my*cos_lookup(roll_rads)
	arm_mult_f32(&my,&cos_roll,&tmp3,1);
	
	//mz*sin_lookup(roll_rads)*cos_lookup(pitch_rads);
	arm_mult_f32(&mz,&sin_roll,&tmp1,1);
	arm_mult_f32(&tmp1,&cos_pitch,&tmp4,1);
	
	y_h = tmp2 + tmp3 - tmp4;	

	//atan2 gives output in range of (-180,180]
	//negating parameters and adding 180 will map the output
	//between [0,360), which will be the correct heading
	heading = (atan2f(y_h,x_h)*D180_OVER_PI) - 90;
	if(heading<0)
		heading+=360;
}
