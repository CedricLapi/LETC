

#include<stdio.h>

void bark(int n);
int main(void)
{
    bark(6);
    return 0;
}


void bark(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("bark!\n");
    }
}