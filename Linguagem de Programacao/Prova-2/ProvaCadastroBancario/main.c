#include <stdio.h>
#include <stdlib.h>
#include "cadastro.h"

int main()
{
int p = 0;
int pc = 0;
int opc =0;
//Nular os ponteiros
    inicializar();

    do{
        system("cls");
        printf("----------- Menu ------------\n");
        printf(" 1 - Cadastrar Cliente \n");
        printf(" 2 - Cadastrar Conta\n");
        printf(" 3 - Ver Saldo \n");
        printf(" 4 - Saque \n");
        printf(" 5 - Deposito \n");
        printf(" 6 - Ver dados de cadastro \n");
        printf(" 7 - Sair \n");
        printf(" Opcao: ");
        scanf("%d", &opc);

            switch(opc){

            case 1:
                system("cls");
                ler(p);
                p++;
            break;

             case 2:
                 system("cls");
                 lerConta(pc);
                 pc++;
            break;
             case 3:
                 system("cls");
                 verSaldo();

            break;
             case 4:
                 system("cls");
                 sacar();
            break;
             case 5:
                 system("cls");
                 depositar();
            break;
             case 6:
                 system("cls");
                 imprimirTodos();
            break;
             case 7:
                 system("cls");
                 printf("Fim do programa! \n");
                 system("exit");
            break;

             default:
                 system("cls");
                 printf("Opcao Invalida! \n");
                 system("pause");

            }
    }while(opc!=7);

    return 0;
}
