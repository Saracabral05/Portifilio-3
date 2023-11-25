#include <stdio.h>
#include <math.h>

int main()
{
    int i,p;
    printf("numeros impares de 0 a 20: ");
    for(i=0;i<=20;i++)
    {
        p = i%2;
        if(p!=0)
        {
            printf("%i, ",i);
        }
    }
}
