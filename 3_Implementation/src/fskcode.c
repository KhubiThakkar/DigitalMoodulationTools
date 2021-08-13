/**
 * @file fsk.c
 * @author mohammed.rizwan@ltts.com
 * @brief Mapping the bitstream into pseudo codes
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include "dhyey.h"
void fsk(void)
{
    int bitstream;
    bitstream=buffer("0",1); //inputstream
    //printf("bitstream is %d \n",bitstream);
    char b7=bitstream%10;
    bitstream=bitstream/10;
    char b6=bitstream%10;
    bitstream=bitstream/10;
    char b5=bitstream%10;
    bitstream=bitstream/10;
    char b4=bitstream%10;
    bitstream=bitstream/10;
    char b3=bitstream%10;
    bitstream=bitstream/10;
    char b2=bitstream%10;
    bitstream=bitstream/10;
    char b1=bitstream%10;
    bitstream=bitstream/10;
    char b0=bitstream%10;
    bitstream=bitstream/10;
    char code[8]={b0,b1,b2,b3,b4,b5,b6,b7};
    char pcode[9];
    for (int i=0;i<8;++i)
    {
        if (code[i]==0)
            pcode[i]='A';
        else
            pcode[i]='B';
    }
    int displaycode[8];
    for (int i=0;i<8;++i)
    {
        if (pcode[i]=='A')
            displaycode[i]=0;
            //printf("%d",displaycode[i]);
        else
        {
            displaycode[i]=1;
            //printf("%d",displaycode[i]);
        }
    }
    pcode[9]='\0';
    printf("Pseudo code is: %s",pcode);
    //printf("%s",pcode);
    FSKDisplay(displaycode);
}