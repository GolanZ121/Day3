/*------------------------------------------------------
* Filename: utils.c
* Description: declares kid structure, kid util functions, and important macros
* Author: Golan Ziv
-------------------------------------------------------*/


#include <stdio.h>
#include <string.h>
#define MAX_NAME 30 
#define KIDS_AMNT 5

typedef struct kid_s{
    char name[MAX_NAME];
    struct kid_s* blames;
}kid_t;

int create_blame_list(kid_t kids[KIDS_AMNT]);

void print_blame_list(kid_t kids[KIDS_AMNT]);