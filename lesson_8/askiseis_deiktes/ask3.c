#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

void init_array(int *pinakas,int n,int a,int b);
void print_array(int *pinakas,int n);
int max_array(int *pinakas,int n);



int main()
{
    int a,b,N;
    int pinakas[SIZE];

    int choice  = 1;
    while(choice != 5)
    {
        printf("\n\nMENOY EPILOGWN");
        printf("\n===============");
        printf("\n1 - Eisagwgi megethous pinaka");
        printf("\n2 - Arxikopoiisi pinaka");
        printf("\n3 - Ypologismos toy megistou");
        printf("\n4 - Ektipwsi tou pinaka");
        printf("\n5 - Eksodos");
        printf("\n Epilogi? ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("Dwse megethos pinaka: ");
            scanf("%d", &N);
        }
        else if(choice == 2)
        {
            printf("Dwse arxi diastimatos: ");
            scanf("%d", &a);
            printf("Dwse telos diastimatos: ");
            scanf("%d", &b);
            init_array(pinakas,N,a,b);
        }
        else if(choice == 3)
        {
            printf("O megistos einai: %d", max_array(pinakas,N));
        }
        else if(choice == 4)
        {
            print_array(pinakas, N);
        }
        else if(choice == 5)
        {
            printf("Bye Bye");
        }

    }

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
    {
        printf("%d, ",pinakas[i]);
    }
    printf("%d]", pinakas[n - 1]);
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