package net.maromo.escola;

public class Aluno {
    //Atributos da classe (características)
    public int ra;
    public String nomeAluno;
    public String email;

    //Métodos (funcionalidades)
    public void matricularAluno(){
        System.out.println("Aluno com RA: " + ra);
        System.out.println("foi matriculado com sucesso");
    }

    public void cancelarMatricula(){
        System.out.println("Aluno " + nomeAluno + " cancelou a matrícula");
    }

    public void imprimirDadosAluno(){
        System.out.println("DADOS DO ALUNO");
        System.out.println("RA: " + ra);
        System.out.println("NOME: " + nomeAluno);
        System.out.println("EMAIL: " + email);
    }


}
