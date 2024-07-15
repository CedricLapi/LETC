

/* This is a sample program that lists three kids and their school

supply needs, as well as cost to buy the supplies
 */
#include<stdio.h>

int main(void)

{
    // Set up the variables, as well as define a few

    char firstInitial, middleInitial;
    int number_of_pencils;
    int number_of_notebooks;

    float pencils = 0.23;
    float notebooks = 2.89;
    float lunchbox = 4.99;

    //The information for the first child

    firstInitial = 'J';
    middleInitial = 'R';

    number_of_pencils = 7;
    number_of_notebooks = 4;

    printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n", firstInitial,middleInitial,number_of_pencils,number_of_notebooks);

}