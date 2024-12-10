/*
 * fsm_manual.c
 *
 *  Created on: Nov 11, 2024
 *      Author: Legion 5
 */


#include "global.h"
int red_modify1=7;
int red_modify2=7;
int yellow_modify1=2;
int yellow_modify2=2;
int green_modify1=5;
int green_modify2=5;

void fsm_manual(){

	switch (global_status) {
		case AUTOMATIC :
			if (isButton2Pressed()==1){
			HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, RESET);
			HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, RESET);
				auto_state=IDLE;
				global_status=RED_MAN;
			}
			break;
		case RED_MAN :
			HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, RESET);
			HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, RESET);
			HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, RESET);
			HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, RESET);
			red_manual();
			if (isButton2Pressed()==1){
				global_status=YELLOW_MAN;
			}
			else{
				if (isButton1Pressed()==1 ){
					++red_modify1;
					++green_modify2;
	//				if (red_modify1 >= 99){
	//					red_modify1=7;
	//					yellow_modify1=2;
	//					yellow_modify2=2;
	//					green_modify2=5;
	//				}
				}
				if (isButton3Pressed()==1){
					redTime1=red_modify1;
					greenTime2=green_modify2;
				}
			}
			break;
		case YELLOW_MAN :
			HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, RESET);
			HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, RESET);
			HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, RESET);
			HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, RESET);
			yellow_manual();
			if (isButton2Pressed()==1){
				global_status=GREEN_MAN;
			}
			else {
				if (isButton1Pressed()==1){
					++yellow_modify1;
					++yellow_modify2;
					++red_modify1;
					++red_modify2;
				}
				if (isButton3Pressed()==1){
					yellowTime1=yellow_modify1;
					yellowTime2=yellow_modify2;
					redTime1=red_modify1;
					redTime2=red_modify2;
				}
			}
			break;
		case GREEN_MAN :
			HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, RESET);
			HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, RESET);
			HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, RESET);
			HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, RESET);
			green_manual();
			if (isButton2Pressed()==1){
				global_status=AUTOMATIC;
			}
			else{
				if (isButton1Pressed()==1){
					++green_modify1;
					++red_modify2;
	//				if (red_modify2>=99){
	//					red_modify2=7;
	//					yellow_modify1=2;
	//					yellow_modify2=2;
	//					green_modify1=5;
	//				}
				}
				if (isButton3Pressed()==1){
					greenTime1=green_modify1;
					redTime2=red_modify2;
				}
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
	updateClockBuffer_manual();
}

