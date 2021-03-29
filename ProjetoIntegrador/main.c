#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

//Variáveis para as opções (global)
int opcao, opcaoS, opcaoL, opcaoM, opcaoA, opcaoO, limpa;
//Função menu inicial
void menu()
{
    system("cls");
    printf("~~~~~~~~~~~~~~~ \n");
    printf("| VIA CALCULO | \n");
    printf("~~~~~~~~~~~~~~~\n \n");

    printf("~~~ MENU ~~~ \n");
    printf("-------------------------------------\n");
    printf("1. Somatorio                        |\n");
    printf("2. Logica Proposicional             |\n");
    printf("3. Matrizes                         |\n");
    printf("4. Analise Combinatoria             |\n");
    printf("5. Operacoes e Media Aritmetica     |\n");
    printf("6. Sair                             |\n");
    printf("-------------------------------------\n");

    scanf("%d", &opcao);
}

//Função menu Somatorio
void menuSomatorio()
{
    system("cls");
    printf(" SOMATORIO \n");
    printf("--------------------------------------------------------\n");
    printf("1. Somatorio de j = m ate n para a regra  j.           |\n");
    printf("2. Somatorio de j = m ate n para a regra (-j)^(j + 1). |\n");
    printf("3. Voltar ao Menu.                                     |\n");
    printf("--------------------------------------------------------\n");
    scanf("%d", &opcaoS);

}

//Função menu lógica proposicional
void menuLogicaProposicional()
{
    system("cls");
    printf("\nLOGICA PROPOSICIONAL \n");
    printf("---------------------------------\n");
    printf("1. Negacao de p: ~p             |\n");
    printf("2. Negacao de q: ~q             |\n");
    printf("3. Conjucao: p ^ q              |\n");
    printf("4. Disjuncao: p v q             |\n");
    printf("5. Disjuncao Exclusiva: p V/ q  |\n");
    printf("6. Condicional: p -> q          |\n");
    printf("7. Bicondicional: p <-> q       |\n");
    printf("8. Voltar ao Menu.              |\n");
    printf("---------------------------------\n");
    scanf("%d", &opcaoL);

}

//Função menu Matriz
void menuMatriz()
{
     system("cls");
    printf("\nMATRIZES \n");
    printf("--------------------\n");
    printf("1. Determinante    |\n");
    printf("2. Soma            |\n");
    printf("3. Subtracao       |\n");
    printf("4. Produto         |\n");
    printf("5. Voltar ao Menu. |\n");
    printf("--------------------\n");
    scanf("%d", &opcaoM);
}

//Função menu Análise Combinatória
void menuAnaliseCombinatoria()
{
     system("cls");
    printf("\nANALISE COMBINATORIA \n");
    printf("-----------------------\n");
    printf("1. Permutacao Simples |\n");
    printf("2. Arranjo Simples    |\n");
    printf("3. Combinacao Simples |\n");
    printf("4. Voltar ao Menu.    |\n");
    printf("-----------------------\n");
    scanf("%d", &opcaoA);
}

//Função Limpar
void limpar(){
 printf("\n\nAperte 1 para limpar \n");
     scanf("%d", &limpa);
    if (limpa == 1){
        system("cls");
    }else{
        while(limpa != 1){
          printf("Digite 1 para prosseguir! \n");
          scanf("%d", &limpa);
            if (limpa == 1){
            system("cls");
            }
        }
    }
}

void menuCalculoBasico()
{
     system("cls");
    printf("\nOPERACAO +, -, *, / E MEDIA ARITMETICA \n");
    printf("------------------------\n");
    printf("1. Soma                |\n");
    printf("2. Subtracao           |\n");
    printf("3. Divisao             |\n");
    printf("4. Multiplicacao       |\n");
    printf("5. Media Aritmetica    |\n");
    printf("6. Voltar ao Menu      |\n");
    printf("------------------------\n");
    scanf("%d", &opcaoO);
}

