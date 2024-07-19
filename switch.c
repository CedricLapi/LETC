


/*  This program presents a menu of choices, gets the user's choice,
and then uses the switch statement to execute a line or two of code
based on that choice. (What the user wants to do is not truly
implemented-it is just a series of stubs to teach the value of the 
switch statement. */


#include <stdio.h>
#include <stdlib.h>

int main(void)

{

    int choice;

    printf ("What do you want to do ?\n");
    prinft ("1. Add New Contact\n");
    printf ("2. Edit Existing Contact\n");
    printf ("3. Call Contact\n");
    printf ("4. Text Contact\n");
    printf ("5. Exit\n");

    do 
    {

        printf ("Enter your choice: ");
        scanf (" %d", &choice);

}
while ( (choice < 1) || (choice > 5));

return 0;

}