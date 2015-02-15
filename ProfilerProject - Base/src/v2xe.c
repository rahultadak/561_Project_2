#include "v2xe.h"
#include <math.h>

float heading = 0;

void Compensated_Heading_DEF (float roll, float pitch)
{
	float x_rc=0,y_rc=0, z_rc = 0;
	float x_h = 0,y_h = 0;//,z_v = 0;
	
	x_rc = X_DEF;
	y_rc = (Y_DEF*cosf(roll)) + (Z_DEF*sinf(roll));
	z_rc = (Z_DEF*cosf(roll)) - (Y_DEF*sinf(roll));
	
	x_h = x_rc*cosf(pitch) - z_rc*sinf(pitch);
	y_h = y_rc;
//	z_v = x_rc*sinf(pitch) + z_rc*cosf(pitch)	
	
	heading = atan2f(y_h,x_h)*D180_OVER_PI;
}
