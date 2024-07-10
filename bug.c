#include<stdio.h>


void printf_column(int height);

int main(void)
{
    int height;
    printf("The height is: ", height);
    scanf("%i", &height);
    printf_column(height);

    return 0;
}

void printf_column(int height)
{
    for (int i = 0; i <= height; i++){
        //printf("i is %i\n", i);  //first method of debugging
        printf("#\n");
    }
}