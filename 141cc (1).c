#include<stdio.h>
int main()
{
    int n1,n2=1;
    while (n2<=100)
    {
        n1 = n1 + n2;
        n2 = n2 + 1;
    }
    printf("soma do numeros de 1 a 100: %i", n1);
}
