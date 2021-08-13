/**
 * @file NRZL.c
 * @author Khubi Thakkar (khubi.thakkar@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "dhyey.h"
char* nrzlModulation(char *inputValue){
    char * nrzlOutput;
    nrzlOutput = inputValue;
    printingNRZ(nrzlOutput);
    return nrzlOutput;
}