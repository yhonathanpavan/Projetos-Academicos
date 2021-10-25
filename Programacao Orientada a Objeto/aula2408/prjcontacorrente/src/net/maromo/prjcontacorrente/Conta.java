package net.maromo.prjcontacorrente;

/**
 * @author Marcos Roberto de Moraes
 * @version 0.01 Beta
 * @serial #999909
 * Classe Conta - Atende ao Requisito funcional RF-034
 */
public class Conta {
    private int numConta;
    private String nomeAgencia;
    private String nomeCorrentista;
    private double saldo;
    public static double cpmf = 0.0038;

    public int getNumConta() {
        return numConta;
    }

    public void setNumConta(int numConta) {
        this.numConta = numConta;
    }

    public String getNomeAgencia() {
        return nomeAgencia;
    }

    public void setNomeAgencia(String nomeAgencia) {
        this.nomeAgencia = nomeAgencia;
    }

    public String getNomeCorrentista() {
        return nomeCorrentista;
    }

    public void setNomeCorrentista(String nomeCorrentista) {
        this.nomeCorrentista = nomeCorrentista;
    }


    /**
     * Método depositar - Responsável pelo depósito na conta do cliente
     * @param valor - Valor referente a transação para depósito. Trata-se
     *              de um valor do tipo primitivo double
     */
    public void depositar(double valor){
        saldo += valor;
    }

    public void sacar(double valor){
        double imposto = valor * cpmf;
        saldo-= (valor + imposto);
    }

    public void imprimir(){
        System.out.println("Dados do Correntista ");
        System.out.println("Num. Conta: " + numConta);
        System.out.println("Agência: " + nomeAgencia);
        System.out.println("Nome Correntista: " + nomeCorrentista);
        System.out.println("Saldo atual: " + saldo);
    }
}
