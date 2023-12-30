#include <stdio.h>
#include <stdlib.h>
 float cube(float N){
     float C ;
     C = N * N * N ;
     return C ;
     }

int main()
{
    float N ;
    printf("Veuillez entrer la valeur de N :");
    scanf("%f",&N);
    printf("Le cube de %.2f est : %.2f \n", N , cube(N));

    return 0;
}

