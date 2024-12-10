/*
 * traffic_light.c
 *
 *  Created on: Nov 11, 2024
 *      Author: Legion 5
 */

#include "global.h"
void traffic_light(int status){
	switch (status) {
		case RED_GREEN :
			HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
			HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, RESET);
			HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, RESET);
			HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, RESET);
			HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, RESET);
			HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, SET);
			break;
		case RED_YELLOW :
			HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
			HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, RESET);
			HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, RESET);
			HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, RESET);
			HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, SET);
			HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, RESET);
			break;
		case GREEN_RED :
			HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, RESET);
			HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, RESET);
			HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, SET);
			HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
			HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, RESET);
			HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, RESET);
			break;
		case YELLOW_RED :
			HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, RESET);
			HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, SET);
			HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, RESET);
			HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
			HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, RESET);
			HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, RESET);
			break;
		default:
			break;
	}
}
void red_manual(){
	if (timer3_flag==1){
		setTimer3(50);
		HAL_GPIO_TogglePin(RED1_GPIO_Port, RED1_Pin);
		HAL_GPIO_TogglePin(RED2_GPIO_Port, RED2_Pin);
	}
}
void yellow_manual(){
	if (timer3_flag==1){
		setTimer3(50);
		HAL_GPIO_TogglePin(YELLOW1_GPIO_Port, YELLOW1_Pin);
		HAL_GPIO_TogglePin(YELLOW2_GPIO_Port, YELLOW2_Pin);
	}
}
void green_manual(){
	if (timer3_flag==1){
		setTimer3(50);
		HAL_GPIO_TogglePin(GREEN1_GPIO_Port, GREEN1_Pin);
		HAL_GPIO_TogglePin(GREEN2_GPIO_Port, GREEN2_Pin);
	}
}
