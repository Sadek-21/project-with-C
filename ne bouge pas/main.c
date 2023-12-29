#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N ;
    printf("Veuillez entrer la valeur de N :");
    scanf("%d",&N);
    switch(N){
       case 6 : printf("Le personnsage va a droite ");
                break;
       case 4 : printf("Le personnsage va a gauche ");
                break;
       case 8 : printf("Le personnsage va en haut ");
                break;
       case 2 : printf("Le personnsage va en bas ");
                break;
        default : printf("Erreur de saisie, le personnage ne bouge pas ");
    }
    return 0;
}
