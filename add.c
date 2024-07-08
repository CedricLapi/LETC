

#include<stdio.h>

int add(int x, int y);
int main(void)

{
    int x, y;

    printf("let x ");
    scanf("%i", &x);

    printf("let y ");
    scanf("%i", &y);

    printf("the sum is then: %i\n", add(x, y));

}


int add(int a, int b)
{
    return a + b;
}