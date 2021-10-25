#include <stdio.h>
#include <stdlib.h>
#define T 5

int main()
{
int matriz[T][T];
int i, j;

    for(i = 0; i < T; i++){
        for(j = 0; j < T; j++){
            if(i == j){
                matriz[i][j] = 1;
            }else{matriz[i][j] = 0;}
            printf(" %d |", matriz[i][j]);

        }
         printf("\n");
    }



    return 0;
}
