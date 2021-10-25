#include <stdio.h>
#include <stdlib.h>
#define T 4 //na verdade é 5, pois conta do 0 até o 4.
int main()
{
int num[T];
int i;
int menor;
int maior;
int soma = 0;
float media;

    for(i = 0; i <= T; i++){

        printf("Insira um numero: \n");
        scanf("%d", &num[i]);

        if(i == 0){
            menor = num[i];
            maior = num[i];
        }
            if(num[i] < menor){
                menor = num[i];
            }else if(num[i] > maior){
                maior = num[i];
            }

        soma = soma + num[i];
    }
    media = soma / 5;
    system("cls");
    printf("\nOs valores inseridos foram: ");
        for(i = 0; i <= T; i++){
        printf(" %d |", num[i]);
        }
    printf("\nO Maior valor: %d.\n", maior);
    printf("O Menor valor: %d.\n", menor);
    printf("A media dos numeros inseridos eh: %.2f\n\n", media);



    return 0;
}
