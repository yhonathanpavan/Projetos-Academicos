package net.maromo.pacote;

public class Main {


    public static void main(String[] args) {
        Pessoa pessoa = new Pessoa();
        pessoa.setNome("Valdir");
        pessoa.setEmail("valdir@gmail.com");
        pessoa.setSexo(Sexo.masculino);
        pessoa.imprimir();


    }
}
