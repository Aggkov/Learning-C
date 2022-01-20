#include <stdio.h>

int main()
{
    int N;
    int i,j;

    N=10;

    for(i = 0; i <=N; i++)
    {
        for(j = i; j <= N; j++)
        {
            printf("X");
        }
        printf("\n");
    }
}