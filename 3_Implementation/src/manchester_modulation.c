/**
 * @file manchester_modulation.c
 * @author Prachi Tanna (prachi.tanna@ltts.com)
 * @brief Bi-phase Manchester encoding & calling its display function
 * @version 0.1
 * @date 2021-07-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "dhyey.h"
char arri[17];
char* manchesterMod(char* input)
{
    int i=0,j=0;
        for (i=0; i<8; i++)
        {
            if(input[i]=='0')
            {
                arri[j]='1';
                j=j+1;
                arri[j]='0';
                j=j+1;
            }
            else if(input[i]=='1')
            {
                arri[j]='0';
                j=j+1;
                arri[j]='1';
                j=j+1;
            }
            else
            {
                printf("Invalid input");
            }
        }
/**
 * @brief Construct waveform: displaybiphase
 * 
 */
    displaybiphase(input);
    arri[17]='\0';
    return arri;
}
