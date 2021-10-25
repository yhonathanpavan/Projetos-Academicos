#include <stdio.h>
#include <stdlib.h>


int main() {

int voltas = 0;
int i, melhorVolta;
float tempo, melhor, medioTempo, menor, soma;

    printf("Insira a quantidade de voltas: \n");
    scanf("%d", &voltas);

    for(i = 1; i <= voltas; i++){
        printf("Qual foi o tempo percorrido na %d volta? \n", i);
        scanf("%f", &tempo);

                if(tempo > melhor){
                melhor = tempo;
                melhorVolta = i;
                }

                soma+= tempo;
    }
    medioTempo = soma / (i - 1);

    printf("\nMelhor tempo eh o de %.2f seg, que ocorreu na volta: %d \n", melhor, melhorVolta);
    printf("O tempo Medio eh de %.2f seg \n\n", medioTempo);

   return 0;

}


