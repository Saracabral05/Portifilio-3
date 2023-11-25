#include<stdio.h>
int main()
{
    int a,b,c;
    printf("escreva o fator desejado:");
    scanf("%i",&a);
    printf("escreva ate qual numero o numero vai ser multiplicado:");
    scanf("%i",&b);
    for(c = 0;c<=b;c++)
    {
        printf("%i x %i = %i\n",a,c,a*c);
    }
}
