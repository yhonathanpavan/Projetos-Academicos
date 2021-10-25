package net.maromo.prjcontaheranca;

public class Poupanca extends Conta {
    private int diaAniversario;

    public int getDiaAniversario() {
        return diaAniversario;
    }

    public void setDiaAniversario(int diaAniversario) {
        this.diaAniversario = diaAniversario;
    }

    @Override
    public String toString() {
        final StringBuilder sb = new StringBuilder();
        sb.append(super.toString());
        sb.append("diaAniversario=").append(diaAniversario).append("\n");
        return sb.toString();
    }

    @Override
    void imprimirExtrato() {
        System.out.println("Extrato de Poupança");
    }
}
