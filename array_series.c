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
#define SIZE 15
#define MODES_AMNT 3 // not including messy

// Indecies of modes : -1 = messy, 0 = increasing, 1 = decreasing, 2 = constant
enum Mode {
    MESSY = -1,
    INC, 
    DEC, 
    CON
};


/*------------------------------------------------------
* Function Name - determine_array_order 
*
* Function Purpose - to return the state of an array (one of the 4 order modes) 
*
* Parameters –  [IN nums - an array of integers] 
*               [IN length - the length of the array]
*		        
* Return Values - the state of the array: -1 = messy, 0 = increasing, 1 = decreasing, 2 = constant
*
* Author - Golan Ziv
-------------------------------------------------------*/
int determine_array_order(int nums[SIZE], int length){
    int modes[MODES_AMNT] = {1,1,1}; // set all to true, will change later.
    int prev = nums[0], state = -1;
    // state starts of as messed up, if later we see its something else, it will change
    
    for (int i = 1; i < length; i++){
        if(prev > nums[i]){
            modes[INC] = 0; // CANT BE INCREASING, we set increasing mode to 0, indicating it's not an increasing array
            modes [CON] = 0; // CANT BE CONSTANT, we set constant mode to 0, indicating it's not a constant array
        }
        else if(prev < nums[i]){
            modes[DEC] = 0; // CANT BE DECREASING, we set decreasing mode to 0, indicating it's not an decreasing array
            modes[CON] = 0; // CANT BE CONSTANT, we set constant mode to 0, indicating it's not a constant array
        }
        prev = nums[i];
    }
    
    for (int j = 0; j<MODES_AMNT; j++)
        if(modes[j]) state = j; // if some mode is still true, we set the state to it.
    
    //  NOTE: Increasing and decreasing modes will never be true at the same time.

    /*  NOTE: There can be a situation where the constant mode is true and the increasing / decreasing is true
        The way I set it up, a constant array is also increasing, but the loop on the modes ensures it
        it checks constant at the end, this way it will be more accurate. */

    return state;
}

/*------------------------------------------------------
* Function Name - print_array_order
*
* Function Purpose - to print the state of the array order 
*
* Parameters –  [IN nums - an array of integers] 
*               [IN length - the length of the array]

* Return Values - void
*
* Author - Golan Ziv
-------------------------------------------------------*/
void print_array_order(int nums[SIZE], int length){
    int state = determine_array_order(nums, length);

    switch(state){
        case MESSY:
            printf("The array is messed up\n");
            break;
        case INC:
            printf("The array is increasing\n");
            break;
        case DEC:
            printf("The array is decreasing\n");
            break;
        case CON:
            printf("The array is constant\n");
            break;
    }

}

/*------------------------------------------------------
* Function Name - main 
*
* Function Purpose - creates 4 demonstrate the function "print_array_order" 
*
* Return Values - 0 for success
*
* Author - Golan Ziv
-------------------------------------------------------*/
int main() {
    /* 
    we create 4 arrays of size 15.
    each of them will be ordered in one of the four ways 
    (increasing, decreasing, constant, messy)
    then the function will be used on all 4 of them to print their order
    */
    int inc_arr[SIZE] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int dec_arr[SIZE] = {120,116,114,63,50,7,-5,-18,-20,-21,-55,-60,-82,-92,-100};
    int con_arr[SIZE] = {17,17,17,17,17,17,17,17,17,17,17,17,17,17,17};
    int mess_arr[SIZE] = {1,2,3,4,120,6,7,8,9,10,11,-2200,13,14,15};

    print_array_order(inc_arr, SIZE);
    print_array_order(dec_arr, SIZE);
    print_array_order(con_arr, SIZE);
    print_array_order(mess_arr, SIZE);

    return 0;
}