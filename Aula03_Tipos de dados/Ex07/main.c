#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, n4, media;

    printf("Digite um numero para somar a media: \n");
    scanf("%f", &n1);
    printf("Digite um segundo numero: \n");
    scanf("%f", &n2);
    printf("Digite um terceiro numero: \n");
    scanf("%f", &n3);
    printf("Digite um quarto numero: \n");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    printf("A media dos valores inseridos eh: %f", media);

    return 0;
}
