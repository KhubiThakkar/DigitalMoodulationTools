/**
 * @file qamdisplay.c
 * @author mohammed.rizwan@ltts.com
 * @brief QAM waveform will be will displayed by taking input stream                                                                 
 * @version 0.1
 * @date 2021-07-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "pbPlots.h"
#include "supportLib.h"
#include "dhyey.h"
/**
 * @brief Taking the input from user and passed here
 * 
 * @param wcode 
 */
void qamdisplay(int* wcode)
{
    double xaxis[800];
    xaxis[0]=0;
    for(int i=0;i<800;i++)
    {
        xaxis[i+1]=xaxis[i]+0.01;
    }
    double yaxis[800];
    yaxis[0]=0;
    int location=0;
    for(int i=0;i<8;i++)
    {
        if(wcode[i]==1)
        {
        for(int i=0;i<100;i++)
            {
            location++;
            yaxis[location] = 5*sin(xaxis[location]*31.4159265358979323846);
            }
        }
        else
        {
        for(int i=0;i<100;i++)
            {
            location++;
            yaxis[location] = -2*sin(xaxis[location]*31.4159265358979323846);
            }
        }
    }
    RGBABitmapImageReference *canvasReference = CreateRGBABitmapImageReference();
	DrawScatterPlot(canvasReference, 1920, 1080,xaxis,800, yaxis,800);
    size_t length;
	double *pngdata = ConvertToPNG(&length, canvasReference->image);
	WriteToFile(pngdata, length, "plot.png");
	DeleteImage(canvasReference->image);
}