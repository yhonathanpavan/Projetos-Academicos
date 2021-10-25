#include <stdio.h>
#include <stdlib.h>


/*for(inicialização; condição; passo)
instrução;*/
main()
{
    int i , n, quadrado;

    for (i = 0; i <= 4; i++ ){
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("\n");
    quadrado = n * n;
    printf("O quadrado do numero inserido eh: %d \n\n", quadrado);
    }
}

