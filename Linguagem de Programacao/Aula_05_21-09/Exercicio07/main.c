#include <stdio.h>
#include <stdlib.h>

int main()
{
int num;
int contImpar = 0;
int somaPar = 0;

    do{
        printf("Insira um numero inteiro maior que \"0\" e menor que \"100\" \n");
        scanf("%d", &num);
         if(num > 0 && num < 100){
                if(num %2 == 0){
                    somaPar = somaPar + num;
                }else if(num %2 != 0){
                    contImpar++;
                }
         } else{
            printf("Valor inserido invalido. Fim do programa");
            return 0;
         }
    }while(contImpar != 10 && somaPar < 500);

    printf("\n soma: %d \n", somaPar);
    printf("qtd impar: %d", contImpar);
    return 0;
}
