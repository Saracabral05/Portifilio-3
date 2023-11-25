#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    for(b = 15;b<=200;b++)
    {
        a = pow(b,2);
        printf("o quadrado de %i : %i\n",b,a);
    }
}