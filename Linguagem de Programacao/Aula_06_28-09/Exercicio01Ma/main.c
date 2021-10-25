#include <stdio.h>
#include <stdlib.h>
#define F 4
#define E 8

int main(){

int ra[E], notaUm[F], notaDois[F], notaTres[F], notaQuatro[F];
int i, j, soma[E];
float media[E];

    for(i = 1; i <= 2; i++){
    printf("Insira o numero do RA do aluno %d : \n", i);
    scanf("%d", &ra[i]);
        for(j = 1; j <= 2; j++){
            printf("Muito bem, agora insira a nota do 1 bimestre desse aluno: \n");
             scanf("%d", &notaUm[j]);
            printf("Muito bem, agora insira a nota do 2 bimestre desse aluno: \n");
             scanf("%d", &notaDois[j]);
            printf("Muito bem, agora insira a nota do 3 bimestre desse aluno: \n");
             scanf("%d", &notaTres[j]);
            printf("Muito bem, agora insira a nota do 4 bimestre desse aluno: \n");
             scanf("%d", &notaQuatro[j]);
        }
    soma[i] = soma[i] + notaUm[j] + notaDois[j] + notaTres[j] + notaQuatro[j];
    media[i] = soma[i] / E;
    }

    printf("\n");

     for(i = 1; i <= E; i++){
        printf("RA: %9d |");
            for(j = 1; j <= F; j++){
                printf("Nota 1 Bim: %2d | \n", notaUm[j]);
                printf("Nota 2 Bim: %2d | \n", notaDois[j]);
                printf("Nota 3 Bim: %2d | \n", notaTres[j]);
                printf("Nota 4 Bim: %2d | \n", notaQuatro[j]);
            }
        printf("Media %d eh: %.2f  |", media[i]);
     }

    return 0;
}
