#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float N1 , N2 , N3 , N4 , N5 , S , M ;
    printf("Veuillez entrer les 5 notes :");
    scanf("%f %f %f %f %f",&N1,&N2,&N3,&N4,&N5);
    S = N1 + N2 + N3 + N4 + N5;
    M = S / 5 ;
    printf(" La somme des notes est : %.2f\n",S);
    printf(" La somme des notes est : %.2f",M);
     return 0;
}
