#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("Numeros pares entre 1 e 10\n");
    for(i = 1; i <= 10; i++){
        if(i %2 == 0){
            printf("Numero par: %d \n",  i);
        }
    }
    return 0;
}
