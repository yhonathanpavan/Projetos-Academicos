package net.maromo.prjacampamento;

public class Apolice {
    private String nomeSegurado;
    private int idade;
    private double valorPremio; //não estático pertece ao próprio objeto
    public static double faixa1 = 20000.0; //estático pertence a todos


    public String getNomeSegurado() {
        return nomeSegurado;
    }

    public void setNomeSegurado(String nomeSegurado) {
        this.nomeSegurado = nomeSegurado;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public double getValorPremio() {
        return valorPremio;
    }

    public void setValorPremio(double valorPremio) {
        this.valorPremio = valorPremio;
    }

    public void imprimir(){
        System.out.println("Dados da Apólice");
        System.out.println("Nome do Segurado: " + nomeSegurado);
        System.out.println("Idade: " + idade);
        System.out.println("Valor do Prêmio: " + valorPremio);
    }
}
