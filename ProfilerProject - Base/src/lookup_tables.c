#include "lookup_tables.h"

const float sine[256] = {0.000000,
0.012270, 
0.024538, 
0.036803, 
0.049062, 
0.061313, 
0.073555, 
0.085787, 
0.098005, 
0.110208, 
0.122395, 
0.134564, 
0.146712, 
0.158838, 
0.170941, 
0.183017, 
0.195066, 
0.207086, 
0.219074, 
0.231030, 
0.242950, 
0.254835, 
0.266680, 
0.278486, 
0.290249, 
0.301969, 
0.313644, 
0.325271, 
0.336849, 
0.348377, 
0.359852, 
0.371273, 
0.382638, 
0.393946, 
0.405194, 
0.416381, 
0.427505, 
0.438565, 
0.449559, 
0.460486, 
0.471343, 
0.482129, 
0.492842, 
0.503481, 
0.514045, 
0.524531, 
0.534938, 
0.545265, 
0.555509, 
0.565670, 
0.575745, 
0.585734, 
0.595635, 
0.605446, 
0.615166, 
0.624794, 
0.634327, 
0.643765, 
0.653105, 
0.662348, 
0.671491, 
0.680532, 
0.689472, 
0.698307, 
0.707037, 
0.715661, 
0.724177, 
0.732584, 
0.740881, 
0.749066, 
0.757139, 
0.765097, 
0.772940, 
0.780667, 
0.788277, 
0.795767, 
0.803138, 
0.810388, 
0.817516, 
0.824521, 
0.831401, 
0.838157, 
0.844786, 
0.851288, 
0.857662, 
0.863907, 
0.870022, 
0.876006, 
0.881858, 
0.887577, 
0.893162, 
0.898613, 
0.903929, 
0.909109, 
0.914151, 
0.919056, 
0.923823, 
0.928451, 
0.932939, 
0.937286, 
0.941492, 
0.945557, 
0.949479, 
0.953258, 
0.956894, 
0.960386, 
0.963733, 
0.966935, 
0.969991, 
0.972901, 
0.975665, 
0.978282, 
0.980752, 
0.983074, 
0.985248, 
0.987273, 
0.989150, 
0.990878, 
0.992457, 
0.993887, 
0.995167, 
0.996297, 
0.997277, 
0.998107, 
0.998786, 
0.999315, 
0.999694, 
0.999922, 
1.000000, 
0.999927, 
0.999704, 
0.999330, 
0.998805, 
0.998131, 
0.997306, 
0.996330, 
0.995205, 
0.993930, 
0.992505, 
0.990931, 
0.989208, 
0.987336, 
0.985315, 
0.983146, 
0.980828, 
0.978363, 
0.975751, 
0.972992, 
0.970086, 
0.967035, 
0.963837, 
0.960495, 
0.957008, 
0.953377, 
0.949602, 
0.945685, 
0.941625, 
0.937423, 
0.933080, 
0.928597, 
0.923973, 
0.919211, 
0.914310, 
0.909272, 
0.904097, 
0.898785, 
0.893339, 
0.887758, 
0.882043, 
0.876195, 
0.870215, 
0.864105, 
0.857864, 
0.851494, 
0.844996, 
0.838371, 
0.831620, 
0.824743, 
0.817742, 
0.810618, 
0.803372, 
0.796005, 
0.788518, 
0.780913, 
0.773190, 
0.765350, 
0.757395, 
0.749326, 
0.741145, 
0.732851, 
0.724448, 
0.715935, 
0.707315, 
0.698588, 
0.689756, 
0.680820, 
0.671782, 
0.662642, 
0.653403, 
0.644065, 
0.634630, 
0.625100, 
0.615476, 
0.605759, 
0.595951, 
0.586053, 
0.576066, 
0.565994, 
0.555835, 
0.545594, 
0.535270, 
0.524865, 
0.514382, 
0.503821, 
0.493184, 
0.482473, 
0.471689, 
0.460834, 
0.449910, 
0.438918, 
0.427860, 
0.416738, 
0.405553, 
0.394306, 
0.383001, 
0.371638, 
0.360218, 
0.348745, 
0.337219, 
0.325642, 
0.314017, 
0.302344, 
0.290625, 
0.278863, 
0.267059, 
0.255214, 
0.243331, 
0.231412, 
0.219457, 
0.207470, 
0.195451, 
0.183403, 
0.171328, 
0.159226, 
0.147101, 
0.134953, 
0.122785, 
0.110599, 
0.098396, 
0.086178, 
0.073947, 
0.061705, 
0.049454, 
0.037195, 
0.024931, 
0.012663};

