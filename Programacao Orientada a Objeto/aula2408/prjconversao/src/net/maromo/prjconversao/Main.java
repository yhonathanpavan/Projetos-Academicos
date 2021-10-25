package net.maromo.prjconversao;

public class Main {

    public static void main(String[] args) {
	    //converter dados
        int x = 5;
        String valor = "100";
        int valorInteiro = Integer.parseInt(valor);
        int resultado = valorInteiro * x;
        System.out.println("Resultado: " + resultado);

        String strValor = String.valueOf(valorInteiro);

        String strValor2 = Integer.toString(valorInteiro);


    }
}
