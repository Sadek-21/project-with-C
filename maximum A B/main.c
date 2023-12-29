#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A , B , Max ;
    printf("Veuillez entrer le dividende :");
    scanf("%f",&A);
    printf("Veuillez entrer le diviseur :");
    scanf("%f",&B);
    Max = A ;
    if (B > Max ){
        Max = B ;
    }
    printf("Le maximum est : %.2f",Max);
    return 0;
}
