#include <stdio.h>
#include <stdlib.h>

int main()
{
    float T[4];
    int i ;
    float S , M ;
    for (i=0 ; i<4 ; i++){
        printf("Donner la note de l'etudiant num %d : ", i+1);
        scanf("%f", &T[i]);

    }
    S = 0 ;
    for (i=0 ; i<4 ; i++)
        S = S + T[i];
     M = S / 4 ;
     printf( "La moyenne des notes est  : %.2f" , M);
    return 0;
}
