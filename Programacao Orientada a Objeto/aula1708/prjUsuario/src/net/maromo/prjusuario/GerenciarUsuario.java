package net.maromo.prjusuario;

public class GerenciarUsuario {

    public static void main(String[] args) {
	    // Instanciar dois objetos do tipo Usuario
        Usuario usuario1, usuario2; //defini duas variáveis
        // Criar os objetos (instanciar)
        usuario1 = new Usuario();
        usuario1.setNome("Joaquim");
        usuario1.setEmail("joaquim@gmail.com");
        usuario1.setLogin("jj");
        usuario1.setSenha("123");
        usuario1.provarExistencia();
        System.out.println(usuario1.mostrarDadosUsuario());

    }
}
