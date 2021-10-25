#include<stdio.h>
#include<conio.h>
int main (void )
{
  int matrizA[3][3],ia, ja;
  int matrizB[3][3],ib, jb;

  printf ("\nDigite valor para os elementos da matriz A\n\n");

  for ( ia=1; ia<3; ia++ )
    for ( ja=1; ja<3; ja++ )
    {
      printf ("\nElemento: a[%d][%d] = ", ia, ja);
      scanf ("%d", &matrizA[ ia ][ ja ]);
    }


  printf ("\nDigite valor para os elementos da matriz B\n\n");

  for ( ib=1; ib<3; ib++ )
    for ( jb=1; jb<3; jb++ )
    {
      printf ("\nElemento: b[%d][%d] = ", ib, jb);
      scanf ("%d", &matrizB[ ib ][ jb ]);
    }



  printf("\n\n******************* Saida de Dados A ********************* \n\n");

  for ( ia=1; ia<3; ia++ )
    for ( ja=1; ja<3; ja++ )
    {
      printf ("\nElemento[%d][%d] = %d\n", ia, ja,matrizA[ ia ][ ja ]);
    }

      printf("\n\n******************* Saida de Dados B ********************* \n\n");

    for ( ib=1; ib<3; ib++ )
    for ( jb=1; jb<3; jb++ )
    {
      printf ("\nElemento[%d][%d] = %d\n", ib, jb,matrizB[ ib ][ jb ]);
    }

  getch();
  return(0);
}
