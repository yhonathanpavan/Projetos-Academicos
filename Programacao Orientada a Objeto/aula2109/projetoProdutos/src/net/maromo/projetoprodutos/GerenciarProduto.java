package net.maromo.projetoprodutos;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class GerenciarProduto {

    private List<Produto> listaDeProdutos = new ArrayList<>();

    public static void main(String[] args) {
	    //menu com as opções
        Scanner input = new Scanner(System.in);
        GerenciarProduto gp = new GerenciarProduto();
        int opc=0;
        do{
            System.out.println("Controle de Produtos");
            System.out.println("--------------------");
            System.out.println("1.. Cadastrar Produto");
            System.out.println("2.. Listar todos os Produtos");
            System.out.println("3.. Exibir Saldo do Produto");
            System.out.println("4.. Entrada de Produto");
            System.out.println("5.. Saída de Produto");
            System.out.println("6.. Total do Patrimônio");
            System.out.println("9.. Sair");
            System.out.println("Escolha sua opção: ");
            opc = Integer.parseInt(input.nextLine());
            switch (opc){
                case 1:
                    gp.cadastrarProduto();
                    break;
                case 2:
                    gp.listarProdutos();
                    break;
                case 3:
                    gp.exibirSaldoProduto();
                    break;
                case 4:
                    gp.entrada();
                    break;
                case 5:
                    gp.saida();
                    break;
                case 6:
                    System.out.println("Total do Patrimônio: ");
                    System.out.println(gp.totalPatrimonio());
                    break;
                case 9:
                    System.out.println("Fim do programa");
                    break;
                default:
                    System.out.println("Opção inválida");
            }
        }while(opc!=9);
    }

    //métodos auxiliares
    public void cadastrarProduto(){
        Produto produto = new Produto();
        Scanner input = new Scanner(System.in);
        System.out.println("Cadastro de Produto Novo");
        System.out.println("Digite o código do produto: ");
        produto.setIdProduto(Integer.parseInt(input.nextLine()));
        System.out.println("Digite a descrição do produto: ");
        produto.setDescricao(input.nextLine());
        System.out.println("Digite o local de armazenamento: ");
        produto.setLocalArmazenamento(input.nextLine());
        System.out.println("Digite o valor do produto: ");
        produto.setValor(Double.parseDouble(input.nextLine()));
        produto.setContinuado(true);
        System.out.println("Produto cadastrado com sucesso");
        listaDeProdutos.add(produto);
        System.out.println();
    }

    public void listarProdutos(){
        //Varrer a sua lista de produtos, exibindo todas as informações
        //de cada produto
        for(Produto p : listaDeProdutos){
            System.out.println();
            p.imprimirProduto();
            System.out.println("----------------------------");
        }
    }

    public void exibirSaldoProduto(){
        Scanner input = new Scanner(System.in);
        System.out.println("Digite o código do Produto: ");
        int idProcurado = Integer.parseInt(input.nextLine());
        for(Produto p: listaDeProdutos){
            if (idProcurado == p.getIdProduto()) {
                System.out.println("Quantidade atual em estoque: ");
                System.out.println(p.getQuantidadeEmEstoque());
                return;
            }
        }
    }

    public void entrada(){
        Scanner input = new Scanner(System.in);
        System.out.println("Digite o código do Produto: ");
        int idProcurado = Integer.parseInt(input.nextLine());
        for(Produto p: listaDeProdutos){
            if(idProcurado == p.getIdProduto()){
                System.out.println("Digite a quantidade de entrada: ");
                int qtd = Integer.parseInt(input.nextLine());
                if(p.entradaDeProduto(qtd)){
                    System.out.println("Entrada efetuada com sucesso");
                }else{
                    System.out.println("Quantidade inválida");
                }
            }
        }
    }

    public void saida(){
        Scanner input = new Scanner(System.in);
        System.out.println("Digite o código do Produto: ");
        int idProcurado = Integer.parseInt(input.nextLine());
        for(Produto p: listaDeProdutos){
            if(idProcurado == p.getIdProduto()){
                System.out.println("Digite a quantidade de saída: ");
                int qtd = Integer.parseInt(input.nextLine());
                if(p.saidaDeProduto(qtd)){
                    System.out.println("Baixa efetuada com sucesso");
                }else{
                    System.out.println("Quantidade indisponível");
                }
            }
        }
    }

    public double totalPatrimonio(){
        double soma = 0;
        for (Produto p : listaDeProdutos){
            double total = p.getQuantidadeEmEstoque() * p.getValor();
            soma += total;
        }

        return soma;
    }



}
