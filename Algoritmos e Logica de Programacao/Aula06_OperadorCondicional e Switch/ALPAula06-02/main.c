#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor;
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    valor = idade>=18 ? 15 : 10;

    printf("Ingresso: %f", valor);
    return 0;
}
