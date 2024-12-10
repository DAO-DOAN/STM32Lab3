/*
 * global.h
 *
 *  Created on: Nov 11, 2024
 *      Author: Legion 5
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_


extern int button1_flag;
extern int button2_flag;
extern int button3_flag;

extern int global_status;
extern int auto_state;

extern int time1;
extern int time2;

extern int red_modify1;
extern int red_modify2;
extern int yellow_modify1;
extern int yellow_modify2;
extern int green_modify1;
extern int green_modify2;

extern int redTime1;
extern int redTime2;
extern int yellowTime1;
extern int yellowTime2;
extern int greenTime1;
extern int greenTime2;

extern int led_buffer[4];
extern int index_led;

extern int counter1;
extern int connter2;

#define IDLE 19
#define RED_GREEN 20
#define RED_YELLOW 21
#define GREEN_RED 22
#define YELLOW_RED 23
#define AUTOMATIC 24
#define RED_MAN 25
#define YELLOW_MAN 26
#define GREEN_MAN 27

#define TICK 100

#include "main.h"
#include "button.h"
#include "fsm_automatic.h"
#include "fsm_manual.h"
#include "led7_segment.h"
#include "software_timer.h"
#include "fsm_setting.h"
#include "traffic_light.h"

#endif /* INC_GLOBAL_H_ */
