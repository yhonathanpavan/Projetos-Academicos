#include <stdio.h>
#include <stdlib.h>

main()
{
int n1, n2, n3, n4, n5;

    printf("Insira um numero: \n");
    scanf("%d", &n1);
    printf("Insira mais um numero: \n");
    scanf("%d", &n2);
    printf("Insira mais um numero: \n");
    scanf("%d", &n3);
    printf("Insira mais um numero: \n");
    scanf("%d", &n4);
    printf("Insira mais um numero: \n");
    scanf("%d", &n5);

    //n1
    if(n1 % 2 == 0){
        printf("%d eh par.\n", n1);
    }else{
        printf("%d eh impar.\n", n1);
    }
    //n2
     if(n2 %2 == 0){
        printf("%d eh par.\n", n2);
    }else{
        printf("%d eh impar.\n", n2);
    }
    //n3
     if(n3 %2 == 0){
        printf("%d eh par.\n", n3);
    }else{
        printf("%d eh impar.\n", n3);
    }
    //n4
     if(n4 %2 == 0){
        printf("%d eh par.\n", n4);
    }else{
        printf("%d eh impar.\n", n4);
    }
    //n5
     if(n5 %2 == 0){
        printf("%d eh par.\n", n5);
    }else{
        printf("%d eh impar.\n", n5);
    }

}
