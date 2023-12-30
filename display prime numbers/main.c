#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N ;
    printf("Veuillez saisir la valeur de N : ");
    scanf("%d",&N);
    int T[N];
    int i , compteur , x ;
    int estPremier ;
    x = 2;
    compteur = 0 ;
    do {
            estPremier = 0 ;
        for(i=2 ; i<=x/2 ; i++){
            if ( x % i == 0){
                estPremier = 1 ;
                break;
            }
        }
        if(estPremier==0){
            T[compteur]=x;
            compteur++ ;
        }
        x++;
    } while(compteur < N);
    printf("Les %d premier nomber premiers sont :\n",N);
    for(i=0 ; i<N ; i++)
        printf("%d \n",T[i]);
    return 0;
}
