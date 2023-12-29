#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N ;
    float F , i ;
    printf("veuillez entrer la valeur de N :");
    scanf("%d",&N);
    F = 1 ;
    if(N>0){
        for(i=2;i<=N;i++){
            F=F*i;
        }
        printf("la factorielle de %d est : %.2f ",N,F);
    }
    else if (N==0){
          printf("La factorielle est : 1 ");
    }
          else
          printf("Veuillez saisir un nomber positif" );

    return 0;
}
