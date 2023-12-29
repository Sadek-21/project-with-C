#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N[10];
    int i , nbr ;
    float M , S ;
    printf(" Veullez saisir les note des etudiants : \n ");
    S = 0 ;
    for (i=0 ; i<10 ; i++){
        printf("N[%d]= ",i);
        scanf("%f",&N[i]);
        S = S + N[i] ;
    }
    M = S / 10 ;
    nbr = 0 ;
    for (i=0 ; i<10 ; i++){
        if (N[i]>M)
            nbr = nbr + 1;
    }
    printf("La moyenne des notes est : %.2f \n ",M);
    printf("Le nomber des notes superieurs a la moyenne est : %d ",nbr);


    return 0;
}
