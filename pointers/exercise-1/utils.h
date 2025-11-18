/*------------------------------------------------------
* Filename: utils.h
* Description: declares function for sorting and setting useful constants
* Author: Golan Ziv
-------------------------------------------------------*/

#include <stdio.h>
#define SIZE 10
#define PRINT_SPACING 15 // I just found 15 to fit nicely

void swap(int ** p1, int **p2);
void sort(int *arr[SIZE]);
void print_arrays(int i_arr[SIZE], int * p_arr[SIZE]);
