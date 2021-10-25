#include <stdio.h>
#include <stdlib.h>

 main()
{
int n, tabuada, resultado;
    printf("Digite um numero que deseja ver a tabuada: \n");
    scanf("%d", &n);

    tabuada = 0;

    while(tabuada <= 10){
        resultado = n * tabuada;
        printf("%d x %d = %d \n", n, tabuada, resultado);
        tabuada = tabuada + 1;

    }

}
