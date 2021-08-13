/**
 * @file buffer.c
 * @author mohammed.rizwan@ltts.com
 * @brief Storing/Retrieving the input bitstream
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include <stdlib.h>
int buffer(char binaryvalue[],int type)
{
    static int Tempvalue;
    if (type==0)
    {   Tempvalue=atoi(binaryvalue);
        return Tempvalue;
    }
    else if (type==1){
        return Tempvalue;
    }
    else{
        printf("Invalid Input\n");
    }
    return 0;
}