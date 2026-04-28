/* The first programme: hello_world.c 
* Created 28/04/2026
* Author: Patrick Connell */

#include<stdio.h>

/* int is required before main(). 
* The compiler requires it. In the 1988 ANSI version
* K and R omit int. */

int main() {

    printf("Hello, ");
    printf("world!");
    printf("It's John!");
    printf("\n");

    /* In multiline printf calls there is no line advance after the
    output is printed. printf doesn't automatically supply a new 
    line. The escape sequence \n is required for this.*/

    return 0; // It is not necessary to include this.

}