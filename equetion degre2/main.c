#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a , b , c , delta , X , X1 , X2 ;
    printf("Veuillez entre la valeur de a :");
    scanf("%f",&a);
    printf("Veuillez entre la valeur de b :");
    scanf("%f",&b);
    printf("Veuillez entre la valeur de c :");
    scanf("%f",&c);
    delta = pow(-b,2) - (4 * a * c) ;
    if (delta<0)
        printf("Pas de soulitions reelles");
    else if (delta == 0){
        X = (-b)/(2*a);
        printf("La soulition est : %.2f", X);
    }
    else{
        X1 = (-b-sqrt(delta))/(2*a);
        X2 = (-b+sqrt(delta))/(2*a);
        printf("Le soulitions sonty : %.2f et %.2f",X1 ,X2);
    }
    return 0;
}
