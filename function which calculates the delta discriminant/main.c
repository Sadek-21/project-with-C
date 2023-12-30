#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float a , b , c ;
void saisi (){
    printf("\nVeuillez entrer la valeur de a : ");
    scanf("%f",&a);
    printf("Veuillez entrer la valeur de b : ");
    scanf("%f",&b);
    printf("Veuillez entrer la valeur de c : ");
    scanf("%f",&c);
}
float discriminant (){
    float delta ;
    delta = pow(-b,2) - (4*c*a);
    return delta ;
}
void soulitions(float D){
     float x1 , x2 , x ;
     if(D<0)
        printf("Pas de soulitions reelles\n ");
     else if (D==0){
        x = (-b)/(2*a);
        printf("La soulition est : %.2f \n ",x);
     }
     else{
        x1 = (-b-sqrt(D))/(2*a) ;
        x2 = (-b+sqrt(D))/(2*a) ;
        printf("les soulitions sont : %.2f et %.2f \n",x1,x2);
     }
}
int main()
{
    float Delta ;
    saisi();
    Delta = discriminant();
    soulitions(Delta);
    return 0;
}
