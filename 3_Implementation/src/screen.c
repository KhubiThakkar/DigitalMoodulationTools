/**
 * @file screen.c
 * @author Khubi Thakkar (khubi.thakkar@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "dhyey.h"
void newScreen() {
	int width = 125;
	char str[] = "WELCOME TO DIGITAL MODULATION APP FROM TEAM 15";
	int length = sizeof(str) - 1;
	int pad = (length >= width) ? 0 : (width - length) / 2;
	printf("%*.*s%s\n", pad, pad, " ", str);	// print the string with padding
	for(int i=0; i<4; i++){
		printf("\n");
	}
}