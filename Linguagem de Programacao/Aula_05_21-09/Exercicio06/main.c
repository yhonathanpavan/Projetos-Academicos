#include <stdio.h>
#include <stdlib.h>

int main()
{
float porcA, porcB, paisA, paisB, NpaisA, NpaisB;
int ano = 0;

porcA = (80000 * 4) / 100;
porcB = (200000 * 1.3) / 100;
paisA = 80000;
paisB = 200000;

    while(paisA <= paisB){
        paisA = paisA + porcA;
        paisB = paisB + porcB;
        ano++;
            printf("Populacao do Pais A: %.2f.  Populacao do Pais B: %.2f.  No ano %d \n\n", paisA, paisB, ano);
    }

printf("Levou %d anos para o Pais A igualar ou ultrapassar o Pais B. \n\n", ano);


    return 0;
}
