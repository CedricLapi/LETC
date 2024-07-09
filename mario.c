
#include<stdio.h>

int main(void)
{
    int x;

    //Prompt user for positive integer

    do{

    printf("the size is: ");
    scanf("%i", &x);
    }
    while(x < 1);


    //Print an n-by-n grid of bricks
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < x; j++)
        {
            printf("#");
        }
        printf("\n");
    }


    return 0;
}