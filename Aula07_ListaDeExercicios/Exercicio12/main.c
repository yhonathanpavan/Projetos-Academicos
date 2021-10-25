#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, Nmaior, Nmedio, Nmenor;

    printf("Digite um numero: \n");
      scanf("%d", &n1);
    printf("Digite mais um numero: \n");
      scanf("%d", &n2);
    printf("Digite um ultimo numero: \n");
      scanf("%d", &n3);

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
     printf("Medio = %d \n", Nmedio);
    }
    else if ((n2 > n1 && n2 < n3) || (n2 > n3 && n2 < n1)){
   Nmedio = n2;
     printf("Medio = %d \n", Nmedio);
    }
    else if ((n3 > n1 && n3 < n2) || (n3 > n2 && n3 < n1)){
   Nmedio = n3;
     printf("Medio = %d \n", Nmedio);
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
    }z
}
