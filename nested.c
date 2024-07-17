

#include <stdio.h>
int main(void)

{
    char ans;
    printf("Is your printer on (Y/N) ?\n");
    scanf(" %c", &ans);

    if ((ans == 'Y') || (ans == 'N'))
    {
        // Gets here if user typed a correct answer.
        if (ans == 'N')
        {
            printf("*** Turn the printer on now. ***\n");
        }
    }

    else
    {
        printf("You did not enter a Y or N.\n");
    }
}