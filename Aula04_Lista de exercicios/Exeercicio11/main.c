#include <stdio.h>
#include <stdlib.h>

main()
{
float quilowatts;
float salario_minimo;
float valor_reais_qwtts;
float qtd_qwtts;
float preco;
//float fracao; //fração representante do salario minimo
float quilowatts_preco;
float desconto;

    printf("Digite seu salario minimo (RS): \n");
    scanf("%f", &salario_minimo);

    printf("Digite o valor gasto em quilowatts: \n");
    scanf("%f", &qtd_qwtts);

    preco  = (salario_minimo / 7) * 1;

    valor_reais_qwtts = preco * qtd_qwtts;

    printf("%f", valor_reais_qwtts);
}
