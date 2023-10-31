#include <stdio.h>
#include <string.h>

#include "pico/stdlib.h"

/* TODO: We will transform this in class, but you will need to
         erase this TODO
*/
void teleport(int x, int y) {
    int tmp = x;
    x = y;
    y = tmp;
}

int main(void) {
    stdio_init_all();
    int a = 1;
    int b = 2;
    printf("Before calling teleport(): a = %d, b = %d\n", a, b);
    teleport(a, b);
    printf("After calling teleport(): a = %d, b = %d\n", a, b);
    return 0;
}