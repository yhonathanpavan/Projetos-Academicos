#include <stdio.h>
#include <stdlib.h>

int main()
{
int dia, mes, ano;

    printf("Ola! Digite um dia: \n");
    scanf("%d", &dia);
    printf("Agora digite um mes: \n");
    scanf("%d", &mes);
    printf("Por ultimo, digite um ano: \n");
    scanf("%d", &ano);

    printf("A data que voce digitou foi: %d/%d/%d.", dia, mes, ano);

    return 0;
}
