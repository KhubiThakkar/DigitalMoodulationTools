/**
 * @file differential_display.c
 * @author Prachi Tanna (prachi.tanna@ltts.com)
 * @brief Differential Manchester waveform display
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "dhyey.h"
#include "pbPlots.h"
#include "supportLib.h"
/**
 * @brief waveform display for differential
 * 
 * @param input 
 */
void displayDifferential(char* input)
{
    int a=0;
    double xs[32];  
    int i=0,j=0,n=1;
    xs[0]=0;
    int m=1;
    while(m<17)     //defining xs 
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
  //  char input[8]={'1','0','0','0','0','0','0','1'};      //writing in place of input
    double ys[32];
    double ysf[16];
//    char arrdm[16]= differentialMod(input);
    char arrdm[16];
    // encoding in differential manchester
    if(input[0]=='0')
    {
      arrdm[0]='0';
      arrdm[1]='1';
    }
    else
    {
      arrdm[0]='1';
      arrdm[1]='0';
    }
    j=2;

        for (i=1; i<8; i++)
        {
        if(input[i]=='1')         //the same pattern continues if the bit is 1
        {
            a=j-1;
            arrdm[j]=arrdm[a];
            a=j-2;
            j=j+1;
            arrdm[j]=arrdm[a];
            j=j+1;
        }
        else if(input[i]=='0')    //transition occurs at the beginning of the cycle if input bit is zero
        {
            a=j-2;
            arrdm[j]=arrdm[a];
            a=j-1;
            j=j+1;
            arrdm[j]=arrdm[a];
            j=j+1;
        }
        else
        {
            printf("Invalid input");    //in case of invalid input bits
            break;
        }
        }  
    for(i=0;i<16;i++)   
    {   
      if(arrdm[i]=='0')
      {
        ysf[i]=-1;
      }
      else
      {
        ysf[i]=1;
      }
    }                           
    int k=0;
/**
 * @brief making the bitstream 32bit
 * 
 */
    for(int l=0; l<16;l++)      //making it 32
    {
        ys[k]=ysf[l];
        k=k+1;
        ys[k]=ysf[l];
        k=k+1;
    }
/**
 * @brief displaying waveform using pbplots
 * 
 */
  RGBABitmapImageReference *canvasReference = CreateRGBABitmapImageReference();
	DrawScatterPlot(canvasReference, 1920, 1080, xs, 32, ys, 32);
	size_t length;
	double *pngdata = ConvertToPNG(&length, canvasReference->image);
	WriteToFile(pngdata, length, "differential.png");
	DeleteImage(canvasReference->image);
    	
}
