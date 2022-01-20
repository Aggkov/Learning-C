#include <stdio.h>


#define SIZE 5

int main()
{
    int pinakas[SIZE];
    int gin = 1;


    for(int i = 0; i < SIZE; i++)
    {
        do
        {
            printf("Eisagete ton %d-0 akeraio: ", i + 1);
            scanf("%d", &pinakas[i]);
        }
        while(pinakas[i] < 1 || pinakas[i] > 8);
    }

    for (int i = 0; i < SIZE; i++)
    {
        gin = gin * pinakas[i];
    }
    printf("%d", gin);

}