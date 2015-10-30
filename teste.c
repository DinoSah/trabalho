#include <stdio.h>
int main ()
{
 int i, j, x, y ;
 char a;
 printf ("INFORME A ALTURA: ");
 scanf ("%d",&i);
 printf ("INFORME A LARGURA: ");
 scanf ("%d",&j);
 printf ("ESCOLHA UM SIMBOLO: ");
 fflush(stdin);
 scanf("%c",a); 
 char M [i][j];
 for (x=0; x<i; x++)
 {
     for(y=0; y<j; y++)
     {
              M[x][y] = ' ';
              if(x==0)
              M[x][y] = a;
              if(x!=i)
              {
                      M[x][0] = a;
                      M[x][j-1] = a;
              }
              if(x==i-1)
              M[x][y] = a;
              
     }
 }

 for (x=0; x<i; x++)
 {
     for(y=0; y<j; y++)
     {
              printf ("%c",M[x][y]); 
     }
     printf ("\n");
 }
  return 0;
}     
