#include <stdio.h>

main()
{
int n, soma, i;

printf("Digite um numero para que seja calculado a soma dos n primeiros naturais: \n");
scanf("%d", &n);
i = 0;
soma = 0;
while(i < n){
    i = i + 1;
    soma = soma + i;

}printf("A soma eh: %d", soma);




}
