#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia_nasc, mes_nasc, ano_nasc, dia_atual, mes_atual, ano_atual, idade;
        printf("Por gentileza, nos informe seu dia de nascimento: \n");
    scanf("%d", &dia_nasc);
        printf("Por gentileza, nos informe o mes em que voce nasceu: \n");
    scanf("%d", &mes_nasc);
        printf("Por gentileza, nos informe o ano em que voce nasceu: \n");
    scanf("%d", &ano_nasc);

    printf("\n Seu nascimento foi em %d/%d/%d.", dia_nasc, mes_nasc, ano_nasc);

        printf("\n Por gentileza, nos informe agora o dia atual: \n");
    scanf("%d", &dia_atual);
        printf("Por gentileza, nos informe agora o mes atual: \n");
    scanf("%d", &mes_atual);
        printf("Por gentileza, nos informe agora o ano atual: \n");
    scanf("%d", &ano_atual);

    printf("\n Hoje eh %d/%d/%d.", dia_atual, mes_atual, ano_atual);

    idade = ano_atual - ano_nasc;

    printf("\n Sua idade eh de aproximadamente: %d anos.", idade);

    return 0;
}
