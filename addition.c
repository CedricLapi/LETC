
#include<stdio.h>

int add(int a, int b);
int main(void)

{
    int x, y;

    printf("x is: ");
    scanf("%i", &x);

    printf("y is: ");
    scanf("%i", &y);

    int z = add(x, y);
    printf("the sum is %i\n", z);

    return 0;

}


int add(int a, int b)
{
    return a + b;
}