package br.com.ProvaUm;

import java.lang.reflect.Array;
import java.util.List;
import java.util.ArrayList;
import java.util.Scanner;

public class Empresa {

    private int idEmpresa;
    private String razaoSocial;
    private String cnpj;
    private static List<Funcionario> empregado = new ArrayList<>();
    private static List<Empresa> listaEmpresa = new ArrayList<>();

  //  Funcionario funcionario = new Funcionario();



    //Get e Set --------------------------------------------




    public int getIdEmpresa() {
        return idEmpresa;
    }

    public void setIdEmpresa(int idEmpresa) {
        this.idEmpresa = idEmpresa;
    }

    public String getRazaoSocial() {
        return razaoSocial;
    }

    public void setRazaoSocial(String razaoSocial) {
        this.razaoSocial = razaoSocial;
    }

    public String getCnpj() {
        return cnpj;
    }

    public void setCnpj(String cnpj) {
        this.cnpj = cnpj;
    }

    public static List<Funcionario> getEmpregado() {
        return empregado;
    }

    public void setEmpregado(List<Funcionario> empregado) {
        this.empregado = empregado;
    }

    //-------------------------------------------------------


    public void AdicionarEmpregados(Funcionario f){
        empregado.add(f);
    }

    public void mostrarEmpregados(){
        System.out.println("Lista de funcionarios");

        for (Funcionario i : empregado) { //ForEach
            System.out.println();
            i.imprimir();
        }
    }

    public boolean contemFuncionario(Funcionario f){

        Scanner sc = new Scanner(System.in);
        int idF;
        int idE;

        System.out.println("Insira o id do funcionario: ");
        idF = Integer.parseInt(sc.nextLine());

        for (Funcionario i : getEmpregado()) { //ForEach
            if(idF == i.getIdFunc()) {
                f = i;
                System.out.println("---Dados do funcionário: --- \n");
                f.imprimir();
                System.out.println("True");
                return true;
            }
        }
        System.out.println("False");
        System.out.println("Funcionário não encontrado na base! \n");
return false;
    }


    public int inativarFuncionario(int idFunc){

        for (Funcionario i : empregado) { //ForEach
            if(idFunc == i.getIdFunc()){
                if(i.isEstaAtivo() == true){
                    System.out.printf("O funcionario %s foi demitido! \n", i.getNomeFunc());
                    i.setEstaAtivo(false); //Demitindo o Funcionário
                    return 0;
                }
            }
        }
        System.out.println("Funcionário não encontrado na base! \n");
        return 1;
    }

    public void MostrarFuncionariosAtivos(){

        int ativos = 0;

        System.out.println("Funcionário ativos: ");
        for (Funcionario i : empregado) { //ForEach
                if(i.isEstaAtivo() == true){
                    i.imprimir();
                    ativos++;
                }
        }
        System.out.printf("\nNumero de funcionários ativos: %d \n", ativos);
    }

    //-- Meus novos métodos

    public void AdicionarEmpresas(Empresa em){
        listaEmpresa.add(em);
    }

    public void mostrarEmpresas(){
        System.out.println("Lista de empresas");

        for (Empresa i : listaEmpresa) { //ForEach
            System.out.println();
            i.imprimir();
        }
    }

    public void imprimir(){

        System.out.println("id Empresa = " + idEmpresa);
        System.out.println("Razão Social = " + razaoSocial);
        System.out.println("CNPJ = " + cnpj);
        System.out.println("");
        System.out.println("---------------------------------------------");
        System.out.println("");
    }

    public int adicionarFunEmpresa(){
        Scanner sc = new Scanner(System.in);
        int idF;
        int idE;

        System.out.println("Insira o id do funcionario: ");
        idF = Integer.parseInt(sc.nextLine());

        System.out.println("Insira o id da empresa: ");
        idE = Integer.parseInt(sc.nextLine());

        for (Funcionario i : empregado) { //ForEach
            if(idF == i.getIdFunc()){
                for (Empresa j : listaEmpresa) { //ForEach
                    if(idE == j.getIdEmpresa()){

                        i.setIdEmpresaFun(idE);
                        System.out.println("O funcionário: " + i.getNomeFunc() + " Foi adicionado a Empresa: " + j.getRazaoSocial());
                        return 0;
                    }
                }
            }
        }
        System.out.println("Funcionário ou Empresa não encontrado na base! \n");
        return 1;
    }

    public boolean listarFuncionarioNaEmpresa() {

        Scanner sc = new Scanner(System.in);
        int idF;
        int idE;

        System.out.println("Insira o id da empresa: ");
        idE = Integer.parseInt(sc.nextLine());

        for (Empresa j : listaEmpresa) { //ForEach
            if (idE == j.getIdEmpresa()) {

                for (Funcionario i : empregado) {
                    if (i.getIdEmpresaFun() == idE) {

                        i.imprimir();
                        return true;
                    }

                }
            }
        }
        System.out.println("Empresa não cadastrada, ou sem funcionários!");
        return false;
    }

    public boolean contemFuncionarioNaEmpresa(Funcionario f){

        Scanner sc = new Scanner(System.in);
        int idF;
        int idE;

        System.out.println("Insira o id do funcionario: ");
        idF = Integer.parseInt(sc.nextLine());

        System.out.println("Insira o id da empresa: ");
        idE = Integer.parseInt(sc.nextLine());

        for (Empresa j : listaEmpresa) { //ForEach
            if (idE == j.getIdEmpresa()) {

                for (Funcionario i : empregado) {

                    if(idF == i.getIdFunc()) {
                        f = i;
                              if (f.getIdEmpresaFun() == idE) {
                                 System.out.println("---Dados do funcionário: --- \n");
                                  f.imprimir();
                                  System.out.println("True");
                                return true;
                        }
                    }

                }
            }
        }

        System.out.println("False");
        System.out.println("Funcionário não encontrado na base! \n");
        return false;
    }
}
