#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 100

int main()
{
char texto[T];
int qtd, vogais = 0;
int i;


    printf("*** Escreva um texto de ate 100 caracteres ***\n\n");
    gets(texto);
    qtd = strlen(texto);

    if(qtd > 100){
        while(qtd > 100){
            printf("\nA quantidade de caracteres excedeu o limite. Tente novamente: \n");
            gets(texto);
            qtd = strlen(texto);
        }
    }

        for(i = 0; i <= qtd; i++){
            if(texto[i] == 'A' || texto[i] == 'a' ||  texto[i] == 'E' ||  texto[i] == 'e' ||  texto[i] == 'I' ||  texto[i] == 'i' ||  texto[i] == 'O' ||  texto[i] == 'o' ||  texto[i] == 'U' ||  texto[i] == 'u'){
                vogais++;
            }
        }
        printf("\n\nO total de vogais inseiras eh: %d\n\n", vogais);
        printf("---------------------------------------------------------------");




    return 0;
}
