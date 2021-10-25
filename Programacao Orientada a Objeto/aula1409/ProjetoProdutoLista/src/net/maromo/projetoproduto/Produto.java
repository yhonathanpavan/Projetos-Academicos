package net.maromo.projetoproduto;

public class Produto {
    private int codigo;
    private String descricao;
    private double valor;
    private Tipo tipo;

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

    public double getValor() {
        return valor;
    }

    public void setValor(double valor) {
        this.valor = valor;
    }

    public Tipo getTipo() {
        return tipo;
    }

    public void setTipo(Tipo tipo) {
        this.tipo = tipo;
    }

    public void imprimir(){
        System.out.println("Codigo: " + codigo);
        System.out.println("Descricao: " + descricao);
        System.out.println("Valor: " + valor);
        tipo.imprimir();
    }
}
