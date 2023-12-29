#include <stdio.h>
#include <stdlib.h>

int main()
{
    int produits_vendus ;
    float prix_vente , CA ;
    printf("programme qui calcule le chifre d'affaire \n");
    printf("Veuillez entrer la qutite de prouduits vendus");
    scanf("%d",&produits_vendus);
    printf("Veuillez entrer le prix de vente :") ;
    scanf("%f",&prix_vente);
    CA = prix_vente * produits_vendus ;
    printf("Le chiffre d'affaire : %.2f ",CA);
    return 0;
}
