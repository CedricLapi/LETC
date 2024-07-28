
#include <stdio.h>

int main (void) {

    int ages[3];
    int i;

    // The for loop is used to fill the array
    for ( i = 0 ; i < 3 ; i++) {

        printf( "What's the child age? " , i + 1 );
        scanf( " %d" , &ages[i] ); 
    }


    // And a loop is used to display the array element
    for ( i = 0 ; i < 3 ; i++) {
         
         printf( "%d\n" , ages[i] );
    }
}