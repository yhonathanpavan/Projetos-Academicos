#include <stdio.h>

main()
{
int n1, n2;
    printf("Digite um numero: \n");
    scanf("%d", &n1);

    printf("Digite um segundo numero: \n");
    scanf("%d", &n2);

    if (n1 == n2){
        printf("Numeros iguais.");
    }
    else{
        printf("Numeros Diferentes.");
    }

}
