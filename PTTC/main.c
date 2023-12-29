#include <stdio.h>
#include <stdlib.h>

int main()
{
     char categorie ;
     float PHT , PTTC ;
     printf("Veuillez entrer la categorie de produit : ");
     scanf("%c",&categorie);
     printf("Veuillez entrer le prix hors taxe de produits :");
     scanf("%f",&PHT);
     switch(categorie){
          case 'A' : PTTC = PHT + PHT *0.07;
                    printf("le prix TTC est :%.2f", PTTC);
                    break;
          case 'B' : PTTC = PHT + PHT *0.20;
                    printf("le prix TTC est :%.2f", PTTC);
                    break;
          case 'C' :printf("le prix TTC est :%.2f", PHT + PHT *0.20);
                    break ;
           default : printf("La categorie n'existe pas");
                    break;

     }
    return 0;
}
