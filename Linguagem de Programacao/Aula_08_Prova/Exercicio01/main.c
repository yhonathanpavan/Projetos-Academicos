#include <stdio.h>
#include <stdlib.h>

int main()
{
int num;
int somaImpar;

printf("*** O programa encerrara quando o numero \"0\" for inserido ***\n\n");
    do{
    printf("Insira um numero > 0 e < 100: \n");
    scanf("%d", &num);

        if(num > 0 && num < 100){
            if(num % 2 != 0){
                somaImpar = somaImpar + num;
            }
        }else{
            if(num == 0){
                printf("\nFim do programa...\n\n");
                break;
            }
            printf("Valor inserido nao corresponde com as regras. Tente novamente. \n\n");
            system("pause");
            system("cls");
        }

    }while(num != 0);

    printf("\nA somatoria nos numeros impares eh de: %d\n\n", somaImpar);

    return 0;
}
