#include <stdio.h>
#include <stdlib.h>
int  nbrChiffres (long N){
    int nbr ;
    nbr = 0 ;
    do{
        N = N/10 ;
        nbr++ ;
    }while(N!=0);
    return nbr ;
}
int main()
{
    long N ;
    printf("Veuillez entrer un nomber : ");
    scanf("%d",&N);
    printf("Nomber total de chiffres dans le nomber %ld est : %d\n" , N , nbrChiffres(N));

    return 0;
}
