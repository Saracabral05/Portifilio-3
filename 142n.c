#include <stdio.h>

void main()

{
    float z, y, w, u;
    y=0;
    u=0;
    printf("Digite um valor(Digite um valor negativo para parar a leitura):\n");

    do
    {
        printf("Digite um valor: ");
        scanf("%f", &z);
        if (z >= 0)
        {
            y = y + z;
            u  = u + 1;
        }
    } while (z >= 0);

    if (u> 0)
    {
        w = y / u;
        printf("soma: %f\n", y);
        printf("media : %f\n", w);
        printf("o numero de valores lidos foi de: %f\n", u);
    }
    else
    {
        printf("Nenhum valor positivo foi lido.\n");
    }
}
