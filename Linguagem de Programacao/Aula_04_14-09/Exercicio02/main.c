#include <stdio.h>
#include <stdlib.h>

int main()
{
int num, soma;

    printf("Insira um numero >= 1 e <= 20:\n");
    scanf("%d", &num);
do{
    if (num >= 1 && num <= 20){
        while(num != 0){
            soma = soma + num;
            printf("\n");
            scanf("%d", &num);
        }
    }
    else{
        printf("Valor inserido nao corresponde com as regras informadas. \n");
        printf("Por favor, insira um novo valor: ");
        scanf("%d", &num);
       // printf("\n");
    }
} while (num >= 1 && num <= 20);

 printf("\nA soma total dos numeros inseridos eh de: %d", soma);


    return 0;
}
