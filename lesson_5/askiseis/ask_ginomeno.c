#include <stdio.h>

int main()
{
    int i,gin,x;
    gin=1;

    for(i = 0; i < 3; i++)
    {
        printf("\nEisagete ton %d-o arithmo: ",i+1);
        scanf("%d", &x);
        gin=gin*x;
    }

    printf("\n%d\n", gin);

}