/*------------------------------------------------------
* Filename: encryption.c
* Description: a program to reverse the steps of encryption
* Author: Golan Ziv
-------------------------------------------------------*/

#include <stdio.h>
#include "utils_1.h"

#define MSG_LENGTH 26

/*------------------------------------------------------
* Function Name - main 
*
* Function Purpose - decrypts an array of ints into array of chars
*
* Return Values - 0 for success
*
* Author - Golan Ziv
-------------------------------------------------------*/
int main(){
    int arr[MSG_LENGTH] = {921, 842, 884, 953, 834, 837, 914, 915, 936, 948, 864, 780, 542, 116, 928, 925, 372, 365, 911, 909, 937, 959, 945, 940, 891, 886};
    char ch_arr[MSG_LENGTH] = {'\0'};

    flip_array(arr, MSG_LENGTH);
    decrease_by_prev(arr, MSG_LENGTH);
    rotate_array(arr, MSG_LENGTH, 5);
    divide_even_places(arr, MSG_LENGTH, 7);
    rotate_array(arr, MSG_LENGTH, -4);
    subtruct_arr(arr, MSG_LENGTH, 5);
    int_arr_to_char_arr(arr, ch_arr, MSG_LENGTH);

    for(int i = 0; i < MSG_LENGTH; i++)
        printf("%c", ch_arr[i]);
}