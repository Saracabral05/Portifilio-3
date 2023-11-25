#include <stdio.h>

void main()
{
    float l, r , i;
    r=0;
    printf("escreva 10 valores.\n");
    for (i = 1; i <= 10; i++)
    {
        printf("valor %.0f: ",i);
        scanf("%f", &l);
        r = r+ l;
    }

    printf("soma : %.2f\n", r);
    printf("media: %.2f\n", r / 10);

}
