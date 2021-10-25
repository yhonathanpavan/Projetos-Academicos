package net.maromo.prjentrada;


import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

	    double valor;
        String nomePessoa;


        System.out.println("Digite seu nome: ");
        nomePessoa = leitor.nextLine();


        System.out.println("Digite seu salário: ");
        valor = Double.parseDouble(leitor.nextLine());

        System.out.println("F ou M (masc ou fem");
        char s = leitor.nextLine().charAt(0);


        System.out.println("Salario: " + valor);
        System.out.println("Nome da pessoa: " + nomePessoa);



    }
}
