/*------------------------------------------------------
* Filename: b.c
* Description: a program to take string input and turn in to int using CUSTOM atoi and add 36
* Author: Golan Ziv
-------------------------------------------------------*/

#include <stdio.h>
#include "util.h"


/*------------------------------------------------------
* Function Name - my_atoi
*
* Function Purpose - turn a string to its int representation
*
* Parameters –  [IN str - "1234", "-1234", "12ab"] 
*
* Return Values - the int repsetation of the given string
*                 1234 when str = "1234", 0 when str is invalid like "a12" 
*
* Author - Golan Ziv
-------------------------------------------------------*/
int my_atoi(char * str){
    int len = strlen(str);
    int sign ;
    int number = 0;

    if(!is_integer(str)) return 0; // imitating real atoi

    sign = (str[0] != '-') ? 1 : -1;

    if(isdigit(str[0])) number = str[0] - '0';

    for(int i=1; i<len; i++){
        number = number * 10 + (str[i] - '0');
    }

    return number*sign;
}


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

    printf("Total (+ %d) using my_atoi ==> %d <==", ADDITION, my_atoi(str) + ADDITION);
        
    return 0;
}