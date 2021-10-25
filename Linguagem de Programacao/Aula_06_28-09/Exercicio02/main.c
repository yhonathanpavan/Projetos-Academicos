#include <stdio.h>
#include <stdlib.h>
#define T 5

int main()
{
int vetorA[T];
int i, somaPar = 0, somaImpar = 0, somaTotal = 0;
int contImpar = 0;
int contPar = 0;
float porcImpar, porcPar;

for (i = 1; i <= T; i++){
    printf("Insira um valor: \n");
    scanf("%d", &vetorA[i]);
        if(vetorA[i] %2 == 0){
            somaPar = somaPar + vetorA[i];
            contPar++;
        }else{
            somaImpar = somaImpar + vetorA[i];
            contImpar++;
        }
}
somaTotal = somaPar + somaImpar;
porcPar = (contPar * 100) / T;
porcImpar = (contImpar * 100) / T;

    printf("\nA soma dos valores impares eh de: %d \n", somaImpar);
    printf("A soma dos valores pares eh de: %d \n", somaPar);
    printf("A soma total dos valores: %d \n", somaTotal);
    printf("Porcentagem dos numeros impares: %.2f%% \n", porcImpar);
    printf("Porcentagem dos numeros pares: %.2f%% \n", porcPar);

    return 0;
}
