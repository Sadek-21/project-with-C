#include <stdio.h>
#include <stdlib.h>
float  Diametre (float R){
    float D ;
    D = R*2 ;
    return D ;
}
    float  Surface (float R){
    return R * R * 3.14;
}
float  Perimetre (float R){
    return R * 2 * 3.14 ;
}
int main()
{
    float R ;
    printf("Veuillez entrer le rayon du cercle : ");
    scanf("%f",&R);
    printf("Le diametre du cercle est : %.2f \n ", Diametre(R));
    printf("La surface du cercle est : %.2f \n ", Surface(R));
    printf("Le perimetre du cercle est : %.2f \n ", Perimetre(R));

    return 0;
}
