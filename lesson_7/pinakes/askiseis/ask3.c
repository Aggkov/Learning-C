#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE1 100
#define SIZE2 200

int main()
{
    // 1. Dilwsi Pinaka

    int pin[SIZE1][SIZE2];
    int M,N;

    // 2. Diavasma apo to xristi enan M apo 10...100

    do
    {
        printf("Dwse plithos grammwn(10...100): ");
        scanf("%d", &M);
    }
    while(M < 10 || M > 100);

    // 3.Diavasma apo to xristi enan N apo 20...100

    do
    {
        printf("Dwse plithos stilwn(20...100: ");
        scanf("%d", &N);
    }
    while(N < 20 || N > 100);

    // 4. Arxikopoiisi pinaka me tuxaious

    srand(time(NULL));

    for(int i = 0; i < M; i++)

        for(int j = 0; j < N; j++)
            pin[i][j] = rand()%100;




    // 5. Ektipwsi

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N - 1; j++)
        {
            printf("%d\t",pin[i][j]);
        }
        printf("%d", pin[i][N - 1]);

        printf("\n");
    }
}