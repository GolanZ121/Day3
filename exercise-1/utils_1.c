/*------------------------------------------------------
* Filename: utils_1.c
* Description: 
* Author: Golan Ziv
-------------------------------------------------------*/

#include "utils_1.h"

void flip_array(int *arr, int length){
    int j;
    for(int i=0; i<length/2; i++){
        j = i + (length / 2);
        arr[j] ^= arr[i];
        arr[i] ^= arr[j];
        arr[j] ^= arr[i];
    }
}

void decrease_by_prev(int *arr, int length){
    for(int i = 1; i < length; i++){
        arr[i] -= arr[i-1];
    }
}

void rotate_array(int *arr, int length, int shift_amnt){
    int *temp_arr = malloc(length * sizeof(int)); 

    shift_amnt = (shift_amnt % length) + length; 
    shift_amnt %= length;

    for(int i = 0; i<length; i++)
        temp_arr[(i+shift_amnt)%length] = arr[i];
    
    for(int i = 0; i<length; i++)
        arr[i] = temp_arr[i];

    free(temp_arr);

}

void divide_even_places(int *arr, int length, int div){
    if (div == 0) return;

    for(int i = 0; i<length; i++){
        if (i % 2 == 0)
            arr[i] /= div;
    }
}

void subtruct_arr(int *arr, int length, int rand){
    for(int i = 0; i<length; i++)
        arr[i] -= rand;
}

void int_arr_to_char_arr(int *arr, char *ch_arr, int length){ 
    for(int i=0; i<length; i++){
        ch_arr[i] = (char)arr[i];
    }
}