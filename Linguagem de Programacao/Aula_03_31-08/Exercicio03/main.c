#include <stdio.h>
#include <stdlib.h>

int main()
{
float ordenado;
float aumento;

    printf("Ola, digite o valor do ordenado: \n");
    scanf("%f", &ordenado);

    aumento = ordenado > 1000 ? (ordenado * 5) / 100 : (ordenado * 7) / 100;

    aumento = aumento + ordenado;

    printf("O valor final eh %.2f\n\n", aumento);
    return 0;
}
