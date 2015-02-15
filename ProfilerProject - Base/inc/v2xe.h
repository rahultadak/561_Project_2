//V2Xe Resolution = 30nT
//V2Xe Number of significant data bits = bits [15:0]
//V2Xe Max Hex value = 0x8F3B
#define X_DEF 			(15360.0)				//nT
#define Y_DEF				(15360.0)				//nT
#define X_DEF_SQ 		(235.9296f) 	//mT^2				
#define Y_DEF_SQ		(235.9296f) 	//mT^2			

//H_earth = 22213nT 
#define H_E_SQ			(493.41737f)	//mT^2

//Z = sqrt(H_E_SQ - X_DEF_SQ -Y_DEF_SQ
#define Z_DEF 			(0.46437f)				//nT
#define D180_OVER_PI (59.295113f)

//extern float x_rc, y_rc, z_rc;
//extern float x_h, y_h, z_v;
extern float heading;
	
void Compensated_Heading_DEF (float roll, float pitch);
