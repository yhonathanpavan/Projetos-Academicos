package net.maromo.prjcontacorrente;

public class TesteConta {

    public static void main(String[] args) {
	    //Simular três contas correntes
        Conta conta1, conta2, conta3;

        //Qual é o valor do CPMF do dia
        System.out.println("CPMF do dia: " + Conta.cpmf);
        System.out.println();

        conta1 = new Conta();
        conta1.setNumConta(1);
        conta1.setNomeCorrentista("Maromo");
        conta1.setNomeAgencia("Agencia Mogi Mirim");
        conta1.imprimir();
        System.out.println();

        conta1.depositar(3000);
        conta1.imprimir();
        System.out.println();
        conta1.sacar(500);
        conta1.imprimir();
        System.out.println();



        conta2 = new Conta();
        conta2.setNumConta(2);
        conta2.setNomeCorrentista("Luiz");
        conta2.setNomeAgencia("Agencia Mogi Mirim");
        conta2.imprimir();
        System.out.println();
        conta2.depositar(2000);
        conta2.imprimir();
        System.out.println();
        conta2.sacar(1000);
        conta2.imprimir();
    }
}
