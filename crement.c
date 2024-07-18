

#include <stdio.h>

int main(void)

{
    int n, m, i = 2, j = 5;

     n = i++ * j;

    printf("%d", n);
    printf("\n%d", i );

    m = i++ * j;
    printf("\n%d", m);
     printf("\n%d", i );

    return 0;
}