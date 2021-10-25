package net.maromo.projetocomputador;

public class ComputadorTeste {

    public static void main(String[] args) {
	    Computador c1 = new Computador();
        c1.setCor("Branca");
        c1.setMarca("HP");
        c1.setNumeroSerie(1234);
        c1.setModelo("XS");
        c1.setPreco(5000.0);
        c1.imprimir();
        c1.calcularValor();
        System.out.println();
        c1.imprimir();

        Computador c2 = new Computador();
        c2.setCor("Prata");
        c2.setMarca("Ibm");
        c2.setNumeroSerie(234);
        c2.setModelo("LM");
        c2.setPreco(2000.0);
        System.out.println();
        c2.imprimir();
        c2.calcularValor();
        System.out.println();
        c2.imprimir();

        if(c2.alterarValor(4500.0)==1){
            System.out.println("Valor Alterado");
        }else{
            System.out.println("Valor Não Alterado");
        }
        System.out.println();
        c2.imprimir();
    }
}
