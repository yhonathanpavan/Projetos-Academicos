package net.maromo.projetoacampamento;

public class Acampamento {
    private String nome;
    private char equipe;
    private int idade;

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public char getEquipe() {
        return equipe;
    }

    public void setEquipe(char equipe) {
        this.equipe = equipe;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public void imprimir(){
        System.out.println("Dados do Membro do Acampamento");
        System.out.println("Nome do Membro: " + getNome());
        System.out.println("Equipe: " + getEquipe());
        System.out.println("Idade: " + getIdade());
        System.out.println();
    }

    public void separarGrupo(){
        if(getIdade() < 6){
            setEquipe('/');
            return;
        }
        if(getIdade() < 11){
            setEquipe('A');
            return;
        }
        if(getIdade() < 21){
            setEquipe('B');
            return;
        }
        setEquipe('C');
    }
}
