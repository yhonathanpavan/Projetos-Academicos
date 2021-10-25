#include <stdio.h>
#include <stdlib.h>

int main()
{
int n1, n2, n3;
float media;

    printf("Digite uma nota: \n");
      scanf("%d", &n1);
    printf("Digite uma segunda nota: \n");
      scanf("%d", &n2);
    printf("Digite uma ultima nota: \n");
      scanf("%d", &n3);

      media = (n1 + n2 + n3) / 3;

    if (media >= 7){
        printf("Aprovado!");
    }
    else{
        printf("Reprovado!");
    }

}
