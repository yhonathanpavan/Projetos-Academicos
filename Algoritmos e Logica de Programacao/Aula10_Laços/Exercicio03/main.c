#include <stdio.h>
#include <stdlib.h>

main()
{
int n2, n3, n4, n5, tabuada, resultado2, resultado3, resultado4, resultado5;
    printf("Tabuada do 2 ao 5: \n");

    n2 = 2;
    n3 = 3;
    n4 = 4;
    n5 = 5;
    tabuada = 0;

    while(tabuada <= 10){
       resultado2 = n2 * tabuada;
       printf("%d x %d = %d \n", n2, tabuada, resultado2);
       tabuada++;
    }

    tabuada = 0;
    printf("\n");

      while(tabuada <= 10){
       resultado3 = n3 * tabuada;
       printf("%d x %d = %d \n", n3, tabuada, resultado3);
       tabuada++;
    }


    tabuada = 0;
    printf("\n");

      while(tabuada <= 10){
       resultado4 = n4 * tabuada;
       printf("%d x %d = %d \n", n4, tabuada, resultado4);
       tabuada++;
    }


    tabuada = 0;
    printf("\n");

      while(tabuada <= 10){
       resultado5 = n5 * tabuada;
       printf("%d x %d = %d \n", n5, tabuada, resultado5);
       tabuada++;
    }

}
