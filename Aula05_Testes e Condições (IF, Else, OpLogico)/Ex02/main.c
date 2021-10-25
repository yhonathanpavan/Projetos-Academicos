#include <stdio.h>

main()
{
int mes;
        printf("Digite um numero para selecionar um mes: \n");
        printf("1 - Janeiro\n");
        printf("2 - Fevereiro\n");
        printf("3 - Marco\n");
        printf("4 - Abril\n");
        printf("5 - Maio\n");
        printf("6 - Junho\n");
        printf("7 - Julho\n");
        printf("8 - Agosto\n");
        printf("9 - Setembro\n");
        printf("10 - Outubro\n");
        printf("11 - Novembro\n");
        printf("12 - Dezembro\n");

    scanf("%d", &mes);

    if(mes == 1)
        printf("Janeiro em 31 Dias \n");
    else
     if(mes == 2)
        printf("Fevereiro 28 Dias \n");
    else
     if(mes == 3)
        printf("Marco tem 31 Dias \n");
    else
     if(mes == 4)
        printf("Maio tem 30 Dias \n");
    else
     if(mes == 5)
        printf("Junho tem 30 Dias \n");
    else
     if(mes == 6)
        printf("Julho tem 31 Dias \n");
    else
     if(mes == 7)
        printf("31 Dias \n");
    else
     if(mes == 8)
        printf("30 Dias \n");
    else
     if(mes == 9)
        printf("31 Dias \n");
    else
     if(mes == 10)
        printf("30 Dias \n");
    else
     if(mes == 11)
        printf("30 Dias \n");
    else
     if(mes == 12)
        printf("31 Dias \n");
    else
    printf("Opcao invalida!");
}
