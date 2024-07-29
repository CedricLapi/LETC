

/*  This program searches a sorted list of customer IDs in order to 
get credit totals */

#include <stdio.h>

int main(void){

    int ctr; // Loop counter
    int idSearch; // Customer to look for (the key)
    int found = 0; // 1 ( true ) if customer is found

    /*  Defines the 10 elements in each of the parallel arrays */

    int custID[10] = { 313, 453, 502, 101, 892, 475, 792, 912, 343, 633 };

    float custBal[10] = { 0.00, 45.43, 71.23, 301.56, 9.08, 192.41, 389.00, 229.67, 18.31, 59.54 };

    int tempID, inner, outer, didSwap, i; // For sorting;
    float  tempBal;

    // First, sort the arrays by customer ID

    for ( outer = 0 ; outer < 9 ; outer++ )
{
    didSwap = 0; // becomes true if the list is not yet ordered

    for ( inner = outer ; inner < 10 ; inner++ )
    {
        if ( custID[ inner ] < custID[ outer ])
        {
            tempID = custID[ inner ]; // Must switch both arrays

            tempBal = custBal[ inner ]; // or they are no longer linked
        }
    }
}

}