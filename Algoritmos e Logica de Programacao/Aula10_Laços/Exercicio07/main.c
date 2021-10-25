#include <stdio.h>
#include <stdlib.h>

int main()
{
int n, i, contagem;
    printf("Digite um numero entre 1 a 10\n");
    scanf("%d", &n);


    i = n;
    if (n >= 0 && n <= 10){
        printf("Contagem Regressiva: \n");
        while(i >= 0){
        printf("%d\n", i);
        i--;
        }
    }else{
    printf("Numero invalido");
    }
    return 0;
}
