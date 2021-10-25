#include <stdio.h>
#include <stdlib.h>

main()
{
int n1, n2, soma;
        printf("Atencao! o resultado somente aparecera se a soma dos numeros for maior que 10! \n");
        printf("Digite um numero: \n");
    scanf("%d", &n1);
        printf("Digite um segundo numero: \n");
    scanf("%d", &n2);

    soma = n1 + n2;

        if(soma > 10)
            printf("A soma dos valores inseridos deu: %d \n", soma);
        else
            printf("Valores inseridos muito baixo. Tente novamente!");

}
