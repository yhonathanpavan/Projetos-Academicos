#include <stdio.h>

int main()
{
int numero;
float resultado;

    printf("Atencao! Se o numero digitado for maior que 20, o valor final sera a metade do valor inserido \n");
    printf("\n");
    printf("Digite um numero: \n");
    scanf("%d", &numero);

    if (numero > 20){
    resultado = (float)numero / 2;
    printf("Numero final: %f", resultado);
    }else{
    resultado = numero;
    printf("Numero final: %f", resultado);
    }

    return 0;
}
