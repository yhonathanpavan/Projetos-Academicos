#include <stdio.h>
#include <stdlib.h>

main()
{
float raio_circulo;
float pi;
float perimetro_circulo;
float area_circulo;

        printf("Digite o raio de um circulo: \n");
        scanf("%f", &raio_circulo);

    pi = 3.14;
    perimetro_circulo = 2 * pi * raio_circulo;
    area_circulo = pi * (raio_circulo * raio_circulo);

        printf("O perimetro de raio %f eh: %f. \nA area do circulo eh: %f", raio_circulo, perimetro_circulo, area_circulo);
}

