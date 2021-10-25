#include <stdio.h>
#include <stdlib.h>

/* Dois alienígenas crescem indefinidamente. Zerg tem 1,50m e
cresce 2cm por ano enquanto Splim tem 1,30m e cresce 3cm
por ano. Faça um programa que calcule quantos anos serão
necessários para que Splim seja maior que Zerg.*/

int main()
{
int ano;
float splim, zerg, tamanhoSplim, tamanhoZerg;

ano = 0;
//Tamanho atual de cada um
splim = 1.30;
zerg = 1.50;
//Tamanho que cada um cresce por ano
tamanhoZerg = 2.0;
tamanhoSplim = 3.0;

    while (splim <= zerg){
    ano++;
    printf("Ano %d: Splim tem %.2fm e Zerg tem %.2f m \n", ano, splim, zerg);
    splim = splim + tamanhoSplim;
    printf("Apos a passada do %d ano, Splim tera um tamanho de: %.2fm\n", ano, splim);
    zerg = zerg + tamanhoZerg;
      printf("Apos a passada do %d ano, Zerg tera um tamanho de: %.2fm\n\n", ano, zerg);
    }
    printf("\nEh necessario %d anos para que Splim tenha o mesmo tamanho ou maior que Zerg.\n", ano);
    return 0;
}
