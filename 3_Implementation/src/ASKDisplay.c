/**
 * @file ASK-Display.c
 * @author Dhyey Shah (dhyey.shah@ltts.com)
 * @brief This file gives the output as .png format for ASK with given input word.
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "dhyey.h"
void ASKDisplay(char* binaryInput)
{
    /**
     * @brief xs is the x axis values
     * taking 800 samples over the whole axis
     * Each bit defines 1 unit and each unit has 100 samples.
     * Hence, 8-bit word has 800 samples.
     */
    double xs [800];
    xs[0]=0;
    for(int b=0;b<800;b++)
    {
        xs[b+1] = xs[b]+0.01;
    }
    double ys [800];
    ys[0]=0;  
    int position_indicator = 0;
    /**
     * @brief Just add the calling of the function after assignment of input_bitstream to run the code.
     */
    
    for(int i=0;i<8;i++)
    {
        if(binaryInput[i]=='1')
        {
            position_indicator = SineHighAmp(ys,xs,position_indicator);
        }
        else if(binaryInput[i]=='0')
        {
            position_indicator = SineLowAmp(ys,xs,position_indicator);
        }
    }
    DisplayFunction(xs,800,ys,800);
}