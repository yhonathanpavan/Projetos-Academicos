#include <stdlib.h>
#include <stdio.h>

main()
{
int n, soma, i;
float media;

printf("Insira um numero par positivo para que possa ser calculado sua media: \n");
scanf("%d", &n);
i = 0;
soma = 0;


    if (n %2 == 0 && n > 0){
        while(i < n){
        i++;
        soma = soma + i;
        }


    printf("\nA soma do numero 1 ate o numero %d eh: %d", n, soma);
    media = (float)soma / (float)i;
    printf("\nA media extraida por meio dessa soma eh: %.2f\n", media);
    }


    else{
    printf("Valor invalido. Fim do programa.\n");
    exit(-1);
    }

}
