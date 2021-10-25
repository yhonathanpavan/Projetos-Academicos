package net.maromo.prjacampamento;

public class ApoliceTeste {

    public static void main(String[] args) {
        System.out.println("Valor da faixa 1 para qq apólice: " +
                Apolice.faixa1);


        Apolice apolice = new Apolice();
        apolice.setNomeSegurado("Vilson");

        apolice.setIdade(44);
        apolice.setValorPremio(500000.00);
        apolice.imprimir();

    }
}
