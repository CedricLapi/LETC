
/* This program defines a series of variables and 
expressions and then uses
 both relational and logical operators to test
them against each other. */

#include <stdio.h>

int main(void)
{
    // set up some common integers for the program

    int planets = 8;
    int friends = 6;
    int potterBooks = 7;
    int starWars = 6;
    int months = 12;
    int beatles = 4;
    int avengers = 6;
    int baseball = 9;
    int basketball = 5;
    int football = 11;

    // This first logical statement uses the AND operator to test
    //whether the cast of Friends and the Beatles would have
    //enough people to make a baseball team AND the cast 
    //of Friends and the Avengers would have enough people
    // to field a football team. If so, the statements will print.

    if (
        (friends + beatles >= baseball) && (friends + avengers >= football))
        {
            printf("The cast of Friends and the Beatles ");
            printf("could make a baseball team,\n");
            printf("AND the cast of Friends plus the Avengers ");
            printf("could make a football team.\n");
        }

    else
    {
        printf("Either the Friends cannot make a ");
        printf("baseball team with the Fab Four,\n");
        printf("OR they can't make a Gridiron Gang with the ");
        printf("Avengers (or both!)");
    }




}