#include <stdio.h>
#include <stdlib.h>
#define T 8

int main(){
int vetorA[T];
int vetorB[T];
int i;

    for(i = 1; i <= T; i++){
        printf("Insira um numero: \n");
        scanf("%d", &vetorA[i]);
        vetorB[i] = vetorA[i] * 3;

    } printf("\n");
    for (i = 1; i <= T; i++){
        printf("%3d |", vetorA[i]);
    } printf("\n");
    for (i = 1; i <= T; i++){
        printf("%3d |", vetorB[i]);
    }

return 0;
}
