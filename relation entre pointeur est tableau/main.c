#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T [100];
    int N ;
    int *P ;
    P = T ;
    printf("Veuillez saisir la taille du tableau : ");
    scanf("%d",&N);

    printf("Veuillez saisir les elements du tableau : \n");
    for( P = T ; P<N + T  ; P++){
        printf("T[%i] = ",P - T);
        scanf("%d", P);
    }
    printf("les elements du tableau sont : \n");
    for( P = T ; P<N + T ; P++){
        printf("%d ", *P );
    }

    return 0;
}
