#include <stdio.h>
#include <stdlib.h>

int main()
{
float saldo;
float novo_saldo;
float porcentagem;

    printf("Digite um saldo: \n");
    scanf("%f", &saldo);

    porcentagem = (3.5 / 100) * saldo;

    novo_saldo =  saldo + porcentagem;

    //A formula a baixo também funciona
    //novo_saldo = (saldo * 1) + (0.035 * saldo);

    printf("O novo salario que voce tera com um rendimento de 3,5%% eh: R$%f", novo_saldo);


    return 0;
}
