/**
 * @file NRZI.c
 * @author Khubi Thakkar (khubi.thakkar@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "dhyey.h"
char* nrziModulation(char *inputValue, char* nrziOutput){
    int Level = 0; 
    int lastdigit = 1;  
    int loop=0;  
    while(loop<strlen(inputValue)){
        // convert 0 input level to output level
        if (inputValue[loop] == '0')
        {   
            Level = (Level*10) + lastdigit;
        }
        // convert 1 input level to output level
        else if (inputValue[loop] == '1')
        {
            if (lastdigit == 1)
            {
                Level = (Level * 10) + 0;
                lastdigit = 0;
            }
            else if (lastdigit == 0)
            {
                Level = (Level * 10) + 1;
                lastdigit = 1;
            }
        }
        loop++;
    }
    convertToString(Level,nrziOutput,10);
    if(strlen(nrziOutput)<8){
        char* temporary = NULL;
        temporary = (char*) malloc((8)*sizeof(char));
        nrziOutput = zeroPadding(nrziOutput,temporary);
    }
    printingNRZ(nrziOutput);
    return nrziOutput;
}