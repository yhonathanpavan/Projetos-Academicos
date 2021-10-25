#include <stdio.h>
#include <stdlib.h>

int main()
{
int n, i;
float h, fracaoN, resultFracao;

    printf("Formula: H = 1 + (1 / n) + (1 / n)... \n");
    printf("Entre com um numero para os termos da serie (n)\n");
    scanf("%d", &n);

resultFracao = 0;

    for (i = 1; i <= n; i++){
    fracaoN = 1 / (float)i;
    resultFracao = resultFracao + fracaoN;

    }
    h = 1 + resultFracao;
    printf("O valor de ''H'' eh: %f", h);

    return 0;
}
