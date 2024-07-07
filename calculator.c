
#include<stdio.h>

int add(int a, int b);
int main(void)
{
    int x, y;
    
    printf("let x be ");
    scanf("%i", &x);

    printf("let y be ");
    scanf("%i", &y);

     
    printf("so the sum is: %i\n ", add(x, y));

    return 0;
}

int add(int a, int b)
{
    return a + b;
}