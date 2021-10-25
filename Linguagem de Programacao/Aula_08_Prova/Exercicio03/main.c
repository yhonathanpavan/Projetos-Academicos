#include <stdio.h>
#include <stdlib.h>
#define T 29
#define X 15 //15 fracoes positivas e 15 negativas

int main()
{
float soma = (1 / 1);
float somaNegativos = 0;
float resultado = 0;

int numerador[T] = {0};
numerador[0] = 1; //A primeira casa do vetor tem valor 1 (Para não misturar na fórmula dentro do for)
int numeradorNegativo[X];

int denominador[T];
denominador[0] = 1; // ---- // ---- msm coisa
int denominadorNegativo[X];

int i, j = 1, y = 1;



//---------------------------------------------- Numerador positivo e negativo

 //printf("numerador: %d. Posicao i: %d\n", numerador[0], 0);
for(i = 1; i <= 29; i++){
  numerador[i] = numerador[i-1] + 2;
        printf("numerador: %d. Posicao i: %d\n", numerador[i], i);      //for pra separar numerador de denominador
}


    for(i = 1; i <= 29; i+= 2){
        numeradorNegativo[j] = numerador[i];
      printf("\ni: %d  j: %d ", i, j);
        printf("Numerador negativo: %d", numeradorNegativo[j]);
        j++;
        printf("\n\n");
    }



 //----------------------------------------------Denominador positivo e negativo

    //printf("numerador: %d. Posicao i: %d\n", denominador[0], 0);
for(i = 1; i <= 29; i++){
  denominador[i] = denominador[i-1] + 1;
        printf("denominador: %d. Posicao i: %d\n", denominador[i], i);  //for pra separar numerador de denominador
}

 for(i = 1; i <= 29; i+= 2){
        denominadorNegativo[y] = denominador[i];
      printf("\ni: %d  y: %d ", i, y);
        printf("Denominador negativo: %d", denominadorNegativo[y]);
        y++;
        printf("\n\n");
    }


//---------------------------------------------------- Somar Numeradores e denominadores negativos

j = 1; y = 1;

        for(i = 1; i <= 15; i++){
            somaNegativos = somaNegativos + ((float)numeradorNegativo[j] / (float)denominadorNegativo[y]);
          //  printf("%d \n", numeradorNegativo[j]);
           // printf("------\n");
           // printf("%d \n\n", denominadorNegativo[y]);
            j++;
            y++;
        }
        printf("A soma dos numeros negativos eh de: %f", somaNegativos);

//---------------------------------------------------- Somar Numeradores e denominadores Positivos

printf("Soma: %d", (float)soma);
for(i = 1; i <= 29; i++){
       soma = soma + ((float)numerador[i] / (float)denominador[i]);
        //printf("%d \n", numerador[i]);
        //printf("------\n");
       // printf("%d \n\n", denominador[i]);
}

        printf("A soma dos numeros eh de: %f", soma);


        resultado = (soma - somaNegativos) - somaNegativos; //A primeira é respectivamente para isolar os numeros positivos e a segunda subtração eh seguindo a fórmula.
         printf("\n\nResultado final: %f", resultado);

    return 0;
}
