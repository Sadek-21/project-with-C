#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T [100];
    int N , X ;
    int *P1 , *P2 ;
    P1 = T ;
    printf("Veuillez saisir la taille du tableau : ");
    scanf("%d",&N);

    printf("Veuillez saisir les elements du tableau : \n");
    for( P1 = T ; P1 < N + T  ; P1++){
        printf("T[%i] = ",P1 - T);
        scanf("%d", P1);
    }

    printf("Veuillez saisir l'element X a eliminer du tableau : ");
    scanf("%d",&X);

    P2 = T;
    for (P1 = T ; P1 < N + T ; P1++ ){
        *P2 = *P1 ;
        if(*P2!=X)
            P2++;
    }
    N = P2 - T ;

    printf("les elements du tableau aprea l'elimination de %d sont : \n", X);
    for( P1 = T ; P1 < N + T ; P1++){
        printf("%d ", *P1 );
    }
    return 0;
}
