#include <stdio.h>
#include <stdlib.h>

main()
{
int n, resultado, i;

    printf("Tabuada! Digite um numero:\n");
    scanf("%d", &n);

   for(i = 0, resultado = 0;i <= 10; i++, resultado = n * i){
    printf("%d x %d = %d \n", n, i, resultado);
   }
}
