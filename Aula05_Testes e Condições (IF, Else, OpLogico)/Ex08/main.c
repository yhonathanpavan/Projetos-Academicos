#include <stdio.h>

main()
{
int n1, n2, soma;
        printf("Atencao! Se a soma for maior que 20 sera adicionado mais 8. \n");
        printf("Se a soma for menor ou igual que 20 sera subtraido 5. \n");
        printf("Digite um numero: \n");
    scanf("%d", &n1);
        printf("Digite um segundo numero: \n");
    scanf("%d", &n2);

    soma = n1 + n2;

    if(soma > 20)
        printf("Seguindo as regras mencionadas no inicio, o valor resultante eh: %d", soma + 8);
    else
        printf("Seguindo as regras mencionadas no inicio, o valor resultante eh: %d", soma - 5);
}
