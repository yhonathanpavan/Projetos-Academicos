#include <stdio.h>

main()
{
int n1, n2, n3;

    printf("Digite um numero: \n");
      scanf("%d", &n1);
    printf("Digite mais um numero: \n");
      scanf("%d", &n2);
    printf("Digite um ultimo numero: \n");
      scanf("%d", &n3);


    if (n1 > n2 && n1 > n3){
    printf("O maior numero inserido foi: %d", n1);
    }
    else if (n2 > n1 && n2 > n3){
    printf("O maior numero inserido foi: %d", n2);
    }
    else{
        printf("O maior numero inserido foi: %d", n3);
    }
}

