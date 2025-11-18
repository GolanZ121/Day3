/*------------------------------------------------------
* Filename: utils.c
* Description: implements useful function for sorting and printing arrrays from utils.h
* Author: Golan Ziv
-------------------------------------------------------*/


#include "utils.h"
/*------------------------------------------------------
* Function Name - swap
*
* Function Purpose - to swap places of pointers with pointers to the int pointers
*
* Parameters –  [IN p1 - a pointer to an int pointer] 
*               [IN p2 - a pointer to an int pointer] 
*               they are essentialy a pointer to the cell in a int* array like: int* pointer_array[]
*               we are swapping pointers in the array.
*
* Return Values - void
*
* Author - Golan Ziv
-------------------------------------------------------*/
void swap(int ** p1, int **p2){
    int * temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}


/*------------------------------------------------------
* Function Name - sort 
*
* Function Purpose - sorting a int* array by the values the cell point to 
*
* Parameters –  [IN arr - array of int pointers] 
*
* Return Values - void
*
* Author - Golan Ziv
-------------------------------------------------------*/
void sort(int *arr[SIZE]){
    // we are checking each pair of cells and comaring the ints they point to.
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE - 1; j++){
            if(*arr[j] > *arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}


/*------------------------------------------------------
* Function Name - print_arrays
*
* Function Purpose - to print an int array and and int* array one after the other 
*
* Parameters –  [IN i_arr - {1, 2, 3, ...}] 
*               [IN p_arr - array of pointers to ints] 
*
* Return Values - void
*
* Author - Golan Ziv
-------------------------------------------------------*/
void print_arrays(int i_arr[SIZE], int * p_arr[SIZE]){
    // i found a spacing of 15 to look 
    printf("\n");
    for(int i = 0; i < SIZE; i++)
        printf("%-*d", PRINT_SPACING, i_arr[i]);

    printf("\n");
    for(int i = 0; i < SIZE; i++)
        printf("%-*p", PRINT_SPACING, p_arr[i]);

}