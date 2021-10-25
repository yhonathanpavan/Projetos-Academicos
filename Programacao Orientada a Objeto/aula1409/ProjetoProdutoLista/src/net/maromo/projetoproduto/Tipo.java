package net.maromo.projetoproduto;

public class Tipo {
    private int codigoTipo;
    private String descricao;
    private boolean perecivel;


    public int getCodigoTipo() {
        return codigoTipo;
    }

    public void setCodigoTipo(int codigoTipo) {
        this.codigoTipo = codigoTipo;
    }

    public String getDescricao() {
        return descricao;
    }

    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }

    public boolean isPerecivel() {
        return perecivel;
    }

    public void setPerecivel(boolean perecivel) {
        this.perecivel = perecivel;
    }

    public void imprimir(){
        System.out.println("TIpo: " + descricao);
        if(perecivel){
            System.out.println("Produto perecível");
        }else{
            System.out.println("Não perecível");
        }
    }
}
