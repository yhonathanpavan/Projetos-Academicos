package br.com.ProvaUm;

import java.util.Scanner;

public class GerenciarFuncionario {



    public static void main(String[] args) {
	// write your code here

        GerenciarFuncionario gf = new GerenciarFuncionario();


        int id;

        int op = 0;

        do {
            Empresa empresa = new Empresa();
            Scanner sc = new Scanner(System.in);
            Funcionario funcionario = new Funcionario();
            System.out.println(" ");
            System.out.println("1. Cadastrar Funcionário");
            System.out.println("2. Cadastrar Empresa");
            System.out.println("3. Atualizar Salário");
            System.out.println("4. Demitir funcionário");
            System.out.println("5. Adicionar funcionário ao quadro da empresa");
            System.out.println("6. Listar funcionários de todas as empresas");
            System.out.println("7. Listar funcionários de uma empresa");
            System.out.println("8. Verificar existência de funcionário na empresa");
            System.out.println("9. Listar todas as empresas");
            System.out.println("10. Verificar existência do funcionário");
            System.out.println("11 Sair");

            op = Integer.parseInt(sc.nextLine());

            switch(op){
                case 1:

                    System.out.println("Digite o id do funcionario: ");
                    funcionario.setIdFunc(Integer.parseInt(sc.nextLine()));

                    System.out.println("Digite o nome do funcionario: ");
                    funcionario.setNomeFunc(sc.nextLine());

                    System.out.println("Digite o departamento do funcionario: ");
                    funcionario.setDepartamento(sc.nextLine());

                    System.out.println("Digite o Salario do funcionario: ");
                    funcionario.setSalario(Double.parseDouble(sc.nextLine()));

                    System.out.println("Digite o documento do funcionario: ");
                    funcionario.setDocumento(sc.nextLine());

                    System.out.println("Funcionario cadastrado com sucesso");

                    empresa.AdicionarEmpregados(funcionario);
                    System.out.println();

                    break;

                case 2:

                    System.out.println("2. Cadastrar Empresa");

                    System.out.println("Digite o id da Empresa: ");
                    empresa.setIdEmpresa(Integer.parseInt(sc.nextLine()));

                    System.out.println("Digite a Razão Social: ");
                    empresa.setRazaoSocial(sc.nextLine());

                    System.out.println("Digite o CNPJ: ");
                    empresa.setCnpj(sc.nextLine());

                    System.out.println("Empresa cadastrada com sucesso");

                    empresa.AdicionarEmpresas(empresa);
                    System.out.println();

                    break;

                case 3:
                    System.out.println("3. Atualizar Salário");

                    int opcao;

                    System.out.println("Digite o valor do aumento de salário:");
                    double aumento = Double.parseDouble(sc.nextLine());

                    funcionario.atualizarSalario(aumento);

                    break;

                case 4:

                    System.out.println("4. Demitir funcionário");
                    System.out.println("Insira o id do funcionário");
                    empresa.inativarFuncionario(Integer.parseInt(sc.nextLine()));

                    break;

                case 5:
                    System.out.println("5. Adicionar funcionário ao quadro da empresa");
                    empresa.adicionarFunEmpresa();


                    break;

                case 6:

                    System.out.println("6. Listar funcionários de todas as empresas");
                    empresa.mostrarEmpregados();
                    break;

                case 7:
                    System.out.println("7. Listar funcionários de uma empresa");
                    empresa.listarFuncionarioNaEmpresa();


                    break;

                case 8:
                    System.out.println("8. Verificar existência de funcionário na empresa");
                    empresa.contemFuncionarioNaEmpresa(funcionario);

                    break;

                case 9:
                    System.out.println("9. Listar todas as empresas");
                    empresa.mostrarEmpresas();
                    break;

                case 10:
                    System.out.println("10. Verificar existência do funcionário"); //- Feito
                    empresa.contemFuncionario(funcionario);

                    break;

                case 11:
                    System.out.println("Fim do programa!");
                    break;

                default:
                    System.out.printf("Opção Inválida!");
                    System.out.println(" ");
                    break;

            }

        }while(op != 11);

    }

}
