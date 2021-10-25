#include <stdio.h>
#include <stdlib.h>
#define T 10

int main()
{
int num[T];
int i, soma = 0;
int contador = 0;

    for(i = 1; i <= 5; i++){
        printf("Insira um numero: \n");
        scanf("%d", &num[i]);
          if(num[i] > 0){
            soma = soma + num[i];
          }else{
            contador++;
          }
    }

    printf("\nA soma dos numeros positivos eh: %d\n", soma);
    printf("A quantidade de Numeros Negativos inseridos eh de: %d", contador);
    printf("\n\n");

    return 0;
}
