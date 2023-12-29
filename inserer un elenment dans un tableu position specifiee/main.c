#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[100];
    int i ,taille , pos , N ;
    printf("Veuillez saisir la taille du tableau : ");
    scanf("%d", &taille);
    printf("Veuillez saisir les elements du tableau : \n");
    for(i = 0 ; i < taille ; i++){
        printf("T[%d]= ",i+1);
        scanf("%d",&T[i]);
    }
    printf("Veuillez saisir la valeur a inserer  : ");
    scanf("%d", &N);
    printf("Veuillez saisir sa position :");
    scanf("%d", &pos);
    if (pos<=0 || pos > taille+1){
        printf("position invalide! Veuillez entrer une position entre 1 et %d",taille+1);
    }
    else{
        for(i = taille ; i >= pos ; i--){
            T[i] = T[i-1];

        }
        T[pos-1]=N;
        taille++;
        printf("Elements du tableau apres insrtion sont : \n");
        for(i = 0 ; i < taille ; i++)
            printf("T[%d] = %d \n ", i+1 ,T[i]);

    }

    return 0;
}
