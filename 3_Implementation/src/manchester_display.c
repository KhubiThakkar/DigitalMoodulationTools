/**
 * @file manchester_display.c
 * @author Prachi Tanna (prachi.tanna@ltts.com)
 * @brief Bi-phase Manchester waveform display
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "dhyey.h"
#include "pbPlots.h"
#include "supportLib.h"
void displaybiphase(char* input)		//void or char
{
    double xs[32];          //defining xs
    int i=0,j=0,n=1;
    xs[0]=0;
    int m=1;
    while(m<17)      
    {
        xs[n]=m;
        n++;
        if(n<32)
        {
            xs[n]=m;
            n++;
        }
        m++;
    }
    double ys[32];          //defining ys
    char ysf[16];
    //char input[8]={'0','1','0','1','1','0','0','1'};      //writing in place of input 
 //   char ysf[16]=manchesterMod(input);
/**
 * @brief generating ys for waveform
 * 
 */
        for (i=0; i<8; i++)
        {
        if(input[i]=='0')
        {
            ysf[j]='1';
            j=j+1;
            ysf[j]='0';
            j=j+1;
        }
        else if(input[i]=='1')
        {
            ysf[j]='0';
            j=j+1;
            ysf[j]='1';
            j=j+1;
        }
        }  
    double findisp[16];
    for(i=0;i<16;i++)
    {
        if(ysf[i]=='0')
        {
            findisp[i]=-1;
        }
        else
        {
            findisp[i]=1;
        }
    }
    int k=0;
    for(int l=0; l<16;l++)
    {
        ys[k]=findisp[l];
        k=k+1;
        ys[k]=findisp[l];
        k=k+1;
    }
    /**
     * @brief waveform display
     * 
     */
          RGBABitmapImageReference *canvasReference = CreateRGBABitmapImageReference();
	      DrawScatterPlot(canvasReference, 1920, 1080, xs, 32, ys, 32);
	      size_t length;
	      double *pngdata = ConvertToPNG(&length, canvasReference->image);
	      WriteToFile(pngdata, length, "manchester.png");
	      DeleteImage(canvasReference->image);
	      
}
