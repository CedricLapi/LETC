/* This program calculates the average of four grades and also does some other basic math. */

#include <stdio.h>

int main(void)
{
    int grade1, grade2, grade3, grade4;
    float averageGrade, gradeDelta, percentDiff;

    /*  The student got 88s on the first and third test, so a multiple assignment statement works. */

    grade1 = grade3 = 88;
    grade2 = 79;

    // The user needs to enter the fourth grade
    printf("What did you get on the fourth test!");
    printf(" (An integer between 0 and 100) ? ");
    scanf(" %d", &grade4);

    averageGrade = (grade1 + grade2 + grade3 + grade4)/4;

    gradeDelta = 95 - averageGrade;
    percentDiff = 100 * ((95-averageGrade) / 95);
    printf("Your grade is %.1f points lower than the ", gradeDelta);
    printf("top grade in the class (95)\n");
    printf("You are %.1f percent behind ", percentDiff);
    printf("that grade!\n\n\n");

    return 0;

}