#include <stdio.h>
#include <stdlib.h>
#define T 4 // na vdd eh 5. Conta de 0 até 4

int main()
{
int matriz[T][T];
int i, j;

    for(i = 0; i <= 4; i++){
        for(j = 0; j <= 4; j++){
            if(i == j){
                matriz[i][j] = 1;
            }else{matriz[i][j] = 0;}
        }
    }

    for(i = 0; i <= 4; i++){
        for(j = 0; j <= 4; j++){
          printf("%d | ", matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}
