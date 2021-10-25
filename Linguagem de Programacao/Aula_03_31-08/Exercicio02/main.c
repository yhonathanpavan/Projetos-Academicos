#include <stdio.h>
#include <stdlib.h>

int main()
{
float salario;
char estado;
float imposto;

    printf("Ola, digite seu salario bruto:\n");
    scanf("%f", &salario);
    printf("\n");
    printf("Muito bem. Agora nos informe se eh casado ou solteiro. \n");
    printf("Digite \"c\" para casado(a) ou \"s\" solteiro(a) conforme seu estado civil atual.\n");
    scanf(" %s", &estado);

    if (estado == 'c' || estado == 'C'){
        imposto = (salario * 9) / 100;
        printf("\nValor do imposto a ser pago, por voce ser casado eh de: R$%.2f", imposto);
    } else if (estado == 's' || estado == 'S'){
        imposto = (salario * 10) / 100;
        printf("\nValor do imposto a ser pago, por voce ser solteiro eh de: R$%.2f", imposto);
    }
    printf("\n");
    system("pause");
    return 0;
}
