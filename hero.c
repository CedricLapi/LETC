
//This program pairs three kids with their favorite superhero

#include<stdio.h>
#include<string.h>

int main(void)

{
    char Kid1[12]; //An array character Kid1 with 11 character name
    //Kid1 can hold an 11-character name
    //Kid2 will be 7 characters (Maddie plus the string terminator)

    char Kid2[] = "Maddie";

    char Kid3[7] = "Andrew";
    //Kid3 is also 7 characters, but specifically defined

    char Hero1[] = "Batman";
    //Hero1 will be 7 characters adding the string terminator 

    char Hero2[34] = "Spiderman";
    //Hero2 will have extra room just in case

    char Hero3[25];


    Kid1[0] = 'K';  //Kid1 is being defined character-by-character

    Kid1[1] = 'a';
    Kid1[2] = 't';
    Kid1[3] = 'i';
    Kid1[4] = 'e';
    Kid1[5] = '\0'; //Never forget the string terminator so c knows when the string ends

    strcpy (Hero3, "The Incredible Hulk");

    printf("%s\'s favorite hero is %s.\n", Kid1, Hero1);
    printf("%s\'s favorite hero is %s.\n", Kid2, Hero2);
    printf("%s\'s favorite hero is %s.\n", Kid3, Hero3); 
}