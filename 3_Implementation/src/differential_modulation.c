/**
 * @file differential_modulation.c
 * @author Prachi Tanna (prachi.tanna@ltts.com)
 * @brief Differential Manchester encoding and waveform display
 * @version 0.1
 * @date 2021-07-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "dhyey.h"
char arrdm[17];
char* differentialMod(char* input)
{
    int i=0,j,a=0;
    if(input[i]=='0')
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
    arrdm[17]='\0';
/**
 * @brief  display Differential waveform
 * 
 */
    displayDifferential(input);
    //printf("%s",arrdm);
    return arrdm;
}
