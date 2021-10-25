#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, Nmaior, Nmedio, Nmenor, soma;
    float media;

    printf("Digite um numero: \n");
      scanf("%d", &n1);
    printf("Digite mais um numero: \n");
      scanf("%d", &n2);
    printf("Digite um ultimo numero: \n");
      scanf("%d", &n3);

      printf("\n");
    //Maior
    if (n1 > n2 && n1 > n3){
   Nmaior = n1;
    printf("Maior = %d \n", Nmaior);
    }
    else if (n2 > n1 && n2 > n3){
    Nmaior = n2;
     printf("Maior = %d \n", Nmaior);
    }
    else if (n3 > n1 && n3 > n1){
    Nmaior = n3;
     printf("Maior = %d \n", Nmaior);
    }
    //Medio
     if ((n1 > n3 && n1 < n2) || (n1 > n2 && n1 < n3)){
   Nmedio = n1;
    }
    else if ((n2 > n1 && n2 < n3) || (n2 > n3 && n2 < n1)){
   Nmedio = n2;
    }
    else if ((n3 > n1 && n3 < n2) || (n3 > n2 && n3 < n1)){
   Nmedio = n3;
    }
    //Menor
    if (n1 < n2 && n1 < n3){
   Nmenor = n1;
    printf("Menor = %d \n", Nmenor);
    }
    else if (n2 < n1 && n2 < n3){
    Nmenor = n2;
     printf("Menor = %d \n", Nmenor);
    }
    else if (n3 < n1 && n3 < n1){
    Nmenor = n3;
     printf("Menor = %d \n", Nmenor);
    }

    soma = Nmaior + Nmenor;
    printf("\nA soma dos numeros maior e menor resulta em: %d \n", soma);
    media = (Nmaior + Nmenor) / 2;
    printf("\nA media dos numeros maior e menor resutlta em: %2.f\n", media);
}
