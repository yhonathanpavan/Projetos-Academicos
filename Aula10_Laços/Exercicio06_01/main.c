#include <stdio.h>
#include <stdlib.h>

main()
{
int resultado, i;

    printf("Tabuada do 5!\n");

   for(i = 0, resultado = 0;i <= 10; i++, resultado = 5 * i){
    printf("5 x %d = %d \n", i, resultado);
   }
}
