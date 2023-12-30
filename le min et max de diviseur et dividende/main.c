#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A , B , Max , Min ;
    printf("Veuillez entrer le dividende :");
    scanf("%f",&A);
    printf("Veuillez entrer le diviseur :");
    scanf("%f",&B);
    Max = A ;
    if (B > Max ){
        Max = B ;
    }
    Min = A ;

      if (B < Max );{
        Min = B ;
    }

    printf("Le maximum est : %.2f\n",Max);
    printf("Le minimum est : %.2f",Min);

    return 0;
}
