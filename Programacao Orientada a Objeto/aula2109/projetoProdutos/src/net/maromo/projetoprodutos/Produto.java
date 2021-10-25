package net.maromo.projetoprodutos;

public class Produto {
    private int idProduto;
    private String descricao;
    private String localArmazenamento;
    private double valor;
    private int saldo;
    private boolean continuado;
    //Método construtor padrão + 2 overload
    public Produto(){

    }
    public Produto(int idProduto, String descricao){
        this.idProduto = idProduto;
        this.descricao = descricao;
    }

    public Produto(int idProduto,
                   String descricao,
                   String localArmazenamento,
                   double valor){
        this(idProduto, descricao);
        this.localArmazenamento = localArmazenamento;
        this.valor = valor;
        this.continuado = true;
    }



    public int getIdProduto() {
        return idProduto;
    }

    public void setIdProduto(int idProduto) {
        this.idProduto = idProduto;
    }

    public String getDescricao() {
        return descricao;
    }

    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }

    public String getLocalArmazenamento() {
        return localArmazenamento;
    }

    public void setLocalArmazenamento(String localArmazenamento) {
        this.localArmazenamento = localArmazenamento;
    }

    public double getValor() {
        return valor;
    }

    public void setValor(double valor) {
        this.valor = valor;
    }



    public boolean isContinuado() {
        return continuado;
    }

    public void setContinuado(boolean continuado) {
        this.continuado = continuado;
    }

    //Métodos
    public boolean entradaDeProduto(int quantidade){
        if(quantidade > 0){
            saldo += quantidade;
            return true;
        }
        return false;
    }
    public boolean saidaDeProduto(int quantidade){
        if(quantidade <= saldo){
            saldo -= quantidade;
            return true;
        }
        return false;
    }
    public int getQuantidadeEmEstoque(){
        return saldo;
    }
    public void imprimirProduto(){
        System.out.println("Dados do produto");
        System.out.println("Id: " + idProduto);
        System.out.println("Descrição: " + descricao);
        System.out.println("Valor do Produto: " + valor);
        System.out.println("Quantidade em Estoque: " + saldo );
        if(continuado){
            System.out.println("Produto Ativo");
        }else{
            System.out.println("Produto Inativo");
        }
    }

}
