#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, num;

      for (i = 1; i <= 10; i++){

            printf("Insira um numero: \n");
            scanf("%d", &num);
                if(num % 2 == 0){
                    printf("Eh par !");
                } else {
                    printf("Eh impar !");
                }

            printf("\n");
        }
    return 0;
}
