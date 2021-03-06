package net.maromo.projetoconta;

public class Conta {
    private String conta;
    private String agencia;
    private double saldo;
    private String nomeCliente;

    public String getConta() {
        return conta;
    }

    public void setConta(String conta) {
        this.conta = conta;
    }

    public String getAgencia() {
        return agencia;
    }

    public void setAgencia(String agencia) {
        this.agencia = agencia;
    }

    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    public String getNomeCliente() {
        return nomeCliente;
    }

    public void setNomeCliente(String nomeCliente) {
        this.nomeCliente = nomeCliente;
    }

    public int sacar(double valor){
        if(valor <= saldo){
            saldo -= valor;
            return 1;
        }
        return 0;
    }

    public void depositar(double valor){
        saldo += valor;
    }

    public void imprimir(){
        System.out.println("Dados da Conta....");
        System.out.println("Num. Conta: " + conta);
        System.out.println("Cliente: " + nomeCliente);
        System.out.println("Ag. : " + agencia);
        System.out.println("Saldo: " + saldo);
    }
}
