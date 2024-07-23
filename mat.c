
/* This program demonstrates the math functions from the c math.h
librar, so that you can get your homework right thanks to some quick-and-easy programming. */


#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)

{
    printf("It's time to do your math homework!\n");

   /*  printf("Section 1: Square Roots\n");
    printf("The square root of 49 is %.1f\n", sqrt(49.0));
    printf("The square root of 149 is %.1f\n", sqrt(149)); */
    /* printf("The square root of .149 is %.2f\n", sqrt(.149)); */


    printf("\n\nSection 2: Powers\n");

    //printf("4 raised to the third power is %.1f", pow(4,3));

    //printf("7 raised to the fith power is %.1f", pow(7,5));

    printf("34 raised to the 1/2 power is %.1f\n", pow(34,.5));

    printf("\n\nSection 3: Trigonometry\n");

    //printf("The cosine of a 60-degree angle is %.3f\n", cos((60*(3.14159/180.0))));

    //printf("The tangent of a 75-degree angle is %.3f\n", tan(75*(3.14159/180.0)));

    //printf("The arc cosine of a 45-degree angle is %.3f\n", acos(45*(3.14159/180)));

    //printf("The arc sine of a 45 degree angle is %.3f\n", asin(45*(3.14159/180)));

    printf("The arc tangent of a 45 degree angle is %.3f\n", atan(15*(3.14159/180))); 

    printf("\nSection 4: Log functions\n");

    printf("e raised to 2 is %.3f\n", exp(2));
    printf("The natural log of 5 is %.3f\n", log(5));
    printf("The base-10 log of 5 is %.3f", log10(5));

    return (0);


}