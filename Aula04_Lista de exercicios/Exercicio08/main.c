#include <stdio.h>
#include <stdlib.h>

main ()
{

float n1, n2;
float media;

    printf("Digite um numero real: \n");
    scanf("%f", &n1);
    printf("Digite um segundo: \n");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    printf("A media da soma %f + %f = %f", n1, n2, media);

}
