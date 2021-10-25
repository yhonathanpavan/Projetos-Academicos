#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, npar;
    printf("Os 100 primeiros pares: \n");
    for (i = 0, npar = 0; npar <= 99; i++){
        if ( i %2 == 0){
        npar++;
        printf("%d Numero par: %d \n", npar, i);
        }
    }

    printf("Pronto! \n");

    return 0;
}
