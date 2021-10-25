#include <stdio.h>
#include <stdlib.h>

main()
{
int n1, n2, n3;

    printf("Digite um numero: \n");
      scanf("%d", &n1);
    printf("Digite mais um numero: \n");
      scanf("%d", &n2);
    printf("Digite um ultimo numero: \n");
      scanf("%d", &n3);

    if (n1 < n2 && n1 < n3 && n2 < n3) {
    printf("A sequencia em ordem crescente fica: %d, %d, %d", n1, n2, n3);
    }
    else if (n1 < n2 && n1 < n3 && n3 < n2) {
    printf("A sequencia em ordem crescente fica: %d, %d, %d", n1, n3, n2);
    }
     else if (n2 < n1 && n2 < n3 && n1 < n3) {
    printf("A sequencia em ordem crescente fica: %d, %d, %d", n2, n1, n3);
    }
     else if (n2 < n1 && n2 < n3 && n3 < n1) {
    printf("A sequencia em ordem crescente fica: %d, %d, %d", n2, n3, n1);
    }
     else if (n3 < n1 && n3 < n2 && n2 < n1) {
    printf("A sequencia em ordem crescente fica: %d, %d, %d", n3, n2, n1);
    }
     else if (n3 < n1 && n3 < n2 && n1 < n2) {
    printf("A sequencia em ordem crescente fica: %d, %d, %d", n3, n1, n2);
    }
}

