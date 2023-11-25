#include <stdio.h>

void main()
{
    float a, i;
    a=0;
    for (i = 50; i <= 70; i++)
    {
        a = a+ i;
    }

    printf("soma: %.2f\n", a);
    printf("media: %.2f\n", a / 20);

}
