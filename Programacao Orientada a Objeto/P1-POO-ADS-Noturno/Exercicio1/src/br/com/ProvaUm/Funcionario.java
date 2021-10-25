package br.com.ProvaUm;

import javax.naming.Binding;
import java.time.LocalDate;
import java.util.List;
import java.util.Scanner;

import java.time.format.DateTimeFormatter;

public class Funcionario {

    //Formato de horário brasileiro.
    DateTimeFormatter formatoBr = DateTimeFormatter.ofPattern("dd/MM/yyyy");

    private int idFunc;
    private String nomeFunc;
    private String departamento;
    private LocalDate dataContratacao = LocalDate.now();
    private double salario;
    private String documento;
    private boolean estaAtivo = true;

    private int IdEmpresaFun;



    //-------------------------------------------------------------------- Getters and Setters

    public int getIdFunc() {
        return idFunc;
    }

    public void setIdFunc(int idFunc) {
        this.idFunc = idFunc;
    }

    public String getNomeFunc() {
        return nomeFunc;
    }

    public void setNomeFunc(String nomeFunc) {
        this.nomeFunc = nomeFunc;
    }

    public String getDepartamento() {
        return departamento;
    }

    public void setDepartamento(String departamento) {
        this.departamento = departamento;
    }

    public LocalDate getDataContratacao() {
        return dataContratacao;
    }

    public void setDataContratacao(LocalDate dataContratacao) {
        this.dataContratacao = dataContratacao;
    }

    public double getSalario() {
        return salario;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }

    public String getDocumento() {
        return documento;
    }

    public void setDocumento(String documento) {
        this.documento = documento;
    }

    public boolean isEstaAtivo() {
        return estaAtivo;
    }

    public void setEstaAtivo(boolean estaAtivo) {
        this.estaAtivo = estaAtivo;
    }

    public int getIdEmpresaFun() {
        return IdEmpresaFun;
    }

    public void setIdEmpresaFun(int idEmpresaFun) {
        IdEmpresaFun = idEmpresaFun;
    }

    //-------------------------------------------------------------------- Métodos

//GerenciarFuncionario gf;
    public void atualizarSalario(double aumento){
        Scanner sc = new Scanner(System.in);

        int idF;
        System.out.println("Insira o id do funcionario que deseja aplicar este aumento: ");
        idF = Integer.parseInt(sc.nextLine());

        for (Funcionario i : Empresa.getEmpregado()) { //ForEach
            if(idF == i.getIdFunc()){
                if (aumento < 0){
                    System.out.println("Aumento inválido!");
                }else {
                    i.salario += aumento;
                }
            }
        }
        //System.out.println("Funcionário não encontrado na base! \n");
    }

    public void demitirFuncionario(){
        this.estaAtivo = false;
    }

    public void imprimir(){



        System.out.println("idFunc = " + idFunc);
        System.out.println("nomeFunc = " + nomeFunc);
        System.out.println("departamento = " + departamento);
        System.out.println("dataContratacao = " + dataContratacao.format(formatoBr));
        System.out.println("salario = " + salario);
        System.out.println("documento = " + documento);
        System.out.println("ativo = " + estaAtivo);
        System.out.println("");
        System.out.println("---------------------------------------------");
        System.out.println("");
    }
}
