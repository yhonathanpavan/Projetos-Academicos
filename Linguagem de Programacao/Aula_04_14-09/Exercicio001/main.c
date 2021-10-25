#include <stdio.h>
#include <stdlib.h>

int main()
{
int a = 1;
int i, razao;

    printf("Ola, vamos calcular uma PA.\n");
    printf("Insira uma razao para o termo: \n");
    printf("Razao: ");
    scanf("%d", &razao);
    printf("\n");


    for (i = 1; i <= 10; i++){


        printf("%d \n", a);
        a = a + razao;
    }
    return 0;
}
