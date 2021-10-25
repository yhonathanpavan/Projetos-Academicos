#include <stdio.h>

main()
{
int numero;

    printf("Digite um numero:" );
    scanf("%d", &numero);
        if (numero > 0)
            printf("Numero positivo.");
        else
            printf("Numero negativo.");
}
