#include<stdio.h>

 void main()
{
    float  g,t,q;
    g=1;
    t=0;
    q=1;
    while(q<=64)
    {
        t=t+g;
        g=g*2;
        q=q+1;
    }
    printf("total de graos de trigo: %f",t);
}
