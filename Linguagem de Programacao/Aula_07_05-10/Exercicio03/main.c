#include <stdio.h>
#include <stdlib.h>

int main()
{
int num[10];
int i;

    for(i = 1; i <= 10; i++){
        printf("Insira um numero: \n");
        scanf("%d", &num[i]);
    }

    printf("\nOs valores inseridos, ao contrario, ficam: \n\n");
    for(i = 10; i > 0; i--){
        printf("%d | ", num[i]);
    }

printf("\n");

    return 0;
}
