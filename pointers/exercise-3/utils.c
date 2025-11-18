/*------------------------------------------------------
* Filename: utils.c
* Description: implements functions to build blame list of kids
* Author: Golan Ziv
-------------------------------------------------------*/


#include "utils.h"


/*------------------------------------------------------
* Function Name - create_blame_list 
*
* Function Purpose - to get user input on who blamed who 
*                    in the format "0,1" means kid0 blames kid1 
*
* Parameters –  [IN kids - an array of struct of kids] 
*
* Return Values - 1 if all inputs were in the correct format, 0 for failure
*
* Author - Golan Ziv
-------------------------------------------------------*/
int create_blame_list(kid_t kids[KIDS_AMNT]){
    for(int i = 0, from, to; i < KIDS_AMNT; i++){
        if(scanf(" %d,%d", &from, &to) != 2)
            return 0;
        
        
        kids[from].blames = &kids[to];
    }
    return 1;
}

/*------------------------------------------------------
* Function Name - print_blame_list
*
* Function Purpose - to print the blame list of kids like kid1 blames kid2 
*
* Parameters –  [IN kids - an array of struct of kids] 
*		        
* Return Values - void
*
* Author - Golan Ziv
-------------------------------------------------------*/
void print_blame_list(kid_t kids[KIDS_AMNT]){
    for(int i = 0, blamed; i < KIDS_AMNT; i++){
        for(int j = 0; j < KIDS_AMNT; j++){
            if(kids[i].blames == &kids[j])
                blamed = j;
        }
        printf("\nkid%d blames kid%d", i, blamed);
    }
}