#include <stdio.h>

int main()
{
float salario_bruto, valor_prestacao, porcentagem;
    printf("Digite seu salario: \n");
    scanf("%f", &salario_bruto);
    printf("Digite o valor da prestacao \n");
    scanf("%f", &valor_prestacao);

    porcentagem = (salario_bruto * 30) / 100;

    if (valor_prestacao > porcentagem){
        printf("Impossivel realizar emprestimo. \nValor ultrapassa os 30% do salario bruto.");
    } else {
        printf("Emprestimo aceito.");
    }

    return 0;
}
