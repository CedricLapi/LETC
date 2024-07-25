

/* 
*bubble.c
*Bubble Sorting
*by Cedric Lapi
*2024/07/24
 */


/*  This program generates 10 random numbers and then sorts them*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)

{


    int ctr, inner, outer, didSwap, temp;
    int nums[10];
    time_t t;


    // If you don't include this statement, your program will always generate the same 10 random numbers

    srand(time(&t));


    // The first step is to fill the array with random numbers ( from 1 to 100 )

    for ( ctr = 0; ctr < 10; ctr++)
    {
        nums[ctr] = (rand() % 99) + 1;
    }


    // Now list the array as it currently is before sorting:

    puts ( "\nHere is the list before the sort:");
    for ( ctr = 0; ctr < 10; ctr++)
    {
        printf( "%d\n", nums[ctr] );
    }


    // Sort the array

    for ( outer = 0; outer < 9; outer++)
    {

    }

}

        /* eof */