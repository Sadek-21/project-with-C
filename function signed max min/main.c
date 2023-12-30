#include <stdio.h>
#include <stdlib.h>
void signe  (int A , int B ){
    if (A*B>0)
        printf("Les valeurs de A et B on le meme signe \n");
    else
        printf("Les valeurs de A et B on des signe differents \n");
}

int minimum (int A , int B ){
   int min ;
     if (A>B)
        min = B ;
   else
        min = A ;
      return min ;
}
int maximum (int A , int B ){
   int max ;
   if (A<B)
        max = B ;
   else
        max = A ;
      return max ;
}
int main()
{
    int max , min ;
    int A , B ;
    printf("Veuillez saisir la valeur de A :");
    scanf("%d",&A);
    printf("Veuillez saisir la valeur de B :");
    scanf("%d",&B);
    signe(A,B);
    min = minimum(A,B);
    max = maximum(A,B);
    printf("La valeur minimal est : %d \n", min);
    printf("La valeur maximal est : %d \n", max);


    return 0;
}
