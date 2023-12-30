#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float Xa , Xb , Ya ,Yb ;
    float AB ;
    printf("Veuillez entrer les coordonnee X de A :");
    scanf("%f",&Xa);
    printf("Veuillez entrer les coordonnee Y de A :");
    scanf("%f",&Ya);
    printf("Veuillez entrer les coordonnee X de B :");
    scanf("%f",&Xb);
    printf("Veuillez entrer les coordonnee Y de B :");
    scanf("%f",&Yb);
    AB = sqrt(pow((Xb-Xa),2) + pow((Yb-Ya),2));
    printf("La distance entre les deux points A et B est:%.2f", AB );
    return 0;
}
