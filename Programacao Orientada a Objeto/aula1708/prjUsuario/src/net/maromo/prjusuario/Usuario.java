package net.maromo.prjusuario;

public class Usuario {
    //Atributos
    private String nome;
    private String email;
    private String login;
    private String senha;

    //Alt + Insert

    //get e set do email
    public void setEmail(String email){
        this.email = email;
    }
    public String getEmail(){
        return email;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getLogin() {
        return login;
    }

    public void setLogin(String login) {
        this.login = login;
    }

    public String getSenha() {
        return senha;
    }

    public void setSenha(String senha) {
        this.senha = senha;
    }

    //Métodos
    public void provarExistencia(){
        System.out.println("Usuário: " + nome);
        System.out.println("Existe no sistema");
    }

    public String mostrarDadosUsuario(){
        return "Dados do usuário \n" +
                "----------------\n" +
                "Nome: " + nome +
                "\nEmail: " + email +
                "\nLogin: " + login;
    }

}
