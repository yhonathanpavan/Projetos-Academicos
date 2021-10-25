#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1;
    int valor2;
    char operacao;
    float resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &valor1);
    printf("Digite a operacao: ");
    scanf(" %c", &operacao);
    printf("Digite o segundo numero: ");
    scanf("%d", &valor2);

    if(operacao == '+')
        resultado = valor1 + valor2;
    else if(operacao == '-')
        resultado = valor1 - valor2;
    else if(operacao == '*')
        resultado = valor1 * valor2;
    else if(operacao == '/')
        resultado = valor1 / (float)valor2;

    printf("%d %c %d = %f\n", valor1,
           operacao, valor2, resultado);
    return 0;
}
