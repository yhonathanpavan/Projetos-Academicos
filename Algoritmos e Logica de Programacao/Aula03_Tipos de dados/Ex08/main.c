#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    float altura;
    char genero;

    printf("Ola! Insira sua idade: \n");
    scanf("%d", &idade);
    printf("Agora, informe sua altura: \n");
    scanf("%f", &altura);
    printf("Por ultimo, nos informe seu genero: (M ou F) \n");
    scanf(" %c", &genero);

    printf("Seus dados sao:\nGenero: %c \nAltura: %f \nIdade: %d", genero, altura, idade);
    return 0;
}
