

#include <stdio.h>

int main(void)
{
    char answer[100];
    printf("What's your name? ");
    scanf("%99s", answer);
    printf("hello, %s\n", answer);
    return 0;
}
