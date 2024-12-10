/*
 * led7_segment.h
 *
 *  Created on: Nov 11, 2024
 *      Author: Legion 5
 */

#ifndef INC_LED7_SEGMENT_H_
#define INC_LED7_SEGMENT_H_

#include "main.h"

void update7SEG1(int index);
void update7SEG2(int index);
void updateClockBuffer_auto();
void updateClockBuffer_manual();
void display7SEG1(int num);
void display7SEG2(int num);

#endif /* INC_LED7_SEGMENT_H_ */
