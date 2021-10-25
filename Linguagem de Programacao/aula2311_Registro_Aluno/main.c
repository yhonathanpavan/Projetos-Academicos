#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

int main()
{
    int p=0;
    int raProc = 0;
    int opc = 0;
    //Nular os ponteiros
    inicializar();
    do{
        system("cls");
        printf("Menu Principal \n");
        printf("1.. Cadastrar Alunos \n");
        printf("2.. Procurar Aluno \n");
        printf("3.. Listar Alunos \n");
        printf("4.. Qtd de Cadastrados \n");
        printf("9.. SAIR \n");
        printf("Digite sua opcao: \n");
        scanf("%d", &opc);
        switch(opc){
        case 1:
            system("cls");
            ler(p);
            p++;
            break;
        case 2:
            system("cls");
            fflush(stdin);
            printf("Digite o RA do aluno a ser encontrado \n");
            scanf("%d", &raProc);
            imprimir(raProc);
            break;
        case 3:
            system("cls");
            imprimirTodos();
            break;
        case 4:
            system("cls");
            printf("Quantidade cadastrada no momento: %d \n", p);
            system("pause");
        case 9:
            system("cls");
            printf("Fim de programa \n");
            break;
        default:
            system("cls");
            printf("Opcao invalida \n");
            system("pause");
        }
    }while(opc!=9);
    return 0;
}
