/**
 * @file displayRZ.c
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
int printingRZ(char* inputValue){ 
    // Making the Y axis arr
	double xs [32];
    xs[0] = 0;
    int index = 1;
    for (int i = 1; i < 17; i++){   
        xs[index] = i;
        index++;
        if(index < 32){
            xs[index] = i;
            index++; } 
    }
    // Making the Y axis arr
	double ys [32];
    index = 0;
    for (int i = 0; i < 16; i++){   
        if(inputValue[i] == '0'){
            ys[index] = -1.0;
            index++;
            ys[index] = -1.0;
            index++;
            if(index < 32){
                ys[index] = 0.0;
                index++;
                ys[index] = 0.0;
                index++;
            }
        }
        else if(inputValue[i] == '1'){
            ys[index] = 1;
            index++;
            ys[index] = 1;
            index++;
            if(index < 32){
                ys[index] = 0;
                index++;
                ys[index] = 0;
                index++;
            }
        }
    }
    // display the image
	RGBABitmapImageReference *canvasReference = CreateRGBABitmapImageReference();
	DrawScatterPlot(canvasReference, 1920, 1080, xs, 32, ys, 32);
	size_t length;
	double *pngdata = ConvertToPNG(&length, canvasReference->image);
	WriteToFile(pngdata, length, "RZ.png");
	DeleteImage(canvasReference->image);
	return 0;
}