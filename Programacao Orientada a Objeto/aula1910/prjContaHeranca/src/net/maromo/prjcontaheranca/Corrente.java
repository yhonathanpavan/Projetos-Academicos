package net.maromo.prjcontaheranca;

public class Corrente extends Conta {
    private double limite;

    public double getLimite() {
        return limite;
    }

    public void setLimite(double limite) {
        this.limite = limite;
    }


    @Override
    public void sacar(double valor) {
        if(valor < (getSaldo() + limite)){
            setSaldo(getSaldo()-valor);
        }else{
            throw new IllegalArgumentException("Sem saldo e limite para saque");
        }
    }

    @Override
    public String toString() {
        final StringBuilder sb = new StringBuilder();
        sb.append(super.toString());
        sb.append("limite=").append(limite);
        return sb.toString();
    }

    @Override
    void imprimirExtrato() {
        System.out.println("Extrato de conta corrente");
    }
}
