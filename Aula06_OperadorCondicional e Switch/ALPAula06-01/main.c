#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor;
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade>=18)
        valor=15;
    else
        valor=10;

    printf("Ingresso: %f", valor);
    return 0;
}
