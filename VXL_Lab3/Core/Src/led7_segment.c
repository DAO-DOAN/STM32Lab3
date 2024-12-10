/*
 * led7_segment.c
 *
 *  Created on: Nov 11, 2024
 *      Author: Legion 5
 */

#include "global.h"

void display7SEG1(int num){
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		default:
			break;
	}
}

void display7SEG2(int num){
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
			HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
			HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG9_Pin, RESET);
			HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
			HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, RESET);
			HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, RESET);
			HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, SET);
			HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
			HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
			HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, SET);
			HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, SET);
			HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, SET);
			HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
			HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
			HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, SET);
			HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
			HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, RESET);
			HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, SET);
			HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
			HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG7_Pin, RESET);
			HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
			HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
			HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, SET);
			HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, SET);
			HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, SET);
			HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
			HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
			HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, SET);
			HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, SET);
			HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, RESET);
			HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
			HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, SET);
			HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
			HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
			HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, SET);
			HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, RESET);
			HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
			HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, SET);
			HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
			HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
			HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, RESET);
			HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, RESET);
			HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
			HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
			HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
			HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, SET);
			HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, SET);
			HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, SET);
			HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
			HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
			HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG9_Pin, RESET);
			HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
			HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, RESET);
			HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, RESET);
			HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
			HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
			HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
			HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
			HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, SET);
			HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, RESET);
			HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);
			break;
		default:
			break;
	}
}

const int MAX_LED = 4;
//int index_led1 = 0;
//int index_led2 = 0;
int index_led=0;
int led_buffer[4] = {1 , 2 , 3 , 4};
void update7SEG1 ( int index ) {
	switch (index ) {
		case 0:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			display7SEG1(led_buffer[0]);
			break ;
		case 1:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			display7SEG1(led_buffer[1]);
			break ;
		default :
			break ;
	}
}
void update7SEG2(int index){
	switch (index){
		case 0:
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			display7SEG2(led_buffer[2]);
			break;
		case 1:
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
			display7SEG2(led_buffer[3]);
			break;
		default:
			break;
	}
}

void updateClockBuffer_auto(){
			led_buffer[1]=time1/10;
			led_buffer[0]=time1%10;
			led_buffer[3]=time2/10;
			led_buffer[2]=time2%10;

}
void updateClockBuffer_manual(){
	switch(global_status){
		case RED_MAN :
			led_buffer[1]=red_modify1/10;
			led_buffer[0]=red_modify1%10;
			led_buffer[3]=2;
			led_buffer[2]=2;
			break;
		case YELLOW_MAN :
			led_buffer[1]=yellow_modify1/10;
			led_buffer[0]=yellow_modify1%10;
			led_buffer[3]=3;
			led_buffer[2]=3;
			break;
		case GREEN_MAN :
			led_buffer[1]=green_modify1/10;
			led_buffer[0]=green_modify1%10;
			led_buffer[3]=4;
			led_buffer[2]=4;
			break;
		default:
			break;
	}
}
