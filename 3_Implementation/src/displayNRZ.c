/**
 * @file displayNRZ.c
 * @author Khubi Thakkar (khubi.thakkar@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "supportLib.h"
#include "pbPlots.h"
int printingNRZ(char* inputValue){ 
    // Making the X axis arr
	double xs [24];
    xs[0] = 0;
    int index = 1;
    for (int i = 1; i < 17; i++){   
        if(i%2 == 0){
            xs[index] = i;
            index++;
            if(i<16){
                xs[index] = i;
                index++;
            } 
        }
        else{
            xs[index] = i;
            index++;
        }
    }
    // Making the Y axis arr
	double ys [24];
    index = 0;
    for (int i = 0; i < 8; i++){   
        if(inputValue[i] == '0'){
            ys[index] = -1;
            index++;
            ys[index] = -1;
            index++;
            ys[index] = -1;
            index++;
        }
        else if(inputValue[i] == '1'){
            ys[index] = 1;
            index++;
            ys[index] = 1;
            index++;
            ys[index] = 1;
            index++;        }
    }
	RGBABitmapImageReference *canvasReference = CreateRGBABitmapImageReference();
	DrawScatterPlot(canvasReference, 1920, 1080, xs, 24, ys, 24);
	size_t length;
	double *pngdata = ConvertToPNG(&length, canvasReference->image);
	WriteToFile(pngdata, length, "NRZ.png");
	DeleteImage(canvasReference->image);
	return 0;
}