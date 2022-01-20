#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define SIZE 100

int main()
{
    int pin[SIZE];
    int N;

    // 1. Diavasma tis diastasis toy pinaka

    do
    {
        printf("Dwse enan arithmo apo to 20 ews to 100: ");
        scanf("%d", &N);
    }
    while(N < 10 || N > 100);

    // 2. Arxikopoiisi tou pinaka me tuxaious arithmous

    srand(time(NULL));

    for(int i = 0; i < N; i++)

        pin[i] = rand()%100;

    // 3. Ektiposi stoixeiwn me kompso tropo

    printf("[");
    for(int i = 0; i < N - 1; i++)
        printf("%d, ", pin[i]);             // sto teleutaio stoixeio toy pinaka vgazei ,keno kai agkuli (den fenete wraia)
    printf("%d]", pin[N - 1]);                            // Ara vazw ti loopa na treksei mexri to proteleutaio stoixeio toy pinaka (N-1)
                                            // Vlepw oti vgazei N-1 stoixeia twra
                                            // Ara vazw sto teleutaio printf to TELEYTAIO STOIXEIO TOY PINAKA SAN %d


}