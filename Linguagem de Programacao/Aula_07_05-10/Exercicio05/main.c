#include <stdio.h>
#include <stdlib.h>
#define T 15

int main()
{
int i;
int soma = 0;
int aluno[T];
float media;

    for(i = 1; i <= T; i++){
        printf("Insira a nota do aluno %d : \n", i);
        scanf("%d", &aluno[i]);

        soma = soma + aluno[i];
    }

    media = soma / T;

    printf("\n\n");
    printf("A media geral da sala foi:  %.2f \n\n", media);

    return 0;
}
