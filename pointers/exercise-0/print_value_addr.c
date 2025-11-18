/*------------------------------------------------------
* Filename: print_value_addr.c
* Description: reads 8 integers and 8 chars, and prints their elements values and address in hex
* Author: Golan Ziv
-------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 8 


/*------------------------------------------------------
* Function Name - main 
*
* Function Purpose - allocate memery for 2 arrays, int and char array, reads user input to fill the arrays.
*                    print each arrays elements in two ways, using the * operator and []
*
* Return Values - 0
*
* Author - Golan Ziv
-------------------------------------------------------*/
int main(){
    int i_arr[SIZE];
    char c_arr[SIZE]; 

    printf("please enter %d integers: ", SIZE);
    for(int i = 0; i < SIZE; i++)
        scanf(" %d", &(i_arr[i]));
        

    printf("\nplease enter %d chars: ", SIZE); 
    for(int i = 0; i < SIZE; i++)
        scanf(" %c", &(c_arr[i]));
    
        
    printf("\n\nprinting ints with '[]' "); 
    for(int i = 0; i < SIZE; i++)
        printf("\nValue of int in index i=%d is: %d, Address: %p", i, i_arr[i], &i_arr[i]);
    
    
    printf("\n\nprinting ints with '*' "); 
    for(int i = 0; i < SIZE; i++)
        printf("\nValue of int in index i=%d is: %d, Address: %p", i, *(i_arr + i), i_arr + i);


    printf("\n\nprinting chars with '[]' "); 
    for(int i = 0; i < SIZE; i++)
        printf("\nValue of char in index i=%d is: %c, Address: %p", i, c_arr[i], &c_arr[i]);
    
    
    printf("\n\nprinting chars with '*' "); 
    for(int i = 0; i < SIZE; i++)
        printf("\nValue of char in index i=%d is: %c, Address: %p", i, *(c_arr + i), c_arr + i);

    return 0;
}