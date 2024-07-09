
#include<stdio.h>

int main(void)

{   const int N = 3;
    int score[N];


    for(int i = 0; i < N; i++)

    {
        printf("Score1: ", score[i]);
        scanf("%i", &score[i]);

    }

    printf("Average: %f\n", (score[0] + score[1] + score[2]) / (float)N);

    return 0;
    
}

//An array is a sequence of values back to back in memory... 