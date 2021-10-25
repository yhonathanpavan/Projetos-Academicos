#include <stdio.h>
#include <stdlib.h>

int main()
{
int maior, menor, soma, i, valor;
float media;

    printf("Insira um valor: ");
    scanf("%d", &valor);

maior = valor;
menor = valor;
soma = valor;

        for (i = 0; i < 4; i++){



        printf("\n");
        printf("Insira mais um valor: ");
        scanf("%d", &valor);

            soma = soma + valor;
            media = soma / 5;

                if(valor > maior){ maior = valor;}
                if(valor < menor){ menor = valor;}

    }
    printf("\n\nA media dos valores inserido eh %.2f\n", media, soma);
    printf("\nMaior: %d Menor:%d \n\n", maior, menor);

    return 0;
}
