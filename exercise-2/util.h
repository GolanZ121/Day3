/*------------------------------------------------------
* Filename: util.h
* Description: declares the function is_integer 
* Author: Golan Ziv
-------------------------------------------------------*/

#include <string.h>
#include <ctype.h>
#define INPUT_LENGTH 13 
/* largest and smallest ints both has 10 digits 
   in order to also capture the sign '-' we need 11 bytes to store the number as string.
   but fgets also inserts the newline character and of course a null terminator.
   so we end up needing 13 bytes.
*/

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