#include <stdio.h>
#include <stdlib.h>

int main()
{
int n, i, contagem;
    printf("Digite um numero: \n");
    scanf("%d", &n);


    i = n;

        printf("Contagem Regressiva: \n");
        while(i > 0){
        i--;
        printf("%d\n", i);
        }

        printf("\nFim da contagem.\n");
    return 0;
}
