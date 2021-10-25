#include <stdio.h>

main()
{
int n1, n2;
    printf("Digite um numero: \n");
    scanf("%d", &n1);

    printf("Digite um segundo numero: \n");
    scanf("%d", &n2);

    if (n1 > n2){
        printf("O maior numero eh: %d.", n1);
    }
    else{
        printf("O maior numero eh: %d.", n2);
    }

}
