package net.maromo.projetoconta;

import java.util.Scanner;

public class ContaTeste {

    public Conta cc = new Conta();

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        ContaTeste gerenciar = new ContaTeste();
        int opc = 0;
        do{
            System.out.println("Menu Principal");
            System.out.println("1.. Cadastrar");
            System.out.println("2.. Depositar");
            System.out.println("3.. Sacar");
            System.out.println("4.. Consultar ");
            System.out.println("9.. Sair");
            System.out.println("Sua opção: ");
            opc = Integer.parseInt(input.nextLine());

            switch (opc){
                case 1:
                    gerenciar.execCadastrar();
                    break;
                case 2:
                    gerenciar.execDepositar();
                    break;
                case 3:
                    gerenciar.execSacar();
                    break;
                case 4:
                    gerenciar.execConsultar();
                    break;
                case 9:
                    System.out.println("Fim do programa");
                    break;
                default:
                    System.out.println("Opção invalida");
            }
        }while(opc != 9);


    }

    public void execCadastrar(){
        Scanner input = new Scanner(System.in);
        System.out.println("Digite o numero da conta: ");
        cc.setConta(input.nextLine());
        System.out.println("Digite o nome do Cliente:");
        cc.setNomeCliente(input.nextLine());
        System.out.println("Digite a agencia do Cliente: ");
        cc.setAgencia(input.nextLine());
        System.out.println("Conta cadastrada com sucesso");
    }
    public void execConsultar(){
        cc.imprimir();
    }
    public void execSacar(){
        Scanner input = new Scanner(System.in);
        double valor;
        System.out.println("Digite o valor do saque: ");
        valor = Double.parseDouble(input.nextLine());

        if(cc.sacar(valor)==1){
            System.out.println("Saque efetuado com sucesso");
        }else{
            System.out.println("Saldo insuficiente para a transação");
        }

    }
    public void execDepositar(){
        Scanner input = new Scanner(System.in);
        double valor;
        System.out.println("Digite o valor do deposito: ");
        valor = Double.parseDouble(input.nextLine());

        cc.depositar(valor);
        System.out.println("Depósito efetuado com sucesso");
    }
}
