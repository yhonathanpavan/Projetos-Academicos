package net.maromo.projetoproduto;

public class GerenciarProduto {

    public static void main(String[] args) {
	// write your code here
        Tipo tipo1 = new Tipo();
        tipo1.setCodigoTipo(1);
        tipo1.setDescricao("Farmácia");
        tipo1.setPerecivel(true);

        Tipo tipo2 = new Tipo();
        tipo2.setCodigoTipo(2);
        tipo2.setDescricao("Metal");
        tipo2.setPerecivel(false);

        Produto produto = new Produto();
        produto.setCodigo(1);
        produto.setValor(500);
        produto.setDescricao("Barra de Metal numero 5");
        produto.setTipo(tipo2);

        produto.imprimir();
    }
}
