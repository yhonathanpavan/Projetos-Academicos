#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, n, soma;
float media;

    printf("Atencao! Ao digitar o valor 0 acarretara ao encerramento do programa!\n");
    printf("Insira um numero: \n");
    scanf("%d", &n);




i = 0; //i é o contador de numeros digitados
soma = 0;

    while(n != 0){
    i++;
    soma = soma + n;

        printf("\nInsira mais um numero: \n");
        scanf("%d", &n);
    }

   media = (float)soma / (float)i;

   printf("\nForam inseridos um total de %d numeros!\n", i);
   printf("A media dos numeros inserido eh: %.2f\n", media);

   printf("\nFim do programa! Aperte qualquer tecla para fechar.\n");
    exit(-1);
    return 0;
}
