/*------------------------------------------------------
* Filename: array_sort.c
* Description: read integers from users, put them in an array and create an int* array such
*                    that each cell points to an int from the first array.
*                    we print both, then sort the second array by the values its cells point to.
*                    and print both again.
* Author: Golan Ziv
-------------------------------------------------------*/

#include "utils.h"

/*------------------------------------------------------
* Function Name - main
*
* Return Values - 0
*
* Author - Golan Ziv
-------------------------------------------------------*/
int main(){
    int integers_arr[SIZE];
    int * pointers_arr[SIZE];

    // read integers and fill pointers_arr with their addresses
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