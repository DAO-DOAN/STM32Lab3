/*
 * fsm_automatic.c
 *
 *  Created on: Nov 11, 2024
 *      Author: Legion 5
 */

#include "global.h"

int auto_state=IDLE;

//void fsm_automatic_set_Timer(){
// 	if(redtime1<=0) redtime1=redTime1;
//	if(redtime2<=0) redtime2=redTime2;
//	if(yellowtime1<=0) yellowtime1=yellowTime1;
//	if(yellowtime2<=0) yellowtime2=yellowTime2;
//	if(greentime1<=0) greentime1=greenTime1;
//	if(greentime2<=0) greentime2=greenTime2;
//}

//void fsm_automatic_set_Timer(){
//	redtime1=redTime1;
//	redtime2=redTime2;
//	yellowtime1=yellowTime1;
//	yellowtime2=yellowTime2;
//	greentime1=greenTime1;
//	greentime2=greenTime2;
//}

//void auto_timer(int status){
//	switch (status) {
//		case RED_GREEN:
//			time1=redtime1;
//			time2=greentime2;
//			break;
//		case RED_YELLOW:
//			time1=redtime1;
//			time2=yellowtime2;
//			break;
//		case GREEN_RED:
//			time1=greentime1;
//			time2=redtime2;
//			break;
//		case YELLOW_RED:
//			time1=yellowtime1;
//			time2=redtime2;
//		default:
//			break;
//	}
//	updateClockBuffer();
//}

void fsm_automatic() {

	if (global_status == AUTOMATIC){
//		if (isButton1Pressed()==1){
//			global_status=RED_MAN;
//		}
		switch (auto_state) {
			case IDLE:
				time1=redTime1;
				time2=greenTime2;
				auto_state=RED_GREEN;
				traffic_light(RED_GREEN);
				break;
			case RED_GREEN:
				if (timer1_flag==1){
					setTimer1(100);
					if (time2<=0){
						time2=yellowTime2;
						auto_state=RED_YELLOW;
						traffic_light(RED_YELLOW);
					}
					time1--;
					time2--;
				}
				break;
			case RED_YELLOW:
				if (timer1_flag==1){
					setTimer1(100);
					if (time1<=0 && time2<=0){
						time1=greenTime1;
						time2=redTime2;
						auto_state=GREEN_RED;
						traffic_light(GREEN_RED);
					}
					time1--;
					time2--;
				}
				break;
			case GREEN_RED:
				if (timer1_flag==1){
					setTimer1(100);
					if (time1<=0){
						time1=yellowTime1;
						auto_state=YELLOW_RED;
						traffic_light(YELLOW_RED);
					}
					time1--;
					time2--;
				}
				break;
			case YELLOW_RED:
				if (timer1_flag==1){
					setTimer1(100);
					if (time1<=0 && time2<=0){
						auto_state=IDLE;
					}
					time1--;
					time2--;
				}
				break;
			default:
				break;
		}
		if (timer2_flag==1){
			setTimer2(50);
			if (index_led>=2){
				index_led=0;
			}
			update7SEG1(index_led);
			update7SEG2(index_led);
			index_led++;
		}
		updateClockBuffer_auto();
	}
}
