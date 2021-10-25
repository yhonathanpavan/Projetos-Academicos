#include <stdio.h>
#include <stdlib.h>

int main()
{
int num, novoNum, valorMultiplo, soma, i, aux;

    do{
    printf("Insira um numero inteiro positivo qualquer: \n");
    scanf("%d", &num);
    }while(num < 0);

    do{
    printf("\nMuito bem. Agora insira um valor maior que o anterior para encontrarmos os multiplos de %d: \n", num);
    scanf("%d", &novoNum);
    }while(novoNum < num);

    for(i = num; i <= novoNum; i++){

            if(i % num == 0){
                valorMultiplo = i;
                soma+= valorMultiplo;
            }
    }
    printf("\nSoma do multiplos eh: %d \n\n", soma);
    return 0;
}
