/*
 * config.h
 *
 *  Automatically created by Lishui Parameter Configurator
 *  Author: stancecoke
 */

#ifndef CONFIG_H_
#define CONFIG_H_
#include "stdint.h"

// System constants, don't touch!
#define DISPLAY_TYPE_DEBUG (1<<0)							// For ASCII-Output in Debug mode);
#define DISPLAY_TYPE_KUNTENG (1<<1)							// For Kunteng display
#define DISPLAY_TYPE_BAFANG_LCD (1<<2)						// For 'Blaupunkt' Display of Prophete Entdecker
#define DISPLAY_TYPE_BAFANG_850_860 (1<<3)					// Bafang 850/860. Can do 9k6 baud, also compatible with 1200 baud detection at startup
#define DISPLAY_TYPE_KINGMETER_618U (1<<4)                  // King-Meter 618U protocol ( J-LCD)
#define DISPLAY_TYPE_KINGMETER_901U (1<<5)                  // King-Meter 901U protocol (KM5s)
#define DISPLAY_TYPE_EBiCS (1<<6)                  			// Protocol using the ANT+ LEV logic
#define DISPLAY_TYPE_NO2 (1<<7)								// For China Protokoll "No_2" S866 display for example
#define DISPLAY_TYPE_BAFANG         (DISPLAY_TYPE_BAFANG_LCD|DISPLAY_TYPE_BAFANG_850_860)
#define DISPLAY_TYPE_KINGMETER      (DISPLAY_TYPE_KINGMETER_618U|DISPLAY_TYPE_KINGMETER_901U)
#define EXTERNAL 1
#define INTERNAL 0
#define LEGALFLAG 

//----------------------------------------------------------------------
#define TRIGGER_OFFSET_ADC 50
#define TRIGGER_DEFAULT 2020
#define _T 2028
#define CAL_BAT_V 256
#define CAL_V 25
#define CAL_I 38LL<<8
#define INDUCTANCE 6
#define RESISTANCE 40
#define FLUX_LINKAGE 1200
#define GAMMA 9
#define BATTERY_LEVEL_1 340000
#define BATTERY_LEVEL_2 364000
#define BATTERY_LEVEL_3 372000
#define BATTERY_LEVEL_4 388000
#define BATTERY_LEVEL_5 404000
#define P_FACTOR_I_Q 500
#define I_FACTOR_I_Q 20
#define P_FACTOR_I_D 500
#define I_FACTOR_I_D 20
#define P_FACTOR_PLL 5
#define I_FACTOR_PLL 11
#define P_FACTOR_SPEED 100
#define I_FACTOR_SPEED 10
#define SPDSHFT 0
#define SPEEDFILTER 1
#define SIXSTEPTHRESHOLD 3500
#define TS_COEF 80000
#define PAS_TIMEOUT 4000
#define RAMP_END 1600
#define PAS_IMP_PER_TURN 16
#define FRAC_HIGH 30
#define FRAC_LOW 15
#define THROTTLE_OFFSET 1150
#define THROTTLE_MAX 2150
#define PUSHASSIST_CURRENT 30
#define WHEEL_CIRCUMFERENCE 2200
#define GEAR_RATIO 116
#define SPEEDLIMIT 25
#define PULSES_PER_REVOLUTION 1
#define PH_CURRENT_MAX 1300
#define BATTERYCURRENT_MAX 10000
#define REGEN_CURRENT 200
#define REGEN_CURRENT_MAX 10000
#define VOLTAGE_MIN 1340
#define VOLTAGE_MAX 1600
#define SPEC_ANGLE -715827882
#define TS_MODE
#define DISPLAY_TYPE DISPLAY_TYPE_DEBUG //Bafang Displays, including 'Blaupunkt' 
#define SPEED_PLL 0
#define SPEEDSOURCE EXTERNAL
#define AUTODETECT 0
#define REVERSE -1
#define LIMIT_THR

#endif /* CONFIG_H_ */
