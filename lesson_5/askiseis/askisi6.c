#include <stdio.h>

#define SIZE 10


int main()
{

    int sum = 0;
    int pin[SIZE];

//  Diavasma arithmwn
    for (int i = 0; i < SIZE; i++)
    {
    printf("Eisagete %d-o akeraio: ", i + 1);
    scanf("%d",&pin[i]);
    }
// Ypologismos sum
    for (int i = 0; i < SIZE; i++)
    {
        sum = sum + pin[i];
    }

    printf("%d\n", sum);



}