main()
{

//Variavel para Somatório
int m, n, j, j2, soma;
//Variavel para Matrizes
int a11, b11, a12, b12, a21, b21, a22, b22, c11, c12, c21, c22;
//Determinante
int Ca, Cb;
//Variavel para Análise Combinatória
//Permutacao
int nP, resultado;
//Combinaão Simples
int nC, pC, fatorialnC, fatorialpC, fatorialnpC, fatorialAuxC;
float resultadoC;
//Combinação Simples
int nA, pA, fatorialnA, fatorialpA, fatorialnpA, fatorialAuxA;
float resultadoA;
//Operações e Media aritmetica
int n1O, n2O, resultadoOperacao;
float nDO1, nDO2, resultadoDivisao;
int qtdMedia, auxMedia, auxSoma, nMedia;
float resultadoMedia;


//*********************************************************MENU*****************************************************
    menu(); //chama a função menu

    while(opcao != 6){
    switch (opcao) //switch para criação dos Menus da calculadora.
{

    //*********************************************************SOMATORIO*****************************************************
    case 1 : //Opção 1 - Somatoria

    menuSomatorio(); //chama a função menu da Somatória

    if (opcaoS == 1){
        printf("Digite o valor de J \n");
        scanf("%d", &j);
        printf("Digite o valor de N \n");
        scanf("%d", &n);
        printf("\n");
        m = j;
        soma = 0;

        while(m <= n){
            printf("%d \n", m);
            soma = soma + m;
            m++;

        }
        printf("\n Somatorio de m ate n para a regra de j: %d", soma);

    //******limpar*******

    limpar(); //chama a função limpa
    menuSomatorio(); //chama a função

    } else if (opcaoS == 2){
       printf("Digite o valor de J \n");
        scanf("%d", &j);
        printf("Digite o valor de N \n");
        scanf("%d", &n);
        printf("\n");
        j2 = pow(-j, j + 1);
        m = j2;
        soma = 0;

        while(m <= n){
            printf("%d \n", m);
            soma = soma + m;
            m++;

        }
        printf("\n Somatorio de j = m ate n para a regra (-j)^(j + 1): %d", soma);

   //******limpar*******

     limpar();
    menuSomatorio(); //chama a função

    } else if (opcaoS == 3){
        menu();
    }else{
        menuSomatorio();
    }

    break;

    //*********************************************************LÓGICA PROPOSICIONAL*****************************************************
    case 2 : //Opção 2 - Lógica Proposicional

    menuLogicaProposicional();

    if (opcaoL == 1){

    printf("\nNegacao de p:\n");
    printf("-------------\n");
    printf("|  p  | ~p  |\n");
    printf("-------------\n");
    printf("|  1  |  0  |\n");
    printf("|  0  |  1  |\n");
    printf("------------\n");

    //******limpar*******

    limpar();
    menuLogicaProposicional(); //chama a função


    }else if (opcaoL == 2){
    printf("\nNegacao de q:\n");
    printf("-------------\n");
    printf("|  q  | ~q  |\n");
    printf("-------------\n");
    printf("|  1  |  0  |\n");
    printf("|  0  |  1  |\n");
    printf("------------\n");

    //******limpar*******

    limpar();
    menuLogicaProposicional(); //chama a função


    }else if (opcaoL == 3){
    printf("\nConjuncao:\n");
    printf("---------------------\n");
    printf("|  p  |  q  | p ^ q |\n");
    printf("---------------------\n");
    printf("|  1  |  1  |   1   |\n");
    printf("|  1  |  0  |   0   |\n");
    printf("|  0  |  1  |   0   |\n");
    printf("|  0  |  0  |   0   |\n");
    printf("---------------------\n");

    //******limpar*******

    limpar();
    menuLogicaProposicional(); //chama a função


    }else if (opcaoL == 4){
    printf("\nDisjuncao:\n");
    printf("---------------------\n");
    printf("|  p  |  q  | p v q |\n");
    printf("---------------------\n");
    printf("|  1  |  1  |   1   |\n");
    printf("|  1  |  0  |   1   |\n");
    printf("|  0  |  1  |   1   |\n");
    printf("|  0  |  0  |   0   |\n");
    printf("---------------------\n");

    //******limpar*******

    limpar();
    menuLogicaProposicional(); //chama a função

    }else if (opcaoL == 5){
    printf("\nDisjuncao Exclusiva:\n");
    printf("---------------------\n");
    printf("|  p  |  q  | p V/q |\n");
    printf("---------------------\n");
    printf("|  1  |  1  |   1   |\n");
    printf("|  1  |  0  |   0   |\n");
    printf("|  0  |  1  |   0   |\n");
    printf("|  0  |  0  |   1   |\n");
    printf("---------------------\n");

    //******limpar*******

    limpar();
    menuLogicaProposicional(); //chama a função

    }else if (opcaoL == 6){
    printf("\nCondicional:\n");
    printf("----------------------\n");
    printf("|  p  |  q  | p -> q |\n");
    printf("----------------------\n");
    printf("|  1  |  1  |   1    |\n");
    printf("|  1  |  0  |   0    |\n");
    printf("|  0  |  1  |   1    |\n");
    printf("|  0  |  0  |   1    |\n");
    printf("----------------------\n");

    //******limpar*******

    limpar();
    menuLogicaProposicional(); //chama a função

    }else if (opcaoL == 7){
    printf("\nBicondicional: \n");
    printf("-----------------------\n");
    printf("|  p  |  q  | p <-> q |\n");
    printf("-----------------------\n");
    printf("|  1  |  1  |    1    |\n");
    printf("|  1  |  0  |    0    |\n");
    printf("|  0  |  1  |    0    |\n");
    printf("|  0  |  0  |    1    |\n");
    printf("-----------------------\n");

    //******limpar*******

    limpar();
    menuLogicaProposicional(); //chama a função

    }else if (opcaoL == 8){
    menu();
    }
    break;

    //*********************************************************MATRIZES*****************************************************
    case 3 : //Opção 3 - Matrizes

    menuMatriz();


    if (opcaoM == 1){
        printf("Determinante:\n");
        printf("Insira um valor para a11: \n");
        scanf("%d", &a11);
        printf("Insira um valor para a12: \n");
        scanf("%d", &a12);
        printf("Insira um valor para a21: \n");
        scanf("%d", &a21);
        printf("Insira um valor para a22: \n");
        scanf("%d", &a22);
        printf("Insira um valor para b11: \n");
        scanf("%d", &b11);
        printf("Insira um valor para b12: \n");
        scanf("%d", &b12);
        printf("Insira um valor para b21: \n");
        scanf("%d", &b21);
        printf("Insira um valor para b22: \n");
        scanf("%d", &b22);

        system("cls");

        printf("As matrizes ficaram da seguinte maneira: \n\n");

        printf("A = / %d   %d \\ \n", a11, a12);
        printf("    \\ %d   %d / \n \n", a21, a22);

        printf("B = / %d   %d \\ \n", b11, b12);
        printf("    \\ %d   %d / \n\n", b21, b22);

        // FORMULA DETERMINANTE DE UMA MATRIZ:
        Ca = (a11*a22) - (a12*a21);
        Cb = (b11*b22) - (b12*b21);
        printf ("A Determinante 2x2 de A eh: %d\n", Ca);
        printf ("E a Determinante 2x2 de B eh: %d\n", Cb);

        //******limpar*******

    limpar();
    menuMatriz(); //chama a função


    } else if (opcaoM == 2){
        printf("Soma:\n");
        printf("Insira um valor para a11: \n");
        scanf("%d", &a11);
        printf("Insira um valor para a12: \n");
        scanf("%d", &a12);
        printf("Insira um valor para a21: \n");
        scanf("%d", &a21);
        printf("Insira um valor para a22: \n");
        scanf("%d", &a22);
        printf("Insira um valor para b11: \n");
        scanf("%d", &b11);
        printf("Insira um valor para b12: \n");
        scanf("%d", &b12);
        printf("Insira um valor para b21: \n");
        scanf("%d", &b21);
        printf("Insira um valor para b22: \n");
        scanf("%d", &b22);

        system("cls");

        printf("As matrizes ficaram da seguinte maneira: \n \n");

        printf("A = / %d   %d \\ \n", a11, a12);
        printf("    \\ %d   %d / \n \n", a21, a22);

        printf("B = / %d   %d \\ \n", b11, b12);
        printf("    \\ %d   %d / \n\n", b21, b22);

        c11 = a11+b11;
        c12 = a12+b12;
        c21 = a21+b21;
        c22 = a22+b22;

        printf("A soma c11 eh: %d + %d = %d \n", a11, b11, c11);
        printf("A soma c12 eh: %d + %d = %d \n", a12, b12, c12);
        printf("A soma c21 eh: %d + %d = %d \n", a21, b21, c21);
        printf("A soma c22 eh: %d + %d = %d \n", a22, b22, c22);

                //******limpar*******

    limpar();
    menuMatriz(); //chama a função

    } else if (opcaoM == 3){
        printf("Subtracao:\n");
               printf("Insira um valor para a11: \n");
        scanf("%d", &a11);
        printf("Insira um valor para a12: \n");
        scanf("%d", &a12);
        printf("Insira um valor para a21: \n");
        scanf("%d", &a21);
        printf("Insira um valor para a22: \n");
        scanf("%d", &a22);
        printf("Insira um valor para b11: \n");
        scanf("%d", &b11);
        printf("Insira um valor para b12: \n");
        scanf("%d", &b12);
        printf("Insira um valor para b21: \n");
        scanf("%d", &b21);
        printf("Insira um valor para b22: \n");
        scanf("%d", &b22);

        system("cls");

        printf("As matrizes ficaram da seguinte maneira: \n \n");

        printf("A = / %d   %d \\ \n", a11, a12);
        printf("    \\ %d   %d / \n \n", a21, a22);

        printf("B = / %d   %d \\ \n", b11, b12);
        printf("    \\ %d   %d / \n\n", b21, b22);

        c11 = a11-b11;
        c12 = a12-b12;
        c21 = a21-b21;
        c22 = a22-b22;

        printf("A subtracao c11 eh: %d - %d = %d \n", a11, b11, c11);
        printf("A subtracao c12 eh: %d - %d = %d \n", a12, b12, c12);
        printf("A subtracao c21 eh: %d - %d = %d \n", a21, b21, c21);
        printf("A subtracao c22 eh: %d - %d = %d \n", a22, b22, c22);

                //******limpar*******

    limpar();
    menuMatriz(); //chama a função

    } else if (opcaoM == 4){
        printf("Produto:\n");
        printf("Insira um valor para a11: \n");
        scanf("%d", &a11);
        printf("Insira um valor para a12: \n");
        scanf("%d", &a12);
        printf("Insira um valor para a21: \n");
        scanf("%d", &a21);
        printf("Insira um valor para a22: \n");
        scanf("%d", &a22);
        printf("Insira um valor para b11: \n");
        scanf("%d", &b11);
        printf("Insira um valor para b12: \n");
        scanf("%d", &b12);
        printf("Insira um valor para b21: \n");
        scanf("%d", &b21);
        printf("Insira um valor para b22: \n");
        scanf("%d", &b22);

        system("cls");

        c11 = (a11*b11) + (a12*b21);
        c12 = (a11*b12) + (a12*b22);
        c21 = (a21*b11) + (a22*b21);
        c22 = (a21*b12) + (a22*b22);

        printf("O Produto c11 eh: %d \n", c11);
        printf("O Produto c12 eh: %d \n", c12);
        printf("O Produto c21 eh: %d \n", c21);
        printf("O Produto c22 eh: %d \n", c22);

    //******limpar*******

    limpar();
    menuMatriz(); //chama a função

    } else if (opcaoM == 5){
        menu();
    }


    break;

    //*********************************************************ANÁLISE COMBINATÓRIA*****************************************************
    case 4 : //Opção 4 - Análise Combinatória.

   menuAnaliseCombinatoria();

    if (opcaoA == 1){
        printf("Digite um valor para N que pertenca ao conjunto dos números inteiros não negativos:\n");
        scanf("%d", &nP);

        for(resultado = 1; nP >= 1; nP = nP - 1){
            resultado = resultado * nP;
            printf("%d", nP);
        }
        printf("\n%f de chances possiveis", resultado);


     //******limpar*******

    limpar();
    menuAnaliseCombinatoria(); //chama a função

}
    if (opcaoA == 2){
        printf("Digite o numero de elementos(n) do conjunto que pertenca aos Inteiros Positivos:\n");
        scanf("%d", &nA);
        printf("Digite o numero de elementos(p) a serem considerados em cada agrupamento que pertenca aos Inteiros Positivos\n");
        scanf("%d", &pA);

        fatorialAuxA = nA - pA;

//Fatorial de n
        for(fatorialnA = 1; nA >= 1; nA = nA - 1){
            fatorialnA = fatorialnA * nA;
        }

//Fatorial de p
        for(fatorialpA = 1; pA >= 1; pA = pA - 1){
            fatorialpA = fatorialpA * pA;
        }

//Fatorial de n - p
        for(fatorialnpA = 1; fatorialAuxA >= 1; fatorialAuxA = fatorialAuxA - 1){
            fatorialnpA = fatorialnpA * fatorialAuxA;
        }

        //Conta da fórmula de Arranjo Simples
        resultadoA = fatorialnA / fatorialnpA;

        printf("\nA Combinacao Simples de elementos do conjunto \ncom os elementos a serem considerados em cada agrupamento inserido eh: %2.f", resultadoA);
        printf("\n");

    //******limpar*******

    limpar();
    menuAnaliseCombinatoria(); //chama a função

    }



      if (opcaoA == 3){
        printf("Digite o numero de elementos(n) do conjunto que pertenca aos Inteiros Positivos:\n");
        scanf("%d", &nC);
        printf("Digite o numero de elementos(p) a serem considerados em cada agrupamento que pertenca aos Inteiros Positivos\n");
        scanf("%d", &pC);

        fatorialAuxC = nC - pC;

//Fatorial de n
        for(fatorialnC = 1; nC >= 1; nC = nC - 1){
            fatorialnC = fatorialnC * nC;
        }

//Fatorial de p
        for(fatorialpC = 1; pC >= 1; pC = pC - 1){
            fatorialpC = fatorialpC * pC;
        }

//Fatorial de n - p

        for(fatorialnpC = 1; fatorialAuxC >= 1; fatorialAuxC = fatorialAuxC - 1){
            fatorialnpC = fatorialnpC * fatorialAuxC;
        }

        //Conta da fórmula de Combinação Simples
        resultadoC = fatorialnC / (fatorialpC * fatorialnpC);



        printf("\nA Combinacao Simples de elementos do conjunto \ncom os elementos a serem considerados em cada agrupamento inserido eh: %2.f", resultadoC);
        printf("\n");

         //******limpar*******

    limpar();
    menuAnaliseCombinatoria(); //chama a função

    }

    if (opcaoA == 4){
            menu();
    }

    break;


//*********************************************************CALCULO BASICO E MEDIA ARITMETICA*****************************************************
    case 5 : //Calculo basico
    menuCalculoBasico();

    if (opcaoO == 1){

    printf("*****SOMA***** \n");
    printf("Digite um numero: \n");
    scanf("%d", &n1O);
    printf("Digite mais um numero: \n");
    scanf("%d", &n2O);
    resultadoOperacao =  n1O + n2O;
    printf("%d + %d = %d \n", n1O, n2O, resultadoOperacao);


    limpar();
    menuCalculoBasico();

}
//************************************SUBTRAÇÃO****************************************
if (opcaoO == 2){
    printf("*****SUBTRACAO***** \n");
    printf("Digite um numero: \n");
    scanf("%d", &n1O);
    printf("Digite mais um numero: \n");
    scanf("%d", &n2O);
    resultadoOperacao =  n1O - n2O;
    printf("%d - %d = %d \n", n1O, n2O, resultadoOperacao);

    limpar();
    menuCalculoBasico();
}
//************************************DIVISÃO****************************************
if (opcaoO == 3){
    printf("*****DIVISAO***** \n");
    printf("Digite um numero: \n");
    scanf("%f", &nDO1);
    printf("Digite mais um numero: \n");
    scanf("%f", &nDO2);
    resultadoDivisao =  nDO1 / nDO2;
    printf("%2.f / %2.f = %f \n", nDO1, nDO2, resultadoDivisao);


    limpar();
    menuCalculoBasico();
}
//************************************MULTIPLICAÇÃO****************************************
if (opcaoO == 4){
    printf("*****MULTIPLICACAO***** \n");
    printf("Digite um numero: \n");
    scanf("%d", &n1O);
    printf("Digite mais um numero: \n");
    scanf("%d", &n2O);
    resultadoOperacao =  n1O * n2O;
    printf("%d x %d = %d \n", n1O, n2O, resultadoOperacao);


    limpar();
    menuCalculoBasico();
}

if (opcaoO == 5){
    printf("*****MEDIA ARITMETICA***** \n");
    printf("Digite a quantidade de numeros que deseja tirar media: \n");
    scanf("%d", &qtdMedia);
    printf("Agora digite os numeros que deseja extrair a media: \n");
    resultado = 0;
    auxMedia = 1;
    auxSoma = 0;
    while(auxMedia <= qtdMedia){
        printf("Digite um numero: \n");
        scanf("%d", &nMedia);
        auxSoma = auxSoma + nMedia;
        auxMedia++;
    }

    resultadoMedia = auxSoma / qtdMedia;

    printf("A Media Aritmetica dos valores inseridos eh: %2.f \n", resultadoMedia);
    limpar();
    menuCalculoBasico();
}

if (opcaoO == 6){
    menu();
}

    break;


    //*********************************************************OPÇÃO DIFERENTE DAS APRESENTADAS*****************************************************
    default: //Opção fora as válidas - Mensagem de erro.
    menu();
    break;

} //Fim do Switch
    } //Fim do While
        //*********************************************************SAIR*****************************************************
    printf("\nFim do programa. Aperte qualquer tecla para fechar.\n");
    exit(-1);
} //Fim do Main
