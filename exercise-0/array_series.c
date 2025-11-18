/*------------------------------------------------------
* Filename: array_series.c
* Description: a program that gets an array of 15 numbers and
* prints one of these messages accoridingly:
    "The array is increasing" 
    "The array is decreasing" 
    "The array is constant" 
    "The array is messed up"
* Author: Golan Ziv
-------------------------------------------------------*/
#include <stdio.h>
#define SIZE 15 // size of the arrays (given in question)

/*------------------------------------------------------
* Function Name - main 
*
* Function Purpose - takes 15 integers, and determine their order
*
* Return Values - 0 for success
*
* Author - Golan Ziv
-------------------------------------------------------*/

// Indecies of modes : 0 = increasing, 1 = decreasing, 2 = constant
enum Mode {
    INC, 
    DEC, 
    CON
};

int main() {
    int modes[] = {1, 1, 1}; 

    for(int i = 0, curr, prev; i < SIZE; i++){
        scanf("%d", &curr);

        if(i == 0){
            prev = curr;
            continue;
        }

        if(curr > prev){
            modes[CON] = 0;
            modes[DEC] = 0;
        }
        else if (prev > curr){
            modes[INC] = 0;
            modes[CON] = 0;
        }

        prev = curr;
    }

    if(modes[CON]) printf("The array is constant\n");
    else if(modes[INC]) printf("The array is increasing\n");
    else if(modes[DEC]) printf("The array is decreasing\n");
    else printf("The array is messed up\n");

    return 0;
}