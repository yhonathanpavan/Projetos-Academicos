#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, n, fatorial;

    printf("Atencao! Qualquer valor menor que 1 acarretara ao encerramento do programa!\n");
    printf("Insira um numero para que seja calculado seu fatorial. (n!).\n");
    scanf("%d", &n);



   while (n >= 1){
    i = n;
    fatorial = 1;

    printf("%d! = ", n);
        while (i >= 1){
            fatorial = fatorial * i;
            printf("%d", i);
            i--;
        }
        printf("\nO fatorial de %d! eh: %d\n", n, fatorial);

         printf("\nInsira um numero para que seja calculado seu fatorial. (n!).\n");
         scanf("%d", &n);
         system("cls");
   }
   printf("Fim do programa! Aperte qualquer tecla para fechar.\n");
    exit(-1);
    return 0;
}
