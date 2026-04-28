/* A modified version of hello_world.c  named hello_World_v1.c
* Created 28/04/2026
* Author: Patrick Connell */

#include<stdio.h>

/* int is required before main(). 
* The compiler requires it. In the 1988 ANSI version
* K and R omit int. */

int main() {

    printf("Hello, world!"); /* The new line character \n (which is an escape sequence
    is omitted. Unlike in the ANSI version of C which KR use the C compiler does
    not return an error if the argument of printf doesn't contain \n . */
}