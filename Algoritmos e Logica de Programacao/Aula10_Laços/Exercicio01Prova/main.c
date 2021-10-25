#include <stdio.h>
#include <stdlib.h>

int main()
{
int n1, n2;
    printf("Insira um numero: \n");
    scanf("%d", &n1);
    printf("Insira um segundo numero: \n");
    scanf("%d", &n2);

    if (n1 > n2){
        printf("Em ordem decrescente os numeros ficam: %d e %d \n", n1, n2);
    }else{
    printf("Em ordem decrescente os numeros ficam: %d e %d \n", n2, n1);
    }
    return 0;
}
