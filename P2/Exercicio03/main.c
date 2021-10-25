#include <stdio.h>

int main()
{
int n, soma, i;

printf("Digite um numero para que seja calculado a soma dos n primeiros inteiros: \n");
scanf("%d", &n);
i = 0;
soma = 0;
while(i < n){
    i++;
    soma = soma + i;

}printf("A soma eh: %d", soma);


return 0;

}
