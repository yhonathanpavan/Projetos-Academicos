#include <stdio.h>
#include <stdlib.h>

int main()
{
int n, maior, menor, i;


printf("Digite um numero: \n");
scanf("%d", &n);
menor = n;
maior = n;

    for (i = 0; i <= 9; i++){
        printf("Digite um numero: \n");
        scanf("%d", &n);

        if (n > maior) maior = n;
        if(n < menor) menor = n;
    }

    printf ("Numero menor:%d \nNumero maior: %d\n",menor, maior);

return 0;
}
