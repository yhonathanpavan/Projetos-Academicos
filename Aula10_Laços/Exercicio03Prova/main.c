#include <stdio.h>
#include <stdlib.h>

int main()
{
int n1, n2, n3, soma, opcao;
float media;

printf("MENU\n");
printf("--------------------------------------\n");
printf("1 - Somar tres numeros               |\n");
printf("2 - Media de tres numeros            |\n");
printf("3 - Quantos sao pares de tres numeros|\n");
printf("--------------------------------------\n");
printf("Escolha uma opcao: ");
scanf("%d", &opcao);

switch (opcao){
//Soma:
case 1:
    system("cls");
    printf("Somar 3 numeros: \n\n");
    printf("Insira um numero: \n");
    scanf("%d", &n1);
    printf("Insira mais um numero: \n");
    scanf("%d", &n2);
    printf("Insira mais um numero: \n");
    scanf("%d", &n3);
    soma = n1 + n2 + n3;
    printf("\nA soma dos numeros %d, %d e %d resulta em: %d.\n", n1, n2, n3, soma);
break;

//Media:
case 2:
    system("cls");
    printf("Media de 3 numeros: \n\n");
    printf("Insira um numero: \n");
    scanf("%d", &n1);
    printf("Insira mais um numero: \n");
    scanf("%d", &n2);
    printf("Insira mais um numero: \n");
    scanf("%d", &n3);
    media = (n1 + n2 + n3) / 3;
    printf("\nA media dos numeros %d, %d e %d resulta em: %2.f.\n", n1, n2, n3, media);
break;

//Quantos são pares:
case 3:
    system("cls");
    printf("Media de 3 numeros: \n\n");
    printf("Insira um numero: \n");
    scanf("%d", &n1);
    printf("Insira mais um numero: \n");
    scanf("%d", &n2);
    printf("Insira mais um numero: \n");
    scanf("%d", &n3);

    printf("\n");
    //n1
    if(n1 % 2 == 0){
        printf("%d eh par.\n", n1);
    }else{
        printf("%d eh impar.\n", n1);
    }
    //n2
     if(n2 %2 == 0){
        printf("%d eh par.\n", n2);
    }else{
        printf("%d eh impar.\n", n2);
    }
    //n3
     if(n3 %2 == 0){
        printf("%d eh par.\n", n3);
    }else{
        printf("%d eh impar.\n", n3);
    }

    if(n1 % 2 == 0 && n2 %2 == 0 && n3 % 2 > 0|| n1 % 2 == 0 && n3 %2 == 0 && n2 % 2 > 0 || n3 % 2 == 0 && n2 %2 == 0 && n1 % 2 > 0 ){
        printf("\nApenas dois numeros sao pares!\n");
    }
    else if (n1 % 2 == 0 && n2 %2 == 0 && n3 %2 == 0){
    printf("\nTodos os numeros sao pares!\n");
    }else if (n1 % 2 == 0 || n2 %2 == 0 || n3 %2 == 0){
    printf("\nApenas um numero par!\n");

    }
break;

}
    return 0;
}
