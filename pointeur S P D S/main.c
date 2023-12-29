#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A , B ;
    float *P1;
    float *P2 ;
    P1 = &A ;
    P2 = &B ;

    printf("Veuillez saisir la valeur de A :");
    scanf("%f",P1);
    printf("Veuillez saisir la valeur de B :");
    scanf("%f",P2);

    printf("A + B = %.2f \n",*P1 + *P2);
    printf("A - B = %.2f \n",*P1 - *P2);
    printf("A * B = %.2f \n",*P1 * *P2);

    if(*P2!=0)
        printf("A / B = %.2 \n", *P1 / *P2);
    else
        printf("La dividion par 0 est impossible");


    return 0;
}
