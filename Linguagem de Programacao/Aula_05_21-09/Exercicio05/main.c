#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
float n1, n2, n3, media, mediaAproveitamento;

    for (i = 1; i <= 5; i++){
    printf("Insira a primeira nota do aluno %d: \n", i);
    scanf("%f", &n1);
    printf("Insira a segunda nota do aluno: %d\n", i);
    scanf("%f", &n2);
    printf("Insira a terceira nota do aluno: %d\n", i);
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;
    mediaAproveitamento = (n1 + n2*2 + n3*3 + media) / 7;
    printf("\nA Media Aproveitamento do aluno %d eh de %.2f\n\n", i, mediaAproveitamento, media);
    printf("---------------------------------------------------------------\n\n");
    }
    return 0;
}
