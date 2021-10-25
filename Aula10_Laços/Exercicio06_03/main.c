#include <stdio.h>
#include <stdlib.h>

main()
{
int n2, n3, n4, n5, resultado2, resultado3, resultado4, resultado5, i;

    printf("Tabuada do 2 ao 5:\n");

   for(i = 0, n2 = 2, resultado2 = 0;i <= 10; i++, resultado2 = n2 * i){
    printf("%d x %d = %d \n", n2, i, resultado2);
   }
   printf("\n");
   for(i = 0, n3 = 3, resultado3 = 0; i <= 10; i++, resultado3 = n3 * i){
    printf("%d x %d = %d \n", n3, i, resultado3);
   }
      printf("\n");
   for(i = 0, n4 = 4, resultado4 = 0; i <= 10; i++, resultado4 = n4 * i){
    printf("%d x %d = %d \n", n4, i, resultado4);
   }
      printf("\n");
   for(i = 0, n5 = 5, resultado5 = 0; i <= 10; i++, resultado5 = n5 * i){
    printf("%d x %d = %d \n", n5, i, resultado5);
   }
}
