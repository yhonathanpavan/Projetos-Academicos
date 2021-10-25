#include <stdio.h>
#include <stdlib.h>

int main()
{
char equipe[15];
float atleta1, atleta2, atleta3, media;

    printf("Entre com o nome da sua equipe \n");
    scanf("%s", &equipe);

    printf("\nOla Equipe %s! Insira os campos a seguir: \n \n", equipe);
    printf("Insira o ponto de cada atleta, comecando pelo primeiro: \n");
    scanf("%f", &atleta1);
    printf("Agora o segundo: \n");
    scanf("%f", &atleta2);
    printf("Agora o terceiro: \n");
    scanf("%f", &atleta3);

    printf("\nMuito bem! \n");

    if(atleta1 < atleta2 && atleta1 < atleta3 && atleta2 < atleta3){
        printf("Em ordem crescente os pontos ficaram: %1.1f, %1.1f, %1.1f.", atleta1, atleta2, atleta3);
    }
    else if(atleta1 < atleta2 && atleta1 < atleta3 && atleta3 < atleta2){
        printf("Em ordem crescente os pontos ficaram: %1.1f, %1.1f, %1.1f.", atleta1, atleta3, atleta2);
    }
    else if(atleta2 < atleta1 && atleta2 < atleta3 && atleta1 < atleta3){
        printf("Em ordem crescente os pontos ficaram: %1.1f, %1.1f, %1.1f.", atleta2, atleta1, atleta3);
    }
    else if (atleta2 < atleta1 && atleta2 < atleta3 && atleta3 < jogador1)
    {

    //else if(atleta2 < atleta1 && atleta2 < atleta3 && atleta3 < atleta1){
    printf("Em ordem crescente os pontos ficaram: %1.1f, %1.1f, %1.1f.", atleta2, atleta3, atleta1);
    }
    else if(atleta3 < atleta2 && atleta3 < atleta1 && atleta2 < atleta1){
        printf("Em ordem crescente os pontos ficaram: %1.1f, %1.1f, %1.1f.", atleta3, atleta2, atleta1);
    }
    else if(atleta3 < atleta2 && atleta3 < atleta1 && atleta1 > atleta3 && atleta1 < atleta3){
        printf("Em ordem crescente os pontos ficaram: %1.1f, %1.1f, %1.1f.", atleta3, atleta1, atleta2);
    }


    media = (atleta1 + atleta2 + atleta3) / 3;

    if(media > 100){
        printf("\n A media de pontos da equipe eh de: %f", media);
    }
    else{
        printf("A aquipe nao atingiu a quantia minima necessaria, portanto, equipe %s foi desclassificada.", equipe);
    }
    return 0;
}
