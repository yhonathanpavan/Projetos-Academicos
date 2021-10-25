#include <stdio.h>
#include <stdlib.h>
#define T 10

int main()
{
int vetorA[T];
int vetorB[T];
int i;

for(i = 1; i <= T; i++){
    printf("Insira um valor: \n");
    scanf("%d", &vetorA[i]);

        if(i % 2 == 0){
            vetorB[i] = i * 5;
        }else{
            vetorB[i] = i + 5;
        }
}
printf("\nVetor A: ");

for(i = T; i >= 1; i--){
    printf("%3d |", vetorA[i]);
}
printf("\nVetor B: ");
for(i = T; i >= 1; i--){
    printf("%3d |", vetorB[i]);
}
printf("\n\n");
    return 0;
}
