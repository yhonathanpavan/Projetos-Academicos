#include <stdio.h>
#include <stdlib.h>

int main()
{
int n1, n2, n3, n4, soma;

    printf("Digite um valor para ser somado: \n");
        scanf("%d", &n1);
      printf("Digite um segundo valor: \n");
        scanf("%d", &n2);
      printf("Digite um terceiro valor: \n");
        scanf("%d", &n3);
      printf("Digite um quarto valor: \n");
        scanf("%d", &n4);

        soma = n1 + n2 + n3 + n4;

        printf("A soma dos quatro valores que voce digitou eh: %d", soma);

    return 0;
}
