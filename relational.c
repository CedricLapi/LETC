

/*  This program asks the user for their birth year and calculates how old they will be in the current year.
  (it also checks to make sure a future year has not been entered.) It then tells the user if they were born in a leap year.
 */

#include <stdio.h>
#define CURRENTYEAR 2024

int main(void){

    int yearBorn, age;
    printf("What year were you born? \n");
    scanf(" %d", &yearBorn);

    //This if statement is making some data validation,
    //Making sure that the year is making sense
    //The statement will only execute if the year is before the current year


    printf("What year were you born?\n");
    scanf(" %d", &yearBorn);


    if (yearBorn > CURRENTYEAR) 
    {
        printf("Really? You haven't been born yet?\n");
        printf("Congratulation on time travel!\n");
 
    }

    else{

    age = CURRENTYEAR - yearBorn;
    printf("\nSo this year you will turn %d on your birthday!\n", age);

    // The second if statement uses the modulus operator to if the year of birth was a leap Year. Again, only if it is will the code execute

    if ((yearBorn % 4) == 0)
    {
        printf("\nYou were born in a Leap Year--cool!\n");
    }

    }

    return 0;

}