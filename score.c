
#include<stdio.h>

int main(void){

    int score[3];

     
    printf("first number is: ");
    scanf("%i", &score[0]);

    printf("second number is: ");
    scanf("%i", &score[1]);

    printf("third number is: ");
    scanf("%i", &score[2]);
    


    printf("Average: %f", (score[0] + score[1] + score[2]) / 3.0);

    return 0;
}