package net.maromo.prjcontaheranca;

import java.util.ArrayList;
import java.util.List;

public class Gerenciar {
    public List<Conta> listaDeContas = new ArrayList<>();
    public static void main(String[] args) {
	// write your code here
        Gerenciar gerenciar = new Gerenciar();
        Poupanca poupanca = new Poupanca();
        poupanca.setNumero(1);
        poupanca.setDataAbertura("19/10");
        poupanca.setDiaAniversario(19);
        poupanca.depositar(1000);
        poupanca.depositar(2000);
        poupanca.sacar(300);

        gerenciar.adicionarConta(poupanca);

        System.out.println(poupanca.toString());


        Corrente corrente = new Corrente();
        corrente.setNumero(2);
        corrente.setLimite(2000);
        corrente.setDataAbertura("19/10");
        corrente.depositar(50);
        corrente.sacar(1000);
        System.out.println(corrente.toString());

        gerenciar.adicionarConta(corrente);

        System.out.println("Patrimonio do Banco: " + gerenciar.getPatrimonioLiquido());
    }
    public void adicionarConta(Conta conta){
        listaDeContas.add(conta);
    }
    public double getPatrimonioLiquido(){
        double total = 0;
        for (Conta x: listaDeContas) {
            total += x.getSaldo();
        }
        return total;
    }
}
