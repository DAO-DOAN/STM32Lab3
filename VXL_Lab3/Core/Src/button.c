/*
 * button.c
 *
 *  Created on: Nov 11, 2024
 *      Author: Legion 5
 */

#include "global.h"

int KeyReg0_1 = NORMAL_STATE;
int KeyReg1_1 = NORMAL_STATE;
int KeyReg2_1 = NORMAL_STATE;
int KeyReg3_1 = NORMAL_STATE;

int KeyReg0_2 = NORMAL_STATE;
int KeyReg1_2 = NORMAL_STATE;
int KeyReg2_2 = NORMAL_STATE;
int KeyReg3_2 = NORMAL_STATE;

int KeyReg0_3 = NORMAL_STATE;
int KeyReg1_3 = NORMAL_STATE;
int KeyReg2_3 = NORMAL_STATE;
int KeyReg3_3 = NORMAL_STATE;

int TimerForKeyPress1=200;
int TimerForKeyPress2=200;
int TimerForKeyPress3=200;

int isButton1Pressed(){
	if (button1_flag==1){
		button1_flag=0;
		return 1;
	}
	return 0;
}
int isButton2Pressed(){
	if (button2_flag==1){
		button2_flag=0;
		return 1;
	}
	return 0;
}
int isButton3Pressed(){
	if (button3_flag==1){
		button3_flag=0;
		return 1;
	}
	return 0;
}
void getKeyInput1(){
	KeyReg0_1=KeyReg1_1;
	KeyReg1_1=KeyReg2_1;
	KeyReg2_1=HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
	if ((KeyReg0_1==KeyReg1_1) && (KeyReg1_1==KeyReg2_1)){
		if (KeyReg3_1!=KeyReg2_1){
			KeyReg3_1=KeyReg2_1;
			if (KeyReg2_1==PRESSED_STATE){
				subKeyProcess1();
				TimerForKeyPress1=200;
			}
		}
		else {
			TimerForKeyPress1--;
			if (TimerForKeyPress1<= 0 ){
				KeyReg3_1=NORMAL_STATE;
			}
		}
	}
}

void getKeyInput2(){
	KeyReg0_2=KeyReg1_2;
	KeyReg1_2=KeyReg2_2;
	KeyReg2_2=HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
	if ((KeyReg0_2==KeyReg1_2) && (KeyReg1_2==KeyReg2_2)){
		if (KeyReg3_2!=KeyReg2_2){
			KeyReg3_2=KeyReg2_2;
			if (KeyReg2_2==PRESSED_STATE){
				subKeyProcess2();
				TimerForKeyPress2=200;
			}
		}
		else {
			TimerForKeyPress2--;
			if (TimerForKeyPress2 <= 0 ){
				KeyReg3_2 =NORMAL_STATE;
			}
		}
	}
}

void getKeyInput3(){
	KeyReg0_3=KeyReg1_3;
	KeyReg1_3=KeyReg2_3;
	KeyReg2_3=HAL_GPIO_ReadPin(Button3_GPIO_Port, Button3_Pin);
	if ((KeyReg0_3==KeyReg1_3) && (KeyReg1_3==KeyReg2_3)){
		if (KeyReg3_3!=KeyReg2_3){
			KeyReg3_3=KeyReg2_3;
			if (KeyReg2_3==PRESSED_STATE){
				subKeyProcess3();
				TimerForKeyPress3=200;
			}
		}
		else {
			TimerForKeyPress3--;
			if (TimerForKeyPress3<= 0 ){
				KeyReg3_3=NORMAL_STATE;
			}
		}
	}
}


void subKeyProcess1(){
	button1_flag=1;
}
void subKeyProcess2(){
	button2_flag=1;
}
void subKeyProcess3(){
	button3_flag=1;
}
