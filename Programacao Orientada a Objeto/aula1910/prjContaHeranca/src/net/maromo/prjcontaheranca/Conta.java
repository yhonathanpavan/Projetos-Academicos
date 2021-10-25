package net.maromo.prjcontaheranca;

public abstract class Conta {
    private int numero;
    private String dataAbertura;
    private double saldo;

    public int getNumero() {
        return numero;
    }

    public void setNumero(int numero) {
        this.numero = numero;
    }

    public String getDataAbertura() {
        return dataAbertura;
    }

    public void setDataAbertura(String dataAbertura) {
        this.dataAbertura = dataAbertura;
    }

    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    public void depositar(double valor){
        saldo+= valor;
    }

    public void sacar(double valor){
        if(valor < saldo) {
            saldo -= valor;
        }else{
            throw new IllegalArgumentException("Sem saldo para transação");
        }
    }

    @Override
    public String toString() {
        final StringBuilder sb = new StringBuilder();
        sb.append("Dados da Conta\n");
        sb.append("numero=").append(numero).append("\n");
        sb.append("dataAbertura=").append(dataAbertura).append("\n");
        sb.append("Saldo=").append(saldo).append("\n");
        return sb.toString();
    }

    abstract void imprimirExtrato(); //muito importante
}
