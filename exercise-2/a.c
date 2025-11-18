/*------------------------------------------------------
* Filename: a.c
* Description: a program to take string input and turn into int using atoi and add 36
* Author: Golan Ziv
-------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include "util.h"

/*------------------------------------------------------
* Function Name - main
*
* Function Purpose - take user string input, transform to int, and print the number + 36
*
* Return Values - 0
*
* Author - Golan Ziv
-------------------------------------------------------*/
int main(){
    char  str[INPUT_LENGTH];

    printf("Enter a number: ");
    fgets(str, INPUT_LENGTH, stdin);

    if(str[strlen(str) - 1] == '\n') 
        str[strlen(str) - 1] = 0;

    if(!is_integer(str)){
        printf("not a number");
        return 0;
    }

    printf("\nTotal (+ %d) using atoi ==> %d <==", ADDITION, atoi(str) + ADDITION);
        
    return 0;
}