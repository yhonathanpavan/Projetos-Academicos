#include <stdio.h>

main()
{
int dia, mes, ano;
     printf("Digite um dia \n");
        scanf("%d", &dia);
        if(dia >=1 && dia <=31)
    printf("ok\n");
        else
    printf("invalido\n");
    printf("Digite um mes \n");
        scanf("%d", &mes);
        if(mes >=1 && mes <=12)
    printf("ok\n");
        else
     printf("invalido\n");
     printf("Digite um ano de ate 4 digitos. Valido somente ate o ano atual. \n");
       scanf("%d", &ano);
       if(ano >=1 && ano <=2020)
    printf("ok\n");
        else
     printf("invalido");

     printf("A data inserida foi %d\/%d\/%d\/ ", dia, mes, ano);





}
