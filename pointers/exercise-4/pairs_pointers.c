/*------------------------------------------------------
* Filename: pairs_pointers.c
* Description: creates a blames list of kids from user input, and then prints who blamed whp
* Author: Golan Ziv
-------------------------------------------------------*/

#include "utils.h"


/*------------------------------------------------------
* Function Name - main 
*
* Function Purpose - uses the utility function to build the blame list and print it  
*
* Return Values - 0
*
* Author - Golan Ziv
-------------------------------------------------------*/
int main(){
    kid_t kids[KIDS_AMNT];

    printf("enter the blame list:\n");
    if(!create_blame_list(kids)) {
        printf("Bad Input!");
        return 1; // if failed, leave
    }

    print_blame_list(kids);

    return 0;

}

