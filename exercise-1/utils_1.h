/*------------------------------------------------------
* Filename: utils_1.h
* Description: 
* Author: Golan Ziv
-------------------------------------------------------*/


#include <stdlib.h>
void flip_array(int *arr, int length);
void decrease_by_prev(int *arr, int length);

void rotate_array(int *arr, int length, int shift_amnt);

void divide_even_places(int *arr, int length, int div);

void subtruct_arr(int *arr, int length, int rand);
void int_arr_to_char_arr(int *arr, char *ch_arr, int length);