#include <stdio.h>
#include <stdlib.h>
                   //methode 1 :
//int pgcd(int A , int B ){
  //  if ( A==B )
    //    return A ;
    //else if (A>B)
      //  return pgcd(A-B,B) ;
    //else
       // return pgcd(A,B-A);
//}
                 //methode 2 :
//int pgcd (int a , int b ){
 //   return (a==b)? a :((a>b)?pgcd(a-b,b): pgcd(a,a-b));
//}

int pgcd(int X , int Y ){
    if ( Y==0)
       return X ;
    else if (X==Y)
        return X ;
   else
       return pgcd(Y,X%Y);

}
int main()
{
    int X , Y ;
    int A , B ;
    printf("Veuillez saisir la valeur de X: ");
    scanf("%d",&X);
    printf("Veuillez saisir la valeur de Y: ");
    scanf("%d",&Y);
   // printf("Veuillez saisir la valeur de A: ");
   // scanf("%d",&A);
   // printf("Veuillez saisir la valeur de B: ");
   // scanf("%d",&B);
   printf("Le PGCD de %d et %d est : %d ", X , Y , pgcd(X,Y) );
   // printf("Le PGCD de %d et %d est : %d ", A , B , pgcd(A,B) );
    return 0;
}
