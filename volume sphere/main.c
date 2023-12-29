#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float R , V ;
    const float Pi = 3.14 ;
    printf("Veuillez entree le rayon du spher :");
    scanf("%f",&R);
    V = (Pi * pow(R,3))/3;
    printf("Le volume du spher est : %.2f", V);
    return 0;
}
