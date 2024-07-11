

/* This program make use of the strlen function to get the lenght of a string */

#include<stdio.h>
#include<string.h>  //library that provides the strlen function

int main(void){

    char *name;
    printf("name: ");
    scanf("%s", &*name);

    int length = strlen(name);   

    printf("%i", length); 

    

}