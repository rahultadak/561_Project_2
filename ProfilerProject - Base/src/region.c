// Automatically generated file. Do not edit if you plan to regenerate it.
#include "region.h"
const REGION_T RegionTable[] = {
	{0x000000d5, 0x0000014c, "SystemInit"}, // 0
	{0x0000014d, 0x0000022c, "SystemCoreClockUpdate"}, // 1
	{0x00000261, 0x00000268, "Reset_Handler"}, // 2
	{0x00000269, 0x0000026a, "NMI_Handler"}, // 3
	{0x0000026b, 0x0000026c, "HardFault_Handler"}, // 4
	{0x0000026d, 0x0000026e, "SVC_Handler"}, // 5
	{0x0000026f, 0x00000270, "PendSV_Handler"}, // 6
	{0x00000271, 0x00000272, "SysTick_Handler"}, // 7
	{0x0000027d, 0x000003b6, "main"}, // 8
	{0x000003f1, 0x000003fa, "__mathlib_flt_infnan"}, // 9
	{0x000003fb, 0x000003fc, "__scatterload_null"}, // 10
	{0x00000411, 0x00000462, "Init_RGB_LEDs"}, // 11
	{0x00000463, 0x00000496, "Control_RGB_LEDs"}, // 12
	{0x000004ad, 0x00000536, "PIT_IRQHandler"}, // 13
	{0x00000537, 0x00000582, "Init_PIT"}, // 14
	{0x00000583, 0x0000058e, "Start_PIT"}, // 15
	{0x0000058f, 0x0000059a, "Stop_PIT"}, // 16
	{0x0000059b, 0x000005ec, "Init_PWM"}, // 17
	{0x000005ed, 0x00000606, "Set_PWM_Values"}, // 18
	{0x0000065d, 0x00000690, "i2c_init"}, // 19
	{0x00000691, 0x000006a4, "i2c_start"}, // 20
	{0x000006a5, 0x0000070a, "i2c_reset"}, // 21
	{0x0000070b, 0x0000079e, "i2c_wait"}, // 22
	{0x0000079f, 0x000007e6, "i2c_read_setup"}, // 23
	{0x000007e7, 0x00000820, "i2c_repeated_read"}, // 24
	{0x00000821, 0x00000896, "i2c_read_byte"}, // 25
	{0x00000897, 0x000008e2, "i2c_write_byte"}, // 26
	{0x000008f5, 0x0000092a, "init_mma"}, // 27
	{0x0000092b, 0x0000098a, "read_full_xyz"}, // 28
	{0x0000098b, 0x000009c0, "read_xyz"}, // 29
	{0x000009c1, 0x00000a1e, "convert_xyz_to_roll_pitc"}, // 30
	{0x00000a1f, 0x00000a4c, "convert_xyz_to_roll_pitc"}, // 31
	{0x00000a61, 0x00000a74, "Delay"}, // 32
	{0x00000a79, 0x00000ac0, "Init_Profiling"}, // 33
	{0x00000ac1, 0x00000ac8, "Disable_Profiling"}, // 34
	{0x00000ac9, 0x00000ad0, "Enable_Profiling"}, // 35
	{0x00000ae1, 0x00000b0e, "Init_Triggers"}, // 36
	{0x00000b19, 0x00000bc4, "Compensated_Heading_DEF"}, // 37
	{0x00000bd5, 0x00000c08, "sin_lookup"}, // 38
	{0x00000c09, 0x00000c36, "cos_lookup"}, // 39
	{0x00000c45, 0x00000c70, "__aeabi_uidivmod"}, // 40
	{0x00000c71, 0x00000d12, "__aeabi_fadd"}, // 41
	{0x00000d13, 0x00000d1a, "__aeabi_fsub"}, // 42
	{0x00000d1b, 0x00000d22, "__aeabi_frsub"}, // 43
	{0x00000d23, 0x00000d9c, "__aeabi_fmul"}, // 44
	{0x00000d9d, 0x00000db4, "__ARM_scalbnf"}, // 45
	{0x00000db5, 0x00000dca, "__aeabi_i2f"}, // 46
	{0x00000dcb, 0x00000dfc, "__aeabi_f2iz"}, // 47
	{0x00000dfd, 0x00000e0c, "_float_round"}, // 48
	{0x00000e0d, 0x00000e7e, "_float_epilogue"}, // 49
	{0x00000e7f, 0x00000efa, "__aeabi_fdiv"}, // 50
	{0x00000efd, 0x00000f18, "__scatterload"}, // 51
	{0x00000f21, 0x00000f78, "_fsqrt"}, // 52
	{0x00000f79, 0x00000f9a, "__ARM_fpclassifyf"}, // 53
	{0x00000f9b, 0x00000fa2, "__mathlib_flt_infnan2"}, // 54
	{0x00000fa3, 0x00000fae, "__mathlib_flt_invalid"}, // 55
	{0x00000faf, 0x00000fbc, "__mathlib_flt_underflow"}, // 56
	{0x00000fbd, 0x00000fca, "__scatterload_copy"}, // 57
	{0x00000fcb, 0x00000fd8, "__scatterload_zeroinit"}, // 58
	{0x00000fd9, 0x00000fde, "__set_errno"}, // 59
	{0x00000fe5, 0x000010d6, "asinf"}, // 60
	{0x000010fd, 0x0000130a, "atan2f"}, // 61
	{0x00001359, 0x00001384, "sqrtf"}, // 62
}; 
const unsigned NumProfileRegions=63;
volatile unsigned RegionCount[63];
