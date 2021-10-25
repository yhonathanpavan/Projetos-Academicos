#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
char nome[61];
int idade;
float peso, remedio, mg;
mg = 500;

    printf("Digite somente seu primeiro nome: \n");
    scanf(" %s", nome);
    printf("Insira sua Idade: \n");
   scanf("%d", &idade);
    printf("Insira seu peso: \n");
   scanf("%f", &peso);


    // Considere que o medicamento em questão possui 500mg por ml,
    // e que cada ml corresponde a 20 gotas
    //500mg - 1ML      // gotas = ( 20 *dosagem ) / 500
    //1ML - 20gotas   //  250 = 10 gota
                     //   125 = 5 gota

    system("cls");

   if (idade >= 12 && idade <= 18 && peso <= 60){
    remedio = (875 / mg) * 20;
    printf("------------------------------------------------------\n");
    printf("|                  RECEITA MEDICA                    |\n");
    printf("------------------------------------------------------\n");
    printf("Paciente: %s. \n", nome);
    printf("Categoria: Adolescente. \n");
    printf("Idade: %d anos. \n", idade);
    printf("Peso: %2.fKg. \n", peso);
    printf("Medicamento Recomendado: 875mg. Ou seja, %2.f gotas. \n", remedio);
    printf("------------------------------------------------------");
   }
   else if (idade >= 12 && idade <= 18 && peso >= 60){
    remedio = (1000 / mg) * 20;
    printf("------------------------------------------------------ \n");
    printf("|                  RECEITA MEDICA                    | \n");
    printf("------------------------------------------------------ \n");
    printf("Paciente: %s. \n", nome);
    printf("Categoria: Adolescente. \n");
    printf("Idade: %d anos.  \n", idade);
    printf("Peso: %2.fKg. \n", peso);
    printf("Medicamento Recomendado: 1000mg. Ou seja, %2.f gotas.", remedio);
    printf("------------------------------------------------------\n");
   }
   else if (idade >= 18 && peso <= 60){
    remedio = (875 / mg) * 20;
    printf("------------------------------------------------------ \n");
    printf("|                  RECEITA MEDICA                    | \n");
    printf("------------------------------------------------------ \n");
    printf("Paciente: %s.  \n", nome);
    printf("Categoria: Adulto. \n");
    printf("Idade: %d anos.\n", idade);
    printf("Peso: %2.fKg. \n", peso);
    printf("Medicamento Recomendado: 875mg. Ou seja, %2.f gotas.\n", remedio);
    printf("------------------------------------------------------\n");
   }
   else if (idade >= 18 && peso >= 60){
    remedio = (1000 / mg) * 20;
    printf("------------------------------------------------------ \n");
    printf("|                  RECEITA MEDICA                    | \n");
    printf("------------------------------------------------------ \n");
    printf("Paciente: %s. \n", nome);
    printf("Categoria: Adulto. \n");
    printf("Idade: %d anos. \n", idade);
    printf("Peso: %2.fKg. \n", peso);
    printf("Medicamento Recomendado: 1000mg. Ou seja, %2.f gotas.\n", remedio);
    printf("------------------------------------------------------\n");
   }
   //categoria infantil
    else if (idade <= 18 && idade >= 0 && peso >= 5 && peso <= 9){
    remedio = (125 / mg) * 20;
    printf("------------------------------------------------------\n");
    printf("|                  RECEITA MEDICA \n                 |\n");
    printf("------------------------------------------------------\n");
    printf("Paciente: %s. \n", nome);
    printf("Categoria: Infantil. \n");
    printf("Idade: %d anos. \n", idade);
    printf("Peso: %2.fKg. \n", peso);
    printf("Medicamento Recomendado: 125mg. Ou seja, %2.f gotas.\n", remedio);
    printf("------------------------------------------------------\n");
   }
   else if (idade <= 18 && idade >= 0 && peso >= 9.1 && peso <= 16){
    remedio = (250 / mg) * 20;
    printf("------------------------------------------------------\n");
    printf("|                  RECEITA MEDICA                    |\n");
    printf("------------------------------------------------------\n");
    printf("Paciente: %s. \n", nome);
    printf("Categoria: Infantil. \n");
    printf("Idade: %d anos. \n", idade);
    printf("Peso: %2.fKg. \n", peso);
    printf("Medicamento Recomendado: 250mg. Ou seja, %2.f gotas.\n", remedio);
    printf("------------------------------------------------------\n");
   }
   else if (idade <= 18 && idade >= 0 && peso >= 16.1 && peso <= 24){
    remedio = (375 / mg) * 20;
    printf("------------------------------------------------------");
    printf("|                  RECEITA MEDICA                    |");
    printf("------------------------------------------------------");
    printf("Paciente: %s. \n", nome);
    printf("Categoria: Infantil. \n");
    printf("Idade: %d anos. \n", idade);
    printf("Peso: %2.fKg. \n", peso);
    printf("Medicamento Recomendado: 375mg. Ou seja, %2.f gotas.\n", remedio);
    printf("------------------------------------------------------\n");
   }
   else if (idade <= 18 && idade >= 0 && peso >= 24.1 && peso <= 30){
    remedio = (500 / mg) * 20;
    printf("------------------------------------------------------\n");
    printf("|                  RECEITA MEDICA                    |\n");
    printf("------------------------------------------------------\n");
    printf("Paciente: %s. \n", nome);
    printf("Categoria: Infantil. \n");
    printf("Idade: %d anos. \n", idade);
    printf("Peso: %2.fKg. \n", peso);
    printf("Medicamento Recomendado: 500mg. Ou seja, %2.f gotas.\n", remedio);
    printf("------------------------------------------------------\n");
   }
   else if (idade <= 18 && idade >= 0 && peso >= 30){
    remedio = (750 / mg) * 20;
    printf("------------------------------------------------------\n");
    printf("|                  RECEITA MEDICA                    |\n");
    printf("------------------------------------------------------\n");
    printf("Paciente: %s. \n", nome);
    printf("Categoria: Infantil. \n");
    printf("Idade: %d anos. \n", idade);
    printf("Peso: %2.fKg. \n", peso);
    printf("Medicamento Recomendado: 750mg. Ou seja, %2.f gotas.\n", remedio);
    printf("------------------------------------------------------\n");
   }
   else if(idade < 0 || idade > 120){
   printf("Idade invalida.");
   }

}
