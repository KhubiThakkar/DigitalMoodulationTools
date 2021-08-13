/**
 * @file psk.c
 * @author mohammed.rizwan@ltts.com
 * @brief Mapping the Bitsteam into pseudo code
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include "dhyey.h"
void psk(void)
{
int bitstr;
bitstr=buffer("0",1); //inputstream
char b7=bitstr%10;
bitstr=bitstr/10;
char b6=bitstr%10;
bitstr=bitstr/10;
char b5=bitstr%10;
bitstr=bitstr/10;
char b4=bitstr%10;
bitstr=bitstr/10;
char b3=bitstr%10;
bitstr=bitstr/10;
char b2=bitstr%10;
bitstr=bitstr/10;
char b1=bitstr%10;
bitstr=bitstr/10;
char b0=bitstr%10;
bitstr=bitstr/10;
char code[8]={b0,b1,b2,b3,b4,b5,b6,b7};
char pcode[9];
for (int i=0;i<8;++i)
{
    if (code[i]==0)
    pcode[i]='A';
    else
    pcode[i]='B';
}
int dispcode[8];
for (int i=0;i<8;++i)
{
    if (pcode[i]=='A')
    dispcode[i]=0;
    else
    dispcode[i]=1;
}
pcode[9]='\0';
    printf("Pseudo code is: %s",pcode);
    //printf("%s",pcode);
    PSKDisplay(dispcode);

}