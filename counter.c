
/* This program increases a counter from 1 to 5, printing updates and then counts it back down to 1. */

#include <stdio.h>

int main(void)

{
    int ctr = 0;

    ctr = ctr + 1; // increases counter to 1
    printf("Counter is at %d.\n", ctr);

    ctr = ctr + 1;// increases counter to 2
    printf("Counter is at %d.\n", ctr);

    ctr = ctr + 1;//increases counter to 3
    printf("Counter is at %d.\n", ctr);

    ctr = ctr + 1;//increases counter to 4
    printf("counter is at %d.\n", ctr);

    ctr = ctr + 1;//increases counter to 5
    printf("counter is at %d\n", ctr);

    ctr = ctr - 1;//decreases counter to 4
    printf("counter is at %d.\n", ctr);

    ctr = ctr - 1;//decreases counter to 3
    printf("counter is at %d.\n", ctr);

    ctr = ctr - 1;//decreases counter to 2
    printf("counter is at %d.\n", ctr);

    ctr = ctr - 1;//decreases counter to 1
    printf("counter is at %d.\n", ctr);

    return 0;
}

//lossCount = lossCount + 1; // counter variable ; adds 1 to lossCount variable

//sales = sales * 1.25; increases sales by 25%

//lossCount = lossCount += 1; // compound addition operator

//sales = sales *= 1.25; //compound multiplication operator