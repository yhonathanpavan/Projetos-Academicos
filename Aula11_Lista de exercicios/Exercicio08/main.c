#include <stdio.h>
#include <stdlib.h>

int main()
{
int n, triplo;
printf("O programa so ira fechar se voce digitar -999\n");
printf("Entre com um numero: \n");
scanf("%d", &n);

    while (n != -999){
        triplo = 3 * n;
        printf("O triplo de %d eh %d. \n", n, triplo);
        printf("Entre com um numero: \n");
        scanf("%d", &n);
    }

    printf("Fim do programa! Aperte qualquer tecla para fechar. \n");
    return 0;
}
