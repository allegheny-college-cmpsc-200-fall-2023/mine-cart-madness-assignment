#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "pico/stdlib.h"

/* TODO: Create struct called node which has two fields:
         - an integer for an id
         - a pointer to the next struct node called "next"
*/

/* TODO: Provide correct type to function */add_carts(/* TODO: Indicate no parameters via correct type */) {
    
    // TODO: Create three instances of node struct set to NULL value
    
    // TODO: malloc space for the three structs

    /* TODO: Assign field values for each pointer struct which:
             - set the id equal to their position in the train (i.e. id = 1 for first car)
             - set the pointer to the next struct node (except the third, which points to NULL)
    */

    // TODO: Return first cart
}

int main(void) {
    stdio_init_all();
    // TODO: Create a struct pointer to outcome of add_carts
    int count = 0;
    // TODO: Create a while loop to count the number of cars in train
    printf("COUNT: %d", count);
    return 0;
}