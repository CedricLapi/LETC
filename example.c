
/* Chapter 4, example 2 */

#include<stdio.h>

int main(void)

{
    /*  More code to help with the printf() and Escape command */

    printf("Quantity\t Cost\t Total\n");
    printf("%d\t\t\t $%.2f\t $%.2f\n", 3, 9.99, 29.97);

    printf("Too many spaces    \b\b\b\b can be fixed with the ");//The backspace sequence doesn't seem to be working

    printf("\\%c Escape character\n", 'b');

    printf("\n\a\n\a\n\a\n\aSkip a few lines, and beep ");

    printf("a few beeps. \n\n\n");

    printf("%s %c.", "You are kicking butt learning", 'c');
    printf("You just finished chapter %d.\nYou have finished ", 4);
    printf("\n\nOne third equals %.2f or ", 0.333333);

    printf(" %.3f or %.4f or ", 0.333333, 0.333333);
    printf("%.5f or %.6f\n\n\n", 0.333333, 0.3333333);

    return 0;

}

