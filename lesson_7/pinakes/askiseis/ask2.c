#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 5
#define N 8

int main()
{
    // 1. Dilwsi Pinaka

    int pin[M][N];

    // 2. Arxikopoiisi me tuxaious arithmous

    srand(time(NULL));

    for (int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {

            pin[i][j] = rand()%201;   // apo 0 ews 200 tyxaious.
        }
    }
    // 3. Ektiposi tou pinaka

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N - 1; j++)
        {
            printf("%d\t", pin[i][j]);
        }                                              // Ayto typwnei mia grammi kathe fora i = 0, i = 1
        printf("%d",pin[i][N-1]);

                                                        // opote kathe fora pou teleiwnei tha ektipwnw ena keno
        printf("\n");

    }


}