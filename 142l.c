#include<stdio.h>


void main()

{
    int A,fat,R=0,i,k;
    for(i=1;i<=15;i++)
    {
        printf("escreva o valor %i: ", i);
        scanf("%i",&A);
        fat=1;
        for(k=1;k<=A;k++)
        {
            fat=fat*k;
        }
        R=R+fat;
    }
    printf("soma dos fatoriais dos valores lidos: %i",R);
}
