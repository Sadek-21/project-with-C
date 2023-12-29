#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int N ;
    float  S , i , j ;
    printf("Veuillez entrer la valeur de N :");
    scanf("%d" , &N);
    S = 0 ;
    j=1;
    for(i=1;i<=N;i++){
         S = S + pow(j,2);
          j=j+2;
    }
      printf("La somme est : %.2f",S);
    return 0;
}
