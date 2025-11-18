/*------------------------------------------------------
* Filename: util.h
* Description: declares the function is_integer 
* Author: Golan Ziv
-------------------------------------------------------*/

#include <string.h>
#include <ctype.h>
#define INPUT_LENGTH 15
#define ADDITION 36


/*------------------------------------------------------
* Function Name - Golan Ziv 
*
* Function Purpose - Determine if a given string is an integer 
*
* Parameters –  [IN str - "1234", "-134", "12ab"] 
*
* Return Values - 1 if the string represents a number, like: "1234", "-1234"
*                 0 if the string does NOT represent a number, like: "--1234", "1234-5", "122a"
*
* Author - Golan Ziv
-------------------------------------------------------*/
int is_integer(char * str);