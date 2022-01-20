// ypologismos rizwn B' Bathmias eksiswsis me ANAFORA

#include <stdio.h>
#include <math.h>

int rizes(float a, float b, float c, float *x1, float *x2);


int main()
{
    float a,b,c,riza1,riza2;
    int plithos;

    // 1. Diavasma eisodou

    printf("Dwse to a: ");
    scanf("%f",&a);

    printf("Dwse to b: ");
    scanf("%f",&b);

    printf("Dwse to c: ");
    scanf("%f",&c);

    // 2. ypologismo rizwn

    plithos = rizes(a,b,c,&riza1, &riza2);    // exw diavasei apo tin eisodo to a,b,c opote ta pernaw san orismata. Exoun perastei mesw anaforas (float *x1, float *x2)
                                                // opote pernaw ti dieuthinsi tis riza1 kai riza2

    // 3. ektipwsi apotelesmatos

    if(plithos == 0)
        printf("den exei rizes");
    else if(plithos == 1)
        printf("exei dipli riza tin %f", riza1);
    else
        printf("exei rizes: %f kai %f", riza1,riza2);
}


int rizes(float a, float b, float c, float *x1, float *x2)
{
    float Diakrinousa;

    Diakrinousa = b*b-4*c;

    if (Diakrinousa < 0)
        return 0;
    else if(Diakrinousa == 0)
    {
        *x1 = -b/(2*a);
        return 1;               // to *x1 to vlepw san metavliti
    }
    else
    {
        *x1 = (-b+sqrt(Diakrinousa))/(2*a);
        *x2 = (-b-sqrt(Diakrinousa))/(2*a);
        return 2;
    }
}