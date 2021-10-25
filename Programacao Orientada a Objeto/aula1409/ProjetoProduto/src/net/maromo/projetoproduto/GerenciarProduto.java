package net.maromo.projetoproduto;

public class GerenciarProduto {

    public Produto[] prod = new Produto[3];

    public static void main(String[] args) {
	// write your code here
        GerenciarProduto gp = new GerenciarProduto();
        //Primeiro produto
        gp.prod[0] = new Produto();
        gp.prod[0].setCodigo(1);
        gp.prod[0].setDescricao("Produto Legal");
        gp.prod[0].setPreco(1500.0);


        gp.prod[1] = new Produto();
        gp.prod[1].setCodigo(2);
        gp.prod[1].setDescricao("Produto chato");
        gp.prod[1].setPreco(1200);

        System.out.println("Dados dos produtos");
        for(Produto produto : gp.prod){
            if(produto!=null) {
                System.out.println();
                produto.imprimir();
            }
        }

    }



}
