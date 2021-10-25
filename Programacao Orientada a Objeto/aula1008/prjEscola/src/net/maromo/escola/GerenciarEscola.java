package net.maromo.escola;

public class GerenciarEscola {

    public static void main(String[] args) {
	    //Dar vida ao programa
        //Ideia: Matricular dois alunos. E imprimir os dados deles
        Aluno aluno1, aluno2;
        aluno1 = new Aluno();
        aluno1.ra = 123;
        aluno1.nomeAluno = "Luiz";
        aluno1.email = "luiz@gmail.com";
        aluno1.matricularAluno(); //invocar um método

        aluno2 = new Aluno();
        aluno2.ra = 234;
        aluno2.nomeAluno = "Márcia";
        aluno2.email = "marcia@gmail.com";
        aluno2.matricularAluno();

        //Exibir os dados
        aluno1.imprimirDadosAluno();
        aluno2.imprimirDadosAluno();

        System.out.println();
        System.out.println();
        //Cancelar a matrícula

        aluno1.cancelarMatricula();
        aluno2.cancelarMatricula();
    }
}
