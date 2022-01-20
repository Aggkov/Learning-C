#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define N 20

void init_array(int *pinakas,int n,int a,int b);
void print_array(int *pinakas,int n);
int max_array(int *pinakas,int n);


int main()
{
    int pinakas[N];

    init_array(pinakas,N,10,20);
    print_array(pinakas,N);
    printf("\nO megistos einai: %d\n",max_array(pinakas,N));
}

void init_array(int *pinakas,int n,int a,int b)
{

    srand(time(NULL));

    for(int i = 0; i < n; i++)
    {
        pinakas[i] = a+rand()%(b-a+1);
    }

}

void print_array(int *pinakas,int n)
{
    printf("[");
    for(int i = 0; i < n - 1; i++)
        printf("%d ", pinakas[i]);
    printf("%d]",pinakas[n - 1]);
}

int max_array(int *pinakas,int n)
{
    int max = pinakas[0];

    for(int i = 0; i < n; i++)
    {
        if(pinakas[i] > max)
        {
            max = pinakas[i];

        }
    }
    return max;

}

