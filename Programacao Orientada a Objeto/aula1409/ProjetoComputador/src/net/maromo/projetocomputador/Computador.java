package net.maromo.projetocomputador;

public class Computador {
    //atributos
    private String marca;
    private String cor;
    private String modelo;
    private long numeroSerie;
    private double preco;

    //gets - sets


    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getCor() {
        return cor;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public long getNumeroSerie() {
        return numeroSerie;
    }

    public void setNumeroSerie(long numeroSerie) {
        this.numeroSerie = numeroSerie;
    }

    public double getPreco() {
        return preco;
    }

    public void setPreco(double preco) {
        this.preco = preco;
    }

    //métodos
    public void imprimir(){
        System.out.println("Dados do Computador");
        System.out.println("Marca: " + marca);
        System.out.println("Cor: " + cor);
        System.out.println("Modelo: " + modelo);
        System.out.println("Numero de Serie: " + numeroSerie);
        System.out.println("Preço: " + preco);
    }

    public void calcularValor() {
        if (marca.equalsIgnoreCase("hp")) {
            preco *= 1.3;
        } else if (marca.equalsIgnoreCase("ibm")) {
            preco *= 1.5;
        }
    }
    public int alterarValor(double valor){
        if(valor > 0){
            preco = valor;
            return 1;
        }
        return 0;
    }
}
