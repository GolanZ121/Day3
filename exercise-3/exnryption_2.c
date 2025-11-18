/*------------------------------------------------------
* Filename: encryption_2.c
* Description:
* Author: Golan Ziv
-------------------------------------------------------*/

#include <stdio.h>
#include <string.h>

int calculate_avg_ascii(char * str){
    int len = strlen(str), sum = 0;

    if (len == 0) return 0;

    for(int i = 0; i < len; i++)
        sum += (int)str[i];
        
    return sum/len;
}

void add_value_to_chars(char * str, int val){
    int len = strlen(str);
    
    for(int i = 0; i < len; i++)
        str[i] += val;

    return;
}

