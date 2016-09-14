/*
 * Settings
 *
 * created on 2012-5-14 by fgb (derived from or_const.h by apullin)
 */

#ifndef __SETTINGS_H
#define __SETTINGS_H

#define IDENT_STR "BIOMIMETICS-ROACH;AMS-ENC;"

/////// Radio settings ///////
/////// Radio settings ///////
#define RADIO_CHANNEL       0x11
#define RADIO_PAN_ID        0x2160
#define RADIO_SRC_ADDR      0x2164


#define RADIO_TXPQ_MAX_SIZE   10
#define RADIO_RXPQ_MAX_SIZE   10

//Telemetry type setup
#define TELEM_TYPE vrTelemStruct_t
#define TELEM_INCLUDE "vr_telem.h"
#define TELEMPACKFUNC(x) vrTelemGetData(x)

//Left legs robot 1
#define LEFT_1_PID_NUM       0       //PID module index is 0-3
#define LEFT_1_ENC_NUM       0       //amsEnc module index is 0-3
#define LEFT_1_ENC_FLIP      0       //"forward" normal for left
#define LEFT_1_PWM_FLIP      0
#define LEFT_1_TIH_CHAN      2       //tiH module index is 1-4
#define AMS_ENC_OFFSET_0     13352

//Right legs robot 1
#define RIGHT_1_PID_NUM      1       //PID module index is 0-3
#define RIGHT_1_ENC_NUM      1       //amsEnc module index is 0-3
#define RIGHT_1_ENC_FLIP     1       //"forward" reversed for right
#define RIGHT_1_PWM_FLIP     0
#define RIGHT_1_TIH_CHAN     1       //tiH module index is 1-4
#define AMS_ENC_OFFSET_1     15637

//Left legs robot 2
#define LEFT_2_PID_NUM       2       //PID module index is 0-3
#define LEFT_2_ENC_NUM       2       //amsEnc module index is 0-3
#define LEFT_2_ENC_FLIP      0       //"forward" normal for left
#define LEFT_2_PWM_FLIP      0
#define LEFT_2_TIH_CHAN      3       //tiH module index is 1-4
#define AMS_ENC_OFFSET_2     0

//Right legs robot 2
#define RIGHT_2_PID_NUM      3       //PID module index is 0-3
#define RIGHT_2_ENC_NUM      3       //amsEnc module index is 0-3
#define RIGHT_2_ENC_FLIP     1       //"forward" reversed for right
#define RIGHT_2_PWM_FLIP     0
#define RIGHT_2_TIH_CHAN     4       //tiH module index is 1-4
#define AMS_ENC_OFFSET_3     0

// Encoder number definition
#define NUM_ENC 4

#endif //_SETTINGS_H