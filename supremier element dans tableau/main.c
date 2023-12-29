#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[100];
    int i ,taille , pos ;
    printf("Veuillez saisir la taille du tableau : ");
    scanf("%d", &taille);
    printf("Veuillez saisir les elements du tableau : \n");
    for(i = 0 ; i < taille ; i++){
        printf("T[%d]= ",i+1);
        scanf("%d",&T[i]);
    }
    printf("Veuillez saisir la position de l'element a supprimer :");
    scanf("%d", &pos);
    if (pos<=0 || pos > taille){
        printf("position invalide! Veuillez entrer une position entre 1 et %d",taille);
    }
    else{
        for(i = pos ; i < taille ; i++){
            T[i-1] = T[i];

        }
        taille--;
        printf("Elements du tableau apres la suppression sont : \n");
        for(i = 0 ; i < taille ; i++)
            printf("T[%d] = %d \n ", i+1 ,T[i]);

    }
    return 0;
}
