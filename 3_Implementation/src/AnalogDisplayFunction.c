/**
 * @file AnalogDisplayFunction.c
 * @author Dhyey Shah (dhyey.shah@ltts.com)
 * @brief This file handles the functions and data required for the display part using pbplots.
 * @version 0.1
 * @date 2021-07-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "dhyey.h"
#include "pbPlots.h"
#include "supportLib.h"
/**
 * @brief This function is used to display the output plot in resolution 1920x1080.
 * The input parameters are the double data type arrays (xs and ys).
 * also the length upto which the output is to be shown.
 * Then it returns plot.png
 * 
 * @param xs 
 * @param xsLength 
 * @param ys 
 * @param ysLength 
 */

int DisplayFunction(double *xs, size_t xsLength, double *ys, size_t ysLength)
{
    RGBABitmapImageReference *canvasReference = CreateRGBABitmapImageReference();
	DrawScatterPlot(canvasReference, 1920, 1080, xs, xsLength, ys, ysLength);
    size_t length;
	double *pngdata = ConvertToPNG(&length, canvasReference->image);
	WriteToFile(pngdata, length, "plot.png");
	DeleteImage(canvasReference->image);

	return 0;
}

/**
 * @brief Gives the values of ys and also returns the position_indicator for continuous traversing along 
 * the whole x-axis.
 * The name of the function defines functionality itself.
 * @param ys 
 * @param xs 
 * @param position_indicator 
 * @return int 
 */
int SineHighAmp(double *ys,double *xs,int position_indicator)
{
    for(int i=0;i<100;i++)
    {
        position_indicator++;
        ys[position_indicator] = 10*sin(xs[position_indicator]*31.4159265358979323846);
    }
    return position_indicator;
}

int SineLowAmp(double *ys,double *xs,int position_indicator)
{
    for(int i=0;i<100;i++)
    {
        position_indicator++;
        ys[position_indicator] = 2*sin(xs[position_indicator]*31.4159265358979323846);
    }
    return position_indicator;
}

int SineHighFreq(double *ys,double *xs,int position_indicator)
{
    for(int i=0;i<100;i++)
    {
        position_indicator++;
        ys[position_indicator] = 2*sin(xs[position_indicator]*31.4159265358979323846);
    }
    return position_indicator;
}

int SineLowFreq(double *ys,double *xs,int position_indicator)
{
    for(int i=0;i<100;i++)
    {
        position_indicator++;
        ys[position_indicator] = 2*sin(xs[position_indicator]*3.14159265358979323846*2);
    }
    return position_indicator;
}

int SinePositive(double *ys,double *xs,int position_indicator)
{
    for(int i=0;i<100;i++)
    {
        position_indicator++;
        ys[position_indicator] = 2*sin(xs[position_indicator]*3.14159265358979323846*2);
    }
    return position_indicator;
}

int SineNegative(double *ys,double *xs,int position_indicator)
{
    for(int i=0;i<100;i++)
    {
        position_indicator++;
        ys[position_indicator] = -2*sin(xs[position_indicator]*3.14159265358979323846*2);
    }
    return position_indicator;
}