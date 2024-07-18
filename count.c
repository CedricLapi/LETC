

/* This program increases a counter from 1 to 5, printing updates
and then counts it back down to 1. However, it uses the increment and decrement operators */


#include <stdio.h>

int main(void)

{
    int ctr = 0;

    printf("the counter is at %d", ++ctr);
    printf("\nthe counter is at %d", ++ctr);
    printf("\nthe counter is at %d", ++ctr);
    printf("\nthe counter is at %d", ++ctr);
    printf("\nthe counter is at %d", ++ctr);

    printf("\nthe counter is at %d", --ctr);
    printf("\nthe counter is at %d", --ctr);
    printf("\nthe counter is at %d", --ctr);
    printf("\nthe counter is at %d", --ctr);
    
}
