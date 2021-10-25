#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, n, caixaMenor, caixaMaior, soma;
float media;

    printf("Atencao! Ao digitar o valor 0 acarretara ao encerramento do programa!\n");
    printf("Insira um numero: \n");
    scanf("%d", &n);

caixaMenor = n;
caixaMaior = n;


i = 0; //i é o contador de numeros digitados
soma = 0;

    while(n != 0){
    i++;
    soma = soma + n;
        if (caixaMaior > n){
        caixaMaior = n;
        }else if (caixaMenor < n){
        caixaMenor = n;
        }
        printf("\nInsira mais um numero: \n");
        scanf("%d", &n);

    }

   media = soma / i;

   printf("\nForam inseridos um total de %d numeros!\n", i);
   printf("\nA soma dos numeros inseridos eh: %d\n", soma);
   printf("\nA media dos numeros inserido eh: %.2f\n", media);
   printf("\nEm ordem de tamanho, os numeros inseridos foram classificados como:\n");
   printf("Maior: %d \n", caixaMaior);
   printf("Menor: %d \n", caixaMenor);


   printf("\nFim do programa! Aperte qualquer tecla para fechar.\n");
    exit(-1);
    return 0;
}
