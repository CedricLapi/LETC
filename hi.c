
#include <stdio.h>

int main(void)

{
    /* A string is an array of characters */
      char *s = "HI!";// string declared as a pointer to char
    printf("%c%c%c%c\n", s[0], s[1], s[2], s[3]); 
 

    char *t = "BYE!";
    printf("%c%c%c%c%c\n", t[0], t[1], t[2], t[3], t[4]);

    return 0;

}