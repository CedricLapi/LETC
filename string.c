
#include<stdio.h>
#include<string.h>

int main(void)
{
    char s[100]; //Define a buffer to hold the input string 

    printf("Input: ");
    scanf("%99s",&s); //Read the input string, preventing buffer overflow

    printf("Output: ");

    for(int i = 0, n = strlen(s); i < n; i++){

        printf("%c", s[i]);
    }

    printf("\n");

    return 0;

}