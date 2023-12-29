#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T [100] ;
    int N , Tmp ;
    int *P1 , *P2 ;
    P1 = T ;
    printf("Veuillez saisir la taille du tableau T: ");
    scanf("%d",&N);
    printf("Veuillez saisir les elements du tableau T : \n");
    for( P1 = T ; P1 < N + T ; P1++){
        printf("T[%d] = ", P1 - T );
        scanf("%d" , P1);
    }
    for (P1 = T ; P1<T+N ; P1++){
        for (P2 = P1+1 ; P2<T+N ; P2++){
                if(*P1>*P2){
                    Tmp = *P1 ;
                    *P1 = *P2 ;
                    *P2 = Tmp ;
                }
        }

    }
    printf("les elements du tableau T par ordre croissant sont : \n");
    for( P1 = T ; P1 < N + T ; P1++){
        printf("%d ", *P1 );
    }
    return 0;
}
