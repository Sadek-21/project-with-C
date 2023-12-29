#include <stdio.h>
#include <stdlib.h>
int A , B ;
void saisi (){
    printf("Veuillez saisir la valeur de A :");
    scanf("%d",&A);
    printf("Veuillez saisir la valeur de B :");
    scanf("%d",&B);

}
void signe  (){
    if (A*B>0)
        printf("Les valeurs de A et B on le meme signe \n");
    else
        printf("Les valeurs de A et B on des signe differents \n");
}

int minimum (){
   int min ;
     if (A>B)
        min = B ;
   else
        min = A ;
      return min ;
}
int maximum (){
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
    saisi ();
    signe(A,B);
    min = minimum(A,B);
    max = maximum(A,B);
    printf("La valeur minimal est : %d \n", min);
    printf("La valeur maximal est : %d \n", max);
    saisi ();
    signe(A,B);
    saisi ();
    signe(A,B);




    return 0;
}
