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