#include <stdio.h>

void f(int *p, int n);                      // 3. Perase mesw anaforas


int main()
{
    int pin[100];

    for(int i = 0; i < 100; i++)
    {
        pin[i]=i;
        printf("%d ",pin[i]);               // 1.Arxikopoiw pinaka kai tupwnw ta stoixeia tou
    }

    printf("\n\n");

    f(pin,100);                             // 2. kalw sinartisi me orisma ton pinaka

    printf("\n\n");

    for(int i = 0; i < 100; i++)            // 4. Kai oi allages poy perasan ston pinaka paremeinan kai stin main

        printf("%d ",pin[i]);



}

void f(int *p, int n)
{
    for(int i = 0; i < n; i++)
    {
        p[i] = 2 * i;
        printf("%d ", p[i]);
    }
}