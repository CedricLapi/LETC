#include<stdio.h>

void hou(int n);
int main(void)
{
    hou(10);
}

void hou(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("hou!");
    }
}