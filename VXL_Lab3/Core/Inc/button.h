/*
 * button.h
 *
 *  Created on: Nov 11, 2024
 *      Author: Legion 5
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

#include "main.h"

void getKeyInput();
int isButton3Pressed();
int isButton2Pressed();
int isButton1Pressed();
void subKeyProcess1();
void subKeyProcess2();
void subKeyProcess3();
void getKeyInput1();
void getKeyInput2();
void getKeyInput3();

#endif /* INC_BUTTON_H_ */
