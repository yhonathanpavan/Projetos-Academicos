#include <stdio.h>

main()
{
  int numero;
      printf("Digite um numero entre 1 a 100 \n");
      scanf("%d", &numero);
        if(numero >= 1 && numero <=100)
            printf("Ok. Numero valido! Numero escolhido foi %d. \n", numero);
        else
            printf("Numero invalido. Tente novamente!");
}

