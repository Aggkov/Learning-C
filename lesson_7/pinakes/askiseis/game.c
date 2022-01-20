#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    // 1. ARXIKOPOIISI TOY KRYMENOU ARITHMOU
    srand(time(NULL));

    int n;
    int hidden = 1 + rand()%100;


    // 2. o xristis manteuei ton arithmo

    do
    {
        printf("\n\nDwse enan arithmo apo 1 ews 100: ");
        scanf("%d", &n);

        if (n == hidden)
            printf("Sigxaritiria ton vrikes!\n");
        else if(n > hidden)
            printf("lathos vale mikrotero!");
        else
            printf("Lathos vale megalitero!");
    }
    while(n != hidden);


}