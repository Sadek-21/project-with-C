#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[100] , Frq[100];
    int i , j ,taille , compteur ;
    printf("Veuillez saisir la taille du tableau : ");
    scanf("%d", &taille);
    printf("Veuillez saisir les elements du tableau : \n");
    for(i = 0 ; i < taille ; i++){
        printf("T[%d]= ",i+1);
        scanf("%d",&T[i]);
    }
    for(i = 0 ; i < taille ; i++){
        Frq[i] = -1 ;
    }
    for(i = 0 ; i < taille ; i++){
            compteur = 1 ;
            for(j = i+1 ; j < taille ; j++){
                if(T[i]==T[j]){
                    compteur++ ;
                    Frq[j]=0;
                }
            }
            if (Frq[i]!=0){
                Frq[i]=compteur;
            }
    }
    printf("\nLes elements qui ne sont pas unique dans le tableau sont : ");
    for(i=0 ; i<taille ; i++)
    {
        if(Frq[i]>=2){
            printf("%d ",T[i]);
        }
    }
    return 0;
}
