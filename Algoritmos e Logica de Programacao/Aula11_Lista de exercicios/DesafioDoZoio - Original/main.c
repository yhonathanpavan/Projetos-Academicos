#include <stdio.h>
#include <stdlib.h>
#include<time.h> 

int main()
{
int guardaran, tentativa, guardaChute, n;
int mini, maxi;

srand(time(NULL));
guardaran = rand()% 1000 + 1;


mini = 0;
maxi = 1000;
tentativa = 1;

printf("**************************\n");
printf("| GAME DE ADIVINHACAO !!!|\n");
printf("**************************\n");
printf("|REGRAS: Adivinhar um nu-|\n");
printf("|mero entre 0 a 1000.    |\n");
printf("**************************\n");
  printf("Tentativa: %d. Entre um numero maior que %d e menor que %d: \n", tentativa, mini, maxi);
  printf("Digite um numero: ");
  scanf("%d", &n);


  while (n != guardaran){
        while (n < 0 || n > 1000){
        printf("\nValor invalido! Digite um numero entre 0 e 1000! \n");
        printf("Digite um numero: ");
        scanf("%d", &n);
        }

  if (n < guardaran){
    tentativa++;
    mini = n;
    printf("Valor inserido eh baixo. \n\n");
    printf("Tentativa: %d. Entre um numero maior que %d e menor que %d: \n", tentativa, mini, maxi);
    printf("Digite um numero: ");
    scanf("%d", &n);

  }
  else if (n > guardaran){
        while (n < 0 || n > 1000){
        printf("\nValor invalido! Digite um numero entre 0 e 1000! \n");
        printf("Digite um numero: ");
        scanf("%d", &n);
        }
    tentativa++;
    maxi = n;
    printf("Valor inserido eh alto. \n\n");
    printf("Tentativa: %d. Entre um numero maior que %d e menor que %d: \n", tentativa, mini, maxi);
    printf("Digite um numero: ");
    scanf("%d", &n);
  }

}

    printf("\nParabens!\nVoce acertou o numero %d em %d tentativas.", guardaran, tentativa);

    if (tentativa >= 1 && tentativa <= 5){
        printf("\nVoce, como adivinhador, eh excelente!\n");
    }
    else if (tentativa == 6 || tentativa == 7){
        printf("\nVoce, como adivinhador, eh bom!\n");
    }
    else if (tentativa >= 8 && tentativa <= 12){
        printf("\nVoce, como adivinhador, eh normal!\n");
    }
    else if (tentativa == 13 || tentativa == 14){
        printf("\nVoce, como adivinhador, eh ruim!\n");
    }
    else if (tentativa >= 15){
        printf("\nVoce, como adivinhador, eh tragico!\n");
    }

    return 0;

}
