#include <stdio.h>
#include <math.h>

 void main()
{
     int i,t;

    printf("escreva um numero qualquer: ");
    scanf("%i",&t);
    printf("divisores do numero digitado: ", t);
    for(i=1;i<=t;i++)
    {
        if(t%i==0)
        {
            printf("%i ",i);
        }
    }
}
