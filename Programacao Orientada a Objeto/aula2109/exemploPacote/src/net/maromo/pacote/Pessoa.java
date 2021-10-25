package net.maromo.pacote;

public class Pessoa {
    private String nome;
    private String email;
    private Sexo sexo;

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public Sexo getSexo() {
        return sexo;
    }

    public void setSexo(Sexo sexo) {
        this.sexo = sexo;
    }

    public void imprimir(){
        System.out.println("Dados");
        System.out.println("Nome: " + nome);
        System.out.println("Sexo: " + sexo);
    }
}
