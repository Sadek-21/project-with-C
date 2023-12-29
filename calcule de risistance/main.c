#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float R1,R2,R3;
    float Rser,Rpar;
    printf("Veuillez entrer les valeurs de R1,R2 et R3 :");
    scanf("%f%f%f",&R1,&R2,&R3);
    Rser = R1 + R2 + R3 ;
    Rpar = (R1*R2*R3)/(R1*R2+R1*R3+R2*R3);
    printf("La valeur de la risistance en serie est:%.2f\n",Rser);
    printf("La valeur de la risistance en parallele est:%.2f\n",Rpar);
    return 0;
}
