#include <stdio.h>
#include <stdlib.h>

int main()
{
int num, soma, i, maior;
float media;
soma = 0;
i = 0;
    do{
    printf("Insira um numero inteiro positivo\n");
    scanf("%d", &num);
    }while(num < 0);

     do{
        while(num != 0){
        printf("Muito bem, insira mais um numero. O programa ira finalizar quando digitar \"0\"\n");
        scanf("%d", &num);

        soma+= num;
            if(num > maior){
                maior = num;
            }
        i++;
        }
    }while(num < 0);

    media = soma / (i - 1);

    printf("A media dos numeros inseridos eh %.2f \n", media);
    printf("O maior numero inserido foi: %d \n\n", maior);
    return 0;
}
