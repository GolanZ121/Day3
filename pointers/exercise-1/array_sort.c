/*------------------------------------------------------
* Filename: array_sort.c
* Description: 
* Author: Golan Ziv
-------------------------------------------------------*/

#include <stdio.h>
#define SIZE 10
#define PRINT_SPACING 15 // I just found 15 to fit nicely

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

/*------------------------------------------------------
* Function Name - main
*
* Function Purpose - read integers from users, put them in an array and create an int* array such
*                    that each cell points to an int from the first array.
*                    we print both, then sort the second array by the values its cells point to.
*                    and print both again. 
*
*
* Return Values - 0
*
* Author - Golan Ziv
-------------------------------------------------------*/
int main(){
    int integers_arr[SIZE];
    int * pointers_arr[SIZE];

    printf("Enter %d integers: ", SIZE);
    for(int i = 0; i < SIZE; i++){
        scanf(" %d", &integers_arr[i]);
        pointers_arr[i] = &integers_arr[i];
    }

    print_arrays(integers_arr, pointers_arr);
    
    sort(pointers_arr);
    
    print_arrays(integers_arr, pointers_arr);

    return 0;

}