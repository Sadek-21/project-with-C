#include <stdio.h>
#include <stdlib.h>

int main()
{
    float T ;
    printf ("Veuillez entrer la valeur de Temperature :");
    scanf("%f",&T);
    if (T<0)
        printf("L'etat de l'eau GLACE :");
    else if (T>100)
        printf("L'etat de l'eau VAPEUR :");
    else
        printf("L'etat de l'eau LIQUIDE:");
    return 0;
}
