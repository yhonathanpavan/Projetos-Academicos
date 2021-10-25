#include <stdio.h>

main()
{
int n1, n2, n3, n4, n5;

        printf("Digite um numero: \n");
      scanf("%d", &n1);
        printf("Digite mais um numero: \n");
      scanf("%d", &n2);
        printf("Digite mais um numero: \n");
      scanf("%d", &n3);
        printf("Digite mais um numero: \n");
      scanf("%d", &n4);
        printf("Digite um ultimo numero: \n");
      scanf("%d", &n5);


    if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5){
    printf("O maior numero inserido foi: %d \n", n1);
    }
    else if (n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5){
    printf("O maior numero inserido foi: %d \n", n2);
    }
    else if (n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5){
    printf("O maior numero inserido foi: %d \n", n3);
    printf("O menor numero inserido foi: %d \n", n3);
    }
    else if (n4 > n1 && n4 > n3 && n4 > n2 && n4 > n5){
    printf("O maior numero inserido foi: %d \n", n4);
    printf("O menor numero inserido foi: %d \n", n4);
    }
    else{
        printf("O maior numero inserido foi: %d \n", n5);
    }
    if (n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5 ){
    printf("O menor numero inserido foi: %d \n", n1);
    }
    else if (n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5){
    printf("O menor numero inserido foi: %d \n", n2);
    }
    else if (n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5){
    printf("O menor numero inserido foi: %d \n", n3);
    }
    else if (n4 < n1 && n4 < n3 && n4 < n2 && n4 < n5){
    printf("O menor numero inserido foi: %d \n", n4);
    }
     else if (n5 < n1 && n5 < n3 && n5 < n2 && n5 < n4){
    printf("O menor numero inserido foi: %d \n", n5);
    }
}
