#include <stdio.h>
#include <stdlib.h>

int main()
{
int inicio, fim, intervalo;

    printf("Insira um numero incial: \n");
    scanf("%d", &inicio);
    printf("Insira um numero final: \n");
    scanf("%d", &fim);
    printf("Insira um intervalo: \n");
    scanf("%d", &intervalo);

    printf("O intervalo de %d entre %d e %d eh: \n", intervalo, inicio, fim);
    while (inicio <= fim){
        printf("%d ", inicio);
        inicio = inicio + intervalo;
    }



    return 0;
}
