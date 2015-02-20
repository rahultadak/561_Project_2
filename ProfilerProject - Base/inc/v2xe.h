//V2Xe Resolution = 30nT
//V2Xe Number of significant data bits = bits [15:0]
//V2Xe Max Hex value = 0x8F3B
#define X_DEF 			(0.840f)				//uT
#define Y_DEF				(21.48f)				//uT
#define Z_DEF 			(-42.6f)				//uT

#define X_DEF_1 			(16.98f)				//uT
#define Y_DEF_1				(9.66f)				//uT
#define Z_DEF_1 			(-42.3f)				//uT

#define X_DEF_2 			(-13.8f)				//uT
#define Y_DEF_2				(16.2f)				//uT
#define Z_DEF_2 			(-42.42f)				//uT

#define D180_OVER_PI (57.295779f)

//extern float x_rc, y_rc, z_rc;
//extern float x_h, y_h, z_v;
extern float heading;
extern float x_h,y_h;
void Compensated_Heading_DEF (float mx, float my, float mz, float roll_rads, float pitch_rads);
