/**
 * @file qam.c
 * @author mohammed.rizwan@ltts.com
 * @brief Mapping the bitstream into pseudo code and displaying it
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include "dhyey.h"
void qam(void)
{
int bitst;
bitst=buffer("0",1); //inputstream
char b7=bitst%10;
bitst=bitst/10;
char b6=bitst%10;
bitst=bitst/10;
char b5=bitst%10;
bitst=bitst/10;
char b4=bitst%10;
bitst=bitst/10;
char b3=bitst%10;
bitst=bitst/10;
char b2=bitst%10;
bitst=bitst/10;
char b1=bitst%10;
bitst=bitst/10;
char b0=bitst%10;
bitst=bitst/10;
char code[8]={b0,b1,b2,b3,b4,b5,b6,b7};
char pcode[9];
for (int i=0;i<8;++i)
{
    if (code[i]==0)
    pcode[i]='A';
    else
    pcode[i]='B';
}
int wcode[8];
for (int i=0;i<8;++i)
{
    if (pcode[i]=='A')
    wcode[i]=0;
    else
    wcode[i]=1;
}
pcode[9]='\0';
qamdisplay(wcode);
//printf("%s",pcode);
}