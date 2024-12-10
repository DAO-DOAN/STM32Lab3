///*
// * fsm_setting.c
// *
// *  Created on: Nov 11, 2024
// *      Author: Legion 5
// */
//
//#include "global.h"
//
//
//void fsm_setting(){
//	switch (global_status) {
//		case RED_MAN:
//			if (isButton2Pressed()==1 ){
//				red_modify1++;
//				green_modify2++;
////				if (red_modify1 >= 99){
////					red_modify1=7;
////					yellow_modify1=2;
////					yellow_modify2=2;
////					green_modify2=5;
////				}
//			}
//			if (isButton3Pressed()==1){
//				redTime1=red_modify1;
//				greenTime2=green_modify2;
//			}
//			break;
//		case YELLOW_MAN:
//			if (isButton2Pressed()==1){
//				yellow_modify1++;
//				yellow_modify2++;
//				red_modify1++;
//				red_modify2++;
//			}
//			if (isButton3Pressed()==1){
//				yellowTime1=yellow_modify1;
//				yellowTime2=yellow_modify2;
//				redTime1=red_modify1;
//				redTime2=red_modify2;
//			}
//			break;
//		case GREEN_MAN:
//			if (isButton2Pressed()==1){
//				green_modify1++;
//				red_modify2++;
////				if (red_modify2>=99){
////					red_modify2=7;
////					yellow_modify1=2;
////					yellow_modify2=2;
////					green_modify1=5;
////				}
//			}
//			if (isButton3Pressed()==1){
//				greenTime1=green_modify1;
//				redTime2=red_modify2;
//			}
//			break;
//		default:
//			break;
//	}
//}
