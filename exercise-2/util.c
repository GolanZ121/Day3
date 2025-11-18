/*------------------------------------------------------
* Filename: util.c
* Description: implements the function is_integer from util.h
* Author: Golan Ziv
-------------------------------------------------------*/

#include "util.h"

int is_integer(char *str){
    int len = strlen(str);
    
    if(len == 0) return 0;

    if(str[0] != '-' && !isdigit(str[0])) return 0;
    if(str[0] == '-' && len == 1) return 0;

    for(int i = 1; i < len; i++){
        if(!isdigit(str[i])) return 0;
    }
    return 1;
}

