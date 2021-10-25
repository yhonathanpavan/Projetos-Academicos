#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
float C;
float F;
float resultado;


    printf("Tabela de Conversao de graus.\n");
    printf("Celsius para Fahrenheits\n\n");

        for (C = 0; C <= 100; C++){

            resultado = (C * 9/5) + 32;

            printf("%.0f C  =  %.1f F\n", C, resultado);

        }
    return 0;
}
