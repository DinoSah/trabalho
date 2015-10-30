#include <stdio.h>
int main ()
{
 int i, j, x, y ;
 char a;
 cout << "INFORME A ALTURA: ";
 cin >> i;
 cout << "INFORME A LARGURA: ";
 cin >> j;
 cout << "ESCOLHA UM SIMBOLO: ";
 cin >> a;
 cout << endl;
 
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
              cout << M[x][y]; 
     }
     cout << endl;
 }   
  return 0;
}     
