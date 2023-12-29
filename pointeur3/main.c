#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10];
    int min;
    int *P;
    P = T ;
    printf("Veuillez saisir les elements du tableau : \n");
    for ( P = T ; P < T +10 ; P++){
        printf("T[%d] = ", P - T);
        scanf("%d",P);
    }
    min = T[0];

    min = *T ;

    P = T ;
    min = *P ;

    for ( P = T+1 ; P < T +10 ; P++){
        if (min>*P)
            min = *P ;
    }
    printf("Le  minimum des elements du tableau est : %d",min );
    return 0;
}
