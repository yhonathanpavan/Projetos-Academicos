#include <stdio.h>
#include <stdlib.h>

int main()
{
int numero;

    printf("Digite um numero que seja multiplo de 3.\n");
    scanf("%d", &numero);

    if (numero %3 == 0){
        printf("Muito bem!");
    } else {
        printf("Numero inserido nao eh multiplo de 3. \nTente novamente!");
    }
    return 0;
}
