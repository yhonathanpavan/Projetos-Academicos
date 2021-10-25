package net.maromo.projetoproduto;

public class Produto {
    private int codigo;
    private String descricao;
    private double preco;

    public int getCodigo() {
        return codigo;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }

    public String getDescricao() {
        return descricao;
    }

    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }

    public double getPreco() {
        return preco;
    }

    public void setPreco(double preco) {
        this.preco = preco;
    }

    public void imprimir(){
        System.out.println("Codigo: " + codigo);
        System.out.println("Nome: " + descricao);
        System.out.println("Preco: " + preco);
    }
}
