#include <stdio.h>
#include <stdlib.h>
#include <math.h>>

int main()
{

int a, b, c, delta;
float raiz_delta;
float x1, x2;


    printf("Digite um valor para A: \n");
    scanf("%d", &a);
     printf("Digite um valor para B: \n");
    scanf("%d", &b);
     printf("Digite um valor para C: \n");
    scanf("%d", &c);

    delta = (b*b) - (4*a)*c;

    printf("\nDelta = %d \n", delta);

    raiz_delta = sqrt(delta);

    //printf("Raiz: %f", raiz_delta);

    if(delta >= 0){
        x1 = (-b + raiz_delta) / (2*a);
        x2 = (-b - raiz_delta) / (2*a);

        printf("Os resultados sao: X1: %1.1f e X2: %1.1f.", x1, x2);
    } else {
    printf("Impossivel concluir a equacao. Delta precisa ser maior ou igual a zero.");
    }


    return 0;
}
