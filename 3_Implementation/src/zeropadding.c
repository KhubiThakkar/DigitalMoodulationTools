/**
 * @file zeropadding.c
 * @author Khubi Thakkar (khubi.thakkar@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "dhyey.h"
char* zeroPadding(char *inputValue, char *outputString){
    int paddingBy = 0;
    // the number of zeros to be added
    paddingBy = 8 - strlen(inputValue);
    for(int i=0; i<paddingBy; i++){
        outputString[i] = '0';
    }
    int index = paddingBy;
    for(int i=0; i<strlen(inputValue); i++){
        outputString[index] = inputValue[i];
        index++;
    }
    outputString[index] = '\0';
    return(outputString);
}