
#include<stdio.h>

int add(int a, int b);
int main(void)

{
    int x, y;

    printf("x is: ");
    scanf("%i", &x);

    printf("y is: ");
    scanf("%i", &y);

    
    printf("the sum is %i\n", add(x, y) );

    return 0;

}


int add(int a, int b)
{
    return a + b;
}