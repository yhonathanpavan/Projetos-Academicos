#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
int num;
int resultado;

    printf("Insira um numero inteiro: \n");
    scanf("%d", &num);
    printf("\n");

        for(i = 0; i <= 10; i++){
            resultado = num * i;
            if (resultado % 3 == 0){
                continue;
            }
        printf("%2d X %2d = %2d \n", num, i, resultado);
        }

    return 0;
}
