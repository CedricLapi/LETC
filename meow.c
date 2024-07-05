/*
#include<stdio.h>

int main(void)
{
    int i = 3;
    while(i > 0)//boolean expression
    {
        printf("meow!\n");
        i--;
    }
}
*/




//most conventionnal way of doing it
/*#include<stdio.h>

int main(void)
{
    int i = 0; //start with zero
    while (i < 3) //and less than the number you are trying to reach, so no equal sign
    {
        printf("meow!\n");
        i++;
        return 0;
    }

}
*/

/*
//For loop version

#include<stdio.h>

int main(void)
{
    for(int i = 0; i < 3; i++)
    {
        printf("woah!\n");
    }
    return 0;
}

*/


/*
// Infinite for loop

#include<stdio.h>

int main(void)
{

for(int i = 0; ;i++) //just remove the boolean expression for an infinite loop
{
    printf("meowh\n");
}
return 0;
}

*/






/*
//Infinite while loop
#include<stdio.h>
int main(void)
{
    int i = 0;
    while(1) //Use 1 for an infinite loop
    {
        printf("meowh\n");
        i++;
    }

    return 0;
}

*/



void meowh(int n);

#include<stdio.h>

int main(void)
{
    meowh(7);
}


void meowh(int n)
{
   for (int i = 0; i < n; i++)
   {
     printf("meowh meowh!\n");
   }
}
