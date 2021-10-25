package net.maromo.projetoconta;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	// write your code here
        Scanner input = new Scanner(System.in);
        int[] num = new int[5];

        for (int i = 0; i < 5; i++) {
            System.out.println("Digite um dado: ");
            num[i] = Integer.parseInt(input.nextLine());
        }

        System.out.println("Dados");
        for(int x : num) System.out.println(x);



    }
}
