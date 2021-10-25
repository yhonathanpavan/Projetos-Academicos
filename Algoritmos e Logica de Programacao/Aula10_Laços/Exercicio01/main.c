#include <stdio.h>
#include <stdlib.h>

 main()
{
int tabuada, resultado;
    printf("Tabuada do 5:\n");

    tabuada = 0;
    //n = 5;
    while(tabuada <= 10){
        resultado = 5 * tabuada;
        printf("5 x %d = %d \n", tabuada, resultado);
        tabuada = tabuada + 1;

    }

}
