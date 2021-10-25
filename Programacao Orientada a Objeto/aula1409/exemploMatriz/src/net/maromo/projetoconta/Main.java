package net.maromo.projetoconta;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	// write your code here
        Scanner input = new Scanner(System.in);
        int[][] num = new int[3][2];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j <2; j++) {
                System.out.println("Digite o dado");
                num[i][j] = Integer.parseInt(input.nextLine());
            }
        }

        for (int i = 0; i < 3; i++) {
            System.out.println("Linha: " + (i + 1));
            for (int j = 0; j < 2; j++) {
                System.out.print(num[i][j] + " ");
            }
            System.out.println();
        }
    }
}
