#include <stdio.h>
#include <stdlib.h>
#include "cadastro.h"
double saques = 0;
double depositos = 0;

struct Cliente{
    double cpf;
    char nome[256];
    char email[61];
};

struct Conta{
    int numero_da_conta;
    double saldo;
};

void inicializar(){
    int i;
    for(i = 0; i<=T; i++){
        vClientes[i] = NULL;
        vContas[i] = NULL;
    }

}

//-----------Cadastrar Cliente e Conta
void ler(int p){
    if(p >= T){

        printf("----------- Cadastro de Clientes ------------\n");
        printf(" \nCliente ja cadastrado! \n\n");
        system("pause");
        return;
    }
    //alocar dinamicamente um espaco de memoria para o dado
    //e ligar ao nosso ponteiro

        printf("----------- Cadastro de Clientes ------------\n");

    vClientes[p] = (pcliente) malloc(sizeof(struct Cliente));
        fflush(stdin);
        printf("\n Digite o Nome do Cliente: \n ");
            gets(vClientes[p]->nome);
        fflush(stdin);
        printf("\n Digite o CPF do Cliente: \n ");
            scanf("%lf", &vClientes[p]->cpf);
        fflush(stdin);
        printf("\n Digite o E-mail do Cliente: \n ");
            gets(vClientes[p]->email);
        printf("\n\n Cliente cadastrado com sucesso! \n\n");


    system("pause");
}
//--------------------------------------------------------------------------------------------------------------
void lerConta(int pc){
    if(pc >= T){
        printf("----------- Cadastro de Contas ------------\n");
        printf("\n Conta ja cadastrada! \n\n");
        system("pause");
        return;
    }
    //alocar dinamicamente um espaco de memoria para o dado
    //e ligar ao nosso ponteiro

    printf("----------- Cadastro de Contas ------------\n");

    vContas[pc] = (pconta) malloc(sizeof(struct Conta));
        fflush(stdin);
        printf("\n Digite o Numero da Conta \n ");
            scanf("%d", &vContas[pc]->numero_da_conta);
        fflush(stdin);
        printf("\n Insira o Saldo inicial da Conta \n ");
            scanf("%lf", &vContas[pc]->saldo);
        printf("\n\n Conta cadastrada com sucesso! \n\n");


    system("pause");
}
//--------------------------------------------------------------------------------------------------------------

void imprimirTodos(){
    int i;
    for(i = 0; i <=T; i++){
        if(vClientes[i]!=NULL && vContas[i]!=NULL){
            system("cls");
             printf("----- Dados do Cliente ------ \n\n");
             printf(" Nome: %s\n", vClientes[i]->nome);
             printf(" E-mail: %s\n", vClientes[i]->email);
             printf(" CPF: %.0lf\n\n\n", vClientes[i]->cpf);
             printf("---------- Conta ------------ \n");
             printf("\n Numero da conta: %d\n", vContas[i]->numero_da_conta);
             printf(" Saldo Atual: R$ %.2lf\n", vContas[i]->saldo);
             printf("\n Extrato: Saque: R$ %.2lf\n", saques);
             printf("          Deposito: R$ %.2lf\n ", depositos);
             printf("\n\n-----------------------------\n\n");
        }
    }
    system("pause");
}
//--------------------------------------------------------------------------------------------------------------
void verSaldo(){
    int i;
    for(i = 0; i <=T; i++){
        if(vClientes[i]!=NULL && vContas[i]!=NULL){
            system("cls");
             printf("--- Saldo atual da conta --- \n\n");
                 printf(" Voce tem: R$ %.2lf no banco. \n\n", vContas[i]->saldo);
        }
    }
    system("pause");
}


//--------------------------------------------------------------------------------------------------------------
void sacar(){
int valor;
int i = 0;

if(vContas[i]->saldo > 0){
    printf("---- Sacar dinheiro ----\n");
    printf("\n Digite o valor a sacar: ");
        scanf("%d", &valor);

    saques = saques + valor; //Formula para o extrato

    vContas[i]->saldo = vContas[i]->saldo - valor;

    printf("\n\n Saque realizado com sucesso! \n\n");
     }else{
        printf("---- Sacar dinheiro ----\n");
        printf("\n Impossivel sacar, saldo insuficiente!\n\n");
    }

         system("pause");
}
//--------------------------------------------------------------------------------------------------------------
void depositar(){
int valor;
int i = 0;

    printf("---- Depositar dinheiro ----\n");
    printf("\n Digite o valor a depositar: ");
        scanf("%d", &valor);

    if(valor > 0){

             depositos = depositos + valor; //Formula para o extrato
    vContas[i]->saldo = vContas[i]->saldo + valor;

    printf("\n\nDeposito realizado com sucesso! \n\n");
    }else{
    printf("\n\n Impossivel realizar deposito com valores negativos!! \n\n");
    }

     system("pause");
}
