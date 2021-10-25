#include <stdio.h>
#include <stdlib.h>
#define X 15 //15 fracoes positivas e 15 negativas
#define T 29 //Numero total de termos. 30 contando com o "0".

int main()
{
float soma = (1 / 1); //Esse valor da soma começa com  1 / 1 ja representando o primeiro termo. Fazendo parte da soma de positivos.
float somaNeg = 0; //Somar frações negativas.
float resultado = 0; //Resultado Final

int numerador[T];
numerador[0] = 1; //A primeira casa do vetor tem valor 1 (Para não misturar na fórmula dentro do for)
int numeradorNeg[X];

int denominador[T];
denominador[0] = 1; // ---- // ---- msm coisa
int denominadorNeg[X];

int i, j = 1, y = 1;



//---------------------------------------------- Numerador positivo e negativo

for(i = 1; i <= 29; i++){
  numerador[i] = numerador[i-1] + 2;
            //for pra separar numerador de denominador
}


    for(i = 1; i <= 29; i+= 2){
        numeradorNeg[j] = numerador[i];
        j++;
    }



 //----------------------------------------------Denominador positivo e negativo


for(i = 1; i <= 29; i++){
  denominador[i] = denominador[i-1] + 1;
        //for pra separar numerador de denominador
}

 for(i = 1; i <= 29; i+= 2){
        denominadorNeg[y] = denominador[i];
        y++;
    }


//---------------------------------------------------- Somar Numeradores e denominadores negativos

j = 1; y = 1;

        for(i = 1; i <= 15; i++){
            somaNeg = somaNeg + ((float)numeradorNeg[j] / (float)denominadorNeg[y]);
            j++;
            y++;
        }

//---------------------------------------------------- Somar Numeradores e denominadores (todos)

for(i = 1; i <= 29; i++){
       soma = soma + ((float)numerador[i] / (float)denominador[i]);  //Nessa conta, a variavel soma ja tem o primeiro termo positivo (1 / 1), por isso dei a carga inicial na declaração de variáveis.

}

//--------------------------------------------------- Conta final

printf("\n*** A soma dos 30 primeiros termos de: ***\n");
printf("\n");
printf(" + 1    -     3     +     5     -         -  59  .        \n");
printf("-------    -------     -------      ...    -------      eh:\n");
printf("   1          2           3                  30           \n");

printf("\n\n*Nota: Numeradores aumentam de dois em dois, havendo a alternancia de sinais. (+ ou -)\n");
printf("       Denominadores aumentam de um em um, acompanhando a regra de sinais.\n");



        resultado = (soma - somaNeg) - somaNeg; //A primeira subtração é feita para isolar os numeros positivos e a segunda subtração eh seguindo a lógica da fórmula.
         printf("\n--------\n");
         printf("\n\nO resultado da soma dos termos eh de aproximadamente: %f \n\n", resultado);
            printf("\n--------\n\n\n\n");
    return 0;
}
