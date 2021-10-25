#include <stdio.h>
#include <stdlib.h>

int main()
{
int num, i, novoNum;

    printf("Insira um numero inteiro impar e positivo: \n");
    scanf("%d", &num);
do{
        do{
            printf("%d ", i);
            i++;
        }while(i <= num);

    printf("\n");
    i = (num - num) + 1;

}while(i <= num);


    return 0;
}
