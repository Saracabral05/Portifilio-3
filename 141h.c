#include<stdio.h>

 void main()
{
    int i,b,c=1,d;
    printf("escreva a base: ");
    scanf("%i",&i);
    printf("escreva o expoente: ");
    scanf("%i",&b);
    if(i>=0 && i>=0)
    {
        for(d=1;d<=b;d++)
        {
            c = c*i;
        }
        printf("%i elevado a %i e: %i",i,b,c);
    }
}
