#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int max_array(int *pinakas,int n);

int main()
{
    int array[N];

    srand(time(NULL));

    for(int i = 0; i < N; i++)
    {
        max_array(array,N);
    }




}


int max_array(int *pinakas,int n)
{
    for(int i = 0; i < n; i++)
    {
        int max = pinakas[0];

        if(pinakas[i] > max)
        {
            max = pinakas[i];

        }

    }
    return 0;
}
