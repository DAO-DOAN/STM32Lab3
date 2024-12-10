/*
 * software_timer.h
 *
 *  Created on: Nov 11, 2024
 *      Author: Legion 5
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "main.h"
extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;

void timer_isr();
void setTimer3(int duration);
void setTimer2(int duration);
void setTimer1(int duration);
void timerRun();


#endif /* INC_SOFTWARE_TIMER_H_ */
