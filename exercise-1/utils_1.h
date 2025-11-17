/*------------------------------------------------------
* Filename: utils_1.h
* Description: 
* Author: Golan Ziv
-------------------------------------------------------*/

#include <stdlib.h>

/*------------------------------------------------------
* Function Name - flip_array 
*
* Function Purpose - flips the array in the middle
*               1 2 3 4 5 6
*                    >
*               4 5 6 1 2 3 
*
* Parameters –  IN arr - int array (int pointer) 
*		        IN length - the length of the array
*
* Return Values - void
*
* Author - Golan Ziv
-------------------------------------------------------*/
void flip_array(int *arr, int length);

/*------------------------------------------------------
* Function Name - decrease_by_prev 
*
* Function Purpose - for each element in the array (except first)
*                    decrease its value by the element before
*
* Parameters –  IN arr - int array (int pointer) 
*		        IN length - the length of the array
*
* Return Values - void
*
* Author - Golan Ziv
-------------------------------------------------------*/
void decrease_by_prev(int *arr, int length);

/*------------------------------------------------------
* Function Name - rotate_array 
*
* Function Purpose - shifts the array some amount
*               1 2 3 4 5 6 
*                    >> 2
*               5 6 1 2 3 4
*
* Parameters –  IN arr - int array (int pointer) 
*		        IN length - the length of the array
*               IN shift_amnt - the amount the array will be shifted
*
* Return Values - void
*
* Author - Golan Ziv
-------------------------------------------------------*/
void rotate_array(int *arr, int length, int shift_amnt);

/*------------------------------------------------------
* Function Name - divide_even_places 
*
* Function Purpose - divides each element in an even index by div
*
* Parameters –  IN arr - int array (int pointer) 
*		        IN length - the length of the array
*               IN div - number to divide with
*
* Return Values - void
*
* Author - Golan Ziv
-------------------------------------------------------*/
void divide_even_places(int *arr, int length, int div);

/*------------------------------------------------------
* Function Name - subtruct_array 
*
* Function Purpose - subtruct from each element a given integer
*
* Parameters –  IN arr - int array (int pointer) 
*		        IN length - the length of the array
*               IN rand - the number to subtruct with
*
* Return Values - void
*
* Author - Golan Ziv
-------------------------------------------------------*/
void subtruct_arr(int *arr, int length, int rand);

/*------------------------------------------------------
* Function Name - int_arr_to_char_arr
*
* Function Purpose - takes each element from an integer array
*                    and cast it to a char and puts it in a char array
*
* Parameters –  IN arr - int array (int pointer) 
*               IN ch_arr - char array (char pointer) 
*		        IN length - the length of the array
*
* Return Values - void
*
* Author - Golan Ziv
-------------------------------------------------------*/
void int_arr_to_char_arr(int *arr, char *ch_arr, int length);