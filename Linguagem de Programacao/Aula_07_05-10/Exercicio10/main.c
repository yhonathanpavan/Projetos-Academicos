#include <stdio.h>
#include <stdlib.h>
#define L 4
#define C 2

int main()
{
int matrizA[L][C], matrizB[L][C], matrizC[L][C];
int i, j;

    printf("\n ***** Matriz A: *****\n\n");

    for(i = 0; i < L; i++){

            for(j = 0; j < C; j++){
                printf("Insira um valor para a linha %d, coluna %d: \n", i+1, j+1);
                scanf("%d", &matrizA[i][j]);
            }

    }
    printf("\n************************************\n\n");

system("cls");

     printf("\n ***** Matriz B: *****\n\n");

    for(i = 0; i < L; i++){

            for(j = 0; j < C; j++){
                printf("Insira um valor para a linha %d, coluna %d: \n", i+1, j+1);
                scanf("%d", &matrizB[i][j]);
            }

    }
    printf("\n************************************\n\n");

system("cls");

    printf("\n ***** Matriz C: *****\n\n");

    for(i = 0; i < L; i++){
            for(j = 0; j < C; j++){
               matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            printf(" %3d |", matrizC[i][j]);
            }
        printf("\n");
    }
    printf("\n************************************\n\n");


    return 0;
}
