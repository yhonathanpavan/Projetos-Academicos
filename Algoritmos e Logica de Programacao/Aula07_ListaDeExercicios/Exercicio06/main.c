#include <stdio.h>

main()
{
int numero;

    printf("Digite um numero menor ou maior que 20. \n");
    scanf("%d", &numero);

    if(numero > 20){
        printf("Numero maior que 20!");
    }
    else if (numero < 20) {
         printf("Numero menor que 20!");
    }
    else{
        printf("Numero igual a 20");
    }

}