const float cosine[256] = {1.000000, 
0.999925, 
0.999699, 
0.999323, 
0.998796, 
0.998119, 
0.997291, 
0.996314, 
0.995186, 
0.993908, 
0.992481, 
0.990905, 
0.989179, 
0.987305, 
0.985281, 
0.983110, 
0.980790, 
0.978323, 
0.975708, 
0.972947, 
0.970039, 
0.966985, 
0.963785, 
0.960440, 
0.956951, 
0.953318, 
0.949541, 
0.945621, 
0.941559, 
0.937355, 
0.933009, 
0.928524, 
0.923898, 
0.919134, 
0.914231, 
0.909190, 
0.904013, 
0.898699, 
0.893251, 
0.887667, 
0.881950, 
0.876100, 
0.870119, 
0.864006, 
0.857763, 
0.851391, 
0.844891, 
0.838264, 
0.831510, 
0.824632, 
0.817629, 
0.810503, 
0.803255, 
0.795886, 
0.788397, 
0.780790, 
0.773065, 
0.765224, 
0.757267, 
0.749196, 
0.741013, 
0.732718, 
0.724313, 
0.715798, 
0.707176, 
0.698448, 
0.689614, 
0.680676, 
0.671636, 
0.662495, 
0.653254, 
0.643915, 
0.634479, 
0.624947, 
0.615321, 
0.605603, 
0.595793, 
0.585894, 
0.575906, 
0.565832, 
0.555672, 
0.545429, 
0.535104, 
0.524698, 
0.514213, 
0.503651, 
0.493013, 
0.482301, 
0.471516, 
0.460660, 
0.449735, 
0.438742, 
0.427683, 
0.416559, 
0.405373, 
0.394126, 
0.382819, 
0.371455, 
0.360035, 
0.348561, 
0.337034, 
0.325457, 
0.313830, 
0.302157, 
0.290437, 
0.278674, 
0.266869, 
0.255024, 
0.243141, 
0.231221, 
0.219266, 
0.207278, 
0.195259, 
0.183210, 
0.171134, 
0.159032, 
0.146906, 
0.134759, 
0.122590, 
0.110404, 
0.098200, 
0.085982, 
0.073751, 
0.061509, 
0.049258, 
0.036999, 
0.024734, 
0.012466, 
0.000196, 
-0.012074, 
-0.024342, 
-0.036606, 
-0.048865, 
-0.061117, 
-0.073360, 
-0.085591, 
-0.097809, 
-0.110013, 
-0.122201, 
-0.134369, 
-0.146518, 
-0.158645, 
-0.170747, 
-0.182824, 
-0.194874, 
-0.206894, 
-0.218883, 
-0.230839, 
-0.242760, 
-0.254645, 
-0.266491, 
-0.278297, 
-0.290062, 
-0.301782, 
-0.313457, 
-0.325085, 
-0.336665, 
-0.348193, 
-0.359669, 
-0.371091, 
-0.382457, 
-0.393765, 
-0.405014, 
-0.416202, 
-0.427328, 
-0.438389, 
-0.449384, 
-0.460311, 
-0.471170, 
-0.481957, 
-0.492671, 
-0.503312, 
-0.513876, 
-0.524364, 
-0.534772, 
-0.545100, 
-0.555346, 
-0.565508, 
-0.575585, 
-0.585575, 
-0.595478, 
-0.605290, 
-0.615012, 
-0.624640, 
-0.634175, 
-0.643614, 
-0.652957, 
-0.662201, 
-0.671345, 
-0.680389, 
-0.689329, 
-0.698166, 
-0.706899, 
-0.715524, 
-0.724042, 
-0.732451, 
-0.740749, 
-0.748936, 
-0.757010, 
-0.764971, 
-0.772816, 
-0.780545, 
-0.788156, 
-0.795648, 
-0.803021, 
-0.810273, 
-0.817403, 
-0.824410, 
-0.831292, 
-0.838050, 
-0.844681, 
-0.851185, 
-0.857561, 
-0.863808, 
-0.869925, 
-0.875911, 
-0.881765, 
-0.887486, 
-0.893074, 
-0.898527, 
-0.903845, 
-0.909027, 
-0.914072, 
-0.918979, 
-0.923748, 
-0.928378, 
-0.932868, 
-0.937218, 
-0.941426, 
-0.945493, 
-0.949417, 
-0.953199, 
-0.956837, 
-0.960331, 
-0.963680, 
-0.966885, 
-0.969943, 
-0.972856, 
-0.975622, 
-0.978241, 
-0.980713, 
-0.983038, 
-0.985214, 
-0.987242, 
-0.989122, 
-0.990852, 
-0.992433, 
-0.993865, 
-0.995147, 
-0.996280, 
-0.997262, 
-0.998094, 
-0.998776, 
-0.999308, 
-0.999689, 
-0.999920};


float sin_lookup(float angle)
{
	float constant = ONE_OVER_PI;
	float index_mid = 0.0;
	int index = 0;
	arm_mult_f32(&constant,&angle,&index_mid,1);
	index = (int)index_mid;
	
//	int index = (int)(angle*ONE_OVER_PI);

	if(index<0)
		return -sine[-index];
	else
		return sine[index];	
}	

float cos_lookup(float angle)
{
	float constant = ONE_OVER_PI;
	float index_mid = 0.0;
	int index = 0;	
	arm_mult_f32(&constant,&angle,&index_mid,1);
	index = (int)index_mid;

//	int index = (int)(angle*ONE_OVER_PI);

	if(index<0)
		return cosine[-index];
	else
		return cosine[index];
}	
