/**
 * @file ASK-Display.c
 * @author Dhyey Shah (dhyey.shah@ltts.com)
 * @brief This file gives the output as .png format for PSK with given input word.
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "dhyey.h"
int PSKDisplay(int* displaycode)
{
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
        if(displaycode[i]==1)
        {
            position_indicator = SinePositive(ys,xs,position_indicator);
        }
        else
        {
            position_indicator = SineNegative(ys,xs,position_indicator);
        }
    }
    DisplayFunction(xs,800,ys,800);
    return 0;
}