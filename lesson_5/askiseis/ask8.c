#include <stdio.h>

// O Pinakas tha exei 20 theseis eksarxis alla o xristis mporei na thelei na xrisimopoisei mono 5 px
#define SIZE 20

int main()
{
    int pin[SIZE];
    int N;
    int min;

// 1.  Eisagwgi enos arithmou N apo 1 ews 20

        do
        {
            printf("Eisagete enan arithmo gia to megethos tis array: ");
            scanf("%d", &N);
        }
        while(N < 2 || N > 20);

    // 2. Diavasma twn N arithmwn poy tha mpoyn stin array

    for(int i = 0; i < N; i++)
    {
        printf("Dwse ton %d-o arithmo", i + 1);
        scanf("%d", &pin[i]);
    }


    // 3. FIND MIN!!!

    min = pin[0];

    for(int i = 0; i < N; i++)
    {


        if(pin[i] < min)
        {
            min = pin[i];
        }

    }
    printf("O elaxistos einai o %d\n", min);


}