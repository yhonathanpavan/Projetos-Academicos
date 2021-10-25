#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

struct Aluno{
    int ra;
    char nome[51];
    char email[61];
    int turma;
};

void inicializar(){
    int i;
    for(i=0; i<T; i++){
        vAlunos[i] = NULL;
    }
}

void ler(int p){
    if(p>=T){
        printf("Ocupou toda a memoria \n");
        system("pause");
        return;
    }
    //Alocar dinamicamente um espaco de memoria para o dado
    //e ligar ao nosso ponteiro
    vAlunos[p] = (paluno) malloc(sizeof(struct Aluno));
    fflush(stdin);
    printf("Digite o Ra do Aluno: \n");
    scanf("%d", &vAlunos[p]->ra);
    fflush(stdin);
    printf("Digite o Nome do Aluno: \n");
    gets(vAlunos[p]->nome);
    fflush(stdin);
    printf("Digite o Email do Aluno: \n");
    gets(vAlunos[p]->email);
    fflush(stdin);
    printf("Digite o codigo da Turma do Aluno: \n");
    scanf("%d", &vAlunos[p]->turma);
    printf("Dados cadastrados com sucesso \n");
    system("pause");
}

void imprimir(int raInf){
    int i;
    for(i=0; i<T; i++){
        if(vAlunos[i]!=NULL){
            if(vAlunos[i]->ra == raInf){
                //achei o aluno
                system("cls");
                printf("Dados do aluno: \n");
                printf("Nome do Aluno: %s \n", vAlunos[i]->nome);
                printf("Email do Aluno: %s \n", vAlunos[i]->email);
                printf("Turma do Aluno: %d \n", vAlunos[i]->turma);
                system("pause");
                return;
            }
        }
    }
    printf("Aluno nao cadastrado \n");
    system("pause");
}

void imprimirTodos(){
    int i;
    system("cls");
    for(i=0; i<T; i++){
        if(vAlunos[i]!=NULL){
                printf("Dados do aluno: \n");
                printf("Nome do Aluno: %s \n", vAlunos[i]->nome);
                printf("Email do Aluno: %s \n", vAlunos[i]->email);
                printf("Turma do Aluno: %d \n", vAlunos[i]->turma);
                printf("----------------------------\n\n");
        }
    }
    system("pause");
}
