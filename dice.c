
/*  This program rolls two dice and presents the total. It then asks
the user to guess if the next total will be higher, lower, or equal.
It then rolls two more dice and tells the user how they did. */

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int main()
{
    int dice1, dice2;
    int total1, total2;
    time_t t;
    char ans;

    //Remenber that this is needed to make sure each random number generated is different

    srand(time(&t));

    // This would give you a number between 0 and 5, so the + 1 makes it 1 to 6

    dice1 = (rand() % 5) + 1;
    dice2 = (rand() % 5) + 1;
    total1 = dice1 + dice2;

    printf("First roll of the dice was %d and %d, ", dice1, dice2);
    printf("for a total of %d.\n\n\n", total1);

    do
    {
        puts ("Do you think the next roll will be ");
        puts ("(H) igher, (L) ower, (S) ame?");
        puts ("Enter H, L, or S to reflect your guess.");

        scanf(" %c", &ans);
        ans = toupper(ans);


    } while ((ans != 'H') && (ans != 'L') && (ans != 'S'));
    
}