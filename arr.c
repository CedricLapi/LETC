
/* Array review */


#include <stdio.h>

int main(void)

{


/* int i;  //Define a non-array variable

int i[25]; //Define an array

char name[6] = "Italy"; // Leave room for the null!

char name[80] = "Italy"; //Leave lots of extra room

int vals[5] = {10, 40, 70, 90, 120};  //integer numeric array

float money[10] = {6.23, 2.45, 8.01, 2.97, 6.41}; //float numeric array

double annualSal[6] = {43565.78, 75674.23, 90001.34, 10923.45, 39845.82 }; //double numeric array

char grades[5] = {'A', 'B', 'C', 'D', 'F'}; //characters array with individuals characters

char italCity[7] = {'V', 'e', 'r', 'o', 'n', 'a', '\0'}; //characters array with a string (the string terminator is present)

char italCity[7] = "Verona"; //character array with a string (simpler format);

int nums[5] = {5, 1, 3, 0}; //int numeric array with individual numbers */

/* int ages[] = {5, 27, 65, 40, 92};//You can declare and intialize your array without specifying the number of subscripts

printf("the size of ages is %d", sizeof(ages));

 */
/* float amount[100] = {0.0}; //zero out the element of an array
printf("the size of amount is %d", sizeof(amount));
 */



/* Putting values into array */

int ages[3];
int i;
for ( i = 0; i < 3; i++)
{
    printf("What is the age of child #%d? ", i + 1);
    scanf(" %d", &ages[i]); //Gets next age from user

}
    //printf("\nUsers age are:\n%d\n%d\n%d\n", ages[0], ages[1], ages[2]);



 /* To display the elements of the array, you loop through it: */
printf("\nthe ages are:");
for (i = 0; i < 3; i++)
{
    printf("\n%d",ages[i]);
}

return 0;

}


