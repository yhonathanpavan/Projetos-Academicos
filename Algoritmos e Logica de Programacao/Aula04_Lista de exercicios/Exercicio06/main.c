#include <stdio.h>
#include <stdlib.h>

main()
{
int n1;
int n2;
int soma;

    printf("Digite um numero inteiro para ser somado: \n");
    scanf("%d", &n1);
    printf("Digite um segundo numero: \n");
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("A soma de %d + %d = %d", n1, n2, soma);
}
