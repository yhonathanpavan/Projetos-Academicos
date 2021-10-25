#include <stdio.h>
#include <stdlib.h>

int main()
{
int num[10];
int i, j;

    for(i = 1; i <= 10; i++){
        printf("Insira um numero inteiro par: \n");
        scanf("%d", &num[i]);
         if(num[i] % 2 !=0){
                while(num[i] % 2 != 0){
                printf("Valor inserido nao eh par! Por favor, insira um numero par: \n");
                scanf("%d", &num[i]);
                }
        }
    }

    printf("\nOs valores inseridos, ao contrario, ficam: \n\n");
    for(i = 10; i > 0; i--){
        printf("%d | ", num[i]);
    }

printf("\n");

    return 0;
}
