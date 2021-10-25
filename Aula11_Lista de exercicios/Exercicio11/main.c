#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int n;
float raiz;
char sair;

    printf("Insira um numero para que seja extraido sua raiz: \n");
    scanf("%d", &n);

    printf("\n");

          while ( n > 0){
                raiz = sqrt(n);
                printf("A raiz do numero inserido eh %.2f \n", raiz);
                printf("Deseja sair? Aperte 's' para sim ou 'n' para continuar. \n");
                scanf(" %c", &sair);
                    while (sair != 's' && sair != 'n'){
                        printf("Opcao invalida!\n");
                        printf("Deseja sair? Aperte 's' para sim ou 'n' para continuar.\n");
                        scanf(" %c", &sair);
                        }
                        if (sair == 's'){
                        system("cls");
                        printf("Fim do programa! Aperte qualquer tecla para fechar.\n");
                        exit(-1);
                        }else if (sair == 'n'){
                        system("cls");
                        printf("Insira um numero para que seja extraido sua raiz: \n");
                        scanf("%d", &n);
                        }
        }

    //proteção para evitar numeros negativos
    while (n < 0){
        printf("Valor invalido! Nao eh possivel extrair raiz de numeros negativos.");
        printf("\nTente outro numero!");
        printf("\ninsira um valor: ");
        scanf("%d", &n);
        system("cls");
            //Enquanto os numeros for positivos... fazer as intruções. Quando negativo, sair do while positivo
            //e entra pro negativo pra permanecer a proteção.
            while ( n > 0){
                raiz = sqrt(n);
                printf("A raiz do numero inserido eh %.2f \n", raiz);
                printf("Deseja sair? Aperte 's' para sim ou 'n' para continuar. \n");
                scanf(" %c", &sair);
                    while (sair != 's' && sair != 'n'){
                        printf("Opcao invalida!\n");
                        printf("Deseja sair? Aperte 's' para sim ou 'n' para continuar.\n");
                        scanf(" %c", &sair);
                        }
                        if (sair == 's'){
                        system("cls");
                        printf("Fim do programa! Aperte qualquer tecla para fechar.\n");
                        exit(-1);
                        }else if (sair == 'n'){
                        system("cls");
                        printf("Insira um numero para que seja extraido sua raiz: \n");
                        scanf("%d", &n);
                        }
        }
    }

    return 0;
}
