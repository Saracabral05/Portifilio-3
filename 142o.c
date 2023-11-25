#include <stdio.h>

void main()

{
    int i,p,g;
    for(i=1;i<=10;i=i+2)
    {
        p=1;
        for(g=1;g<=i;g++)
        {
            p = p * g;
        }
        printf("fatorial de %i: %i\n",i,p);
    }
}
