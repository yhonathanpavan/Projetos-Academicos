#include <stdio.h>

int main()
{
int numero;
    printf("Digite um numero: \n");
    scanf("%d", &numero);

    if (numero > 0){
        printf("Numero positivo!");
    }
    else if (numero < 0) {
        printf("Numero negativo!");
    } else {
        printf("Numero Nulo!");
    }
    return 0;
}
