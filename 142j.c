#include <stdio.h>

 void main()

{
    int c, f;
    c = 10;
    while (c <= 100)
    {
        f = (c * 9/5) + 32;
        printf("%i Celsius = %i Fahrenheit\n", c, f);
        c = c + 10;
    }
}
