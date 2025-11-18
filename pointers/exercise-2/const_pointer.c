/*------------------------------------------------------
* Filename: const_pointer.c
* Description: change a const variable using pointers
* Author: Golan Ziv
-------------------------------------------------------*/

#include <stdio.h>


/*------------------------------------------------------
* Function Name - main
*
* Function Purpose - change a const variable with a given user value
*
* Return Values - 0
*
* Author - Golan Ziv
-------------------------------------------------------*/
int main(){
    const int CHANNEL = 64;
    int * p = &CHANNEL; // create int pointer to point to the const variable address
    int user_channel;
    
    printf("CHANNEL VALUE: %d", CHANNEL);

    printf("\nEnter new channel (Integer) : ");
    if(scanf(" %d", &user_channel) == 0){
        printf("Bad Input!");
        return 1;    
    }

    
    *p = user_channel; // change the channel by accessing the memory directly using the address we saved

    printf("\nNEW CHANNEL VALUE: %d", CHANNEL);

    return 0;
}
