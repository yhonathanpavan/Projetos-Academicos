package net.maromo.prjtestescanner;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	    // write your code here
        Scanner input = new Scanner(System.in);

        double raio;
        System.out.println("Digite o valor do raio: ");
        raio = Double.parseDouble(input.nextLine());

        double area = Math.PI * Math.pow(raio, 2.0);
        System.out.printf("Área da circunferência é:  %.2f \n", area);

    }
}
