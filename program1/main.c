#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Veuillez entrer la valeur de x :");
    int x ;
    scanf("%d",&x);
    printf("X = %d \n",x);
    float a , b ;
    printf("Veuillez entrer la valeurs de a et b");
    scanf("%f%f",&a,&b);
    printf("A = %.2f , B = %.2f\n", a,b);
    printf("A + B = %.2f", a + b);
    return 0;
}
