


/*  This program presents a menu of choices, gets the user's choice,
and then uses the switch statement to execute a line or two of code
based on that choice. (What the user wants to do is not truly
implemented-it is just a series of stubs to teach the value of the 
switch statement. */


#include <stdio.h>
#include <stdlib.h> // This is for any program that uses the exit() function call

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

        switch (choice)

        {
            case (1):  printf("\nTo add you will need the");
                       printf("contact's\n");
                       printf("First name, last name, and number.\n");

                       break;

            case(2):   printf("\nGet ready to enter the name of the contact you wish to change.\n");

                       break;

            case (3):  printf("\nWhich contact do you wish to call?");

                       break;

            case (4): printf ("\nWhich contact do you which to text?");

                       break; 

            case (5): exit (1); //Exits the program early  

            default: printf ("\n%d is not a valid choice.\n", choice);

                     printf("Try again.\n"); 

                       break;                       
        }

}
while ( (choice < 1) || (choice > 5));

return 0;

}