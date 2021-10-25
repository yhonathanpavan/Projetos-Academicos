#include <stdio.h>
#include <stdlib.h>

int main()
{
int n1, n2;
int soma;
float multiplica;
float divisao;
int subtrair;

   printf("Digite o primeiro valor: \n");
   scanf("%d", &n1);
   printf("Digite o segundo numero: \n");
   scanf("%d", &n2);

   soma = n1 + n2;
   multiplica = n1 * n2;
   divisao = n1 / n2;
   subtrair = n1 - n2;


   printf("O resultado de %d + %d = %d \n", n1, n2, soma);
    printf("O resultado de %d x %d = %f \n", n1, n2, multiplica);
     printf("O resultado de %d / %d = %f \n", n1, n2, divisao);
      printf("O resultado de %d - %d = %d \n", n1, n2, subtrair);

      return 0;

}
