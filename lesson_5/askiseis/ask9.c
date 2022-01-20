#include <stdio.h>


#define SIZE 20

int main()
{
    int pin[SIZE];
    int N;
    int sum;
    int avg;

    do
    {
        printf("Dwse megethos array: ");
        scanf("%d", &N);
    }
    while(N < 1 || N > 20);


    for(int i = 0; i < N; i++)
    {
        printf("\nDwse ton %d-o arithmo: ", i + 1);
        scanf("%d", &pin[i]);
    }

    sum = 0;

    for(int i = 0; i < N; i++)
    {
        sum = sum + pin[i];
        avg = sum / N;
    }



    printf("\nO mesos oros einai: %d\n", avg);

}