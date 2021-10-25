#include <stdio.h>
#include <stdlib.h>

int main()
{
int opcao;
float salario, imposto;

    printf("Ola! Vamos calcular o imposto que voce deve pagar.\n");
    printf("Primeiro, escolha uma das opções abaixo conforme o seu sexo");

    printf("\n");

    printf("1 - Masculino \n");
    printf("2 - Feminino \n");
    printf("3 - Sair \n");
    scanf("%d", &opcao);

    switch (opcao){

    case 1 :

        printf("\nMuito bem! Agora digite seu salario: \n");
        scanf("%f", &salario);

        imposto = (salario * 15) / 100;

        printf("O imposto que voce deve pagar eh de R$%.2f. \n", imposto);

    break;

       case 2 :

        printf("\nMuito bem! Agora digite seu salario: \n");
        scanf("%f", &salario);

        imposto = (salario * 10) / 100;

        printf("O imposto que voce deve pagar eh de R$%.2f. \n", imposto);

    break;

       case 3 :

       system("exit");

    break;
    }

    return 0;
}
