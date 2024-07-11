
#include<stdio.h>

int main(void){

    const int N = 3;
    int score[N];

    for(int i = 0; i <= N; i++){

        printf("the number is: ");
        scanf("%i", &score[i]);
    } 

    
    printf("Average: %f", (score[0] + score[1] + score[2]) / N);

    return 0;
}