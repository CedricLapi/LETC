#include<stdio.h>

void hou(int n); //hou function protype
int main(void)
{
    hou(10);
}

void hou(int n) //hou function
{
    for(int i = 0; i < n; i++)
    {
        printf("hou!");
    }
}