#define DIML 3
#define DIMC 5
#include<stdio.h>
int main()
{
int i, j;
int matriz[DIML][DIMC];
printf("\nEntre com 15 valores inteiros: \n");
for (i=0; i<DIML; i++)
for (j=0; j<DIMC; j++)
scanf("%d", &matriz[i][j]);
for (i=0; i<DIML; i++)
{
for (j=0; j<DIMC; j++)
printf("%4d", matriz[i][j]);
printf("\n");
}
system("PAUSE");
return(0);
}
