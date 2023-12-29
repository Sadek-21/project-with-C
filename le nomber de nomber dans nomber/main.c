#include <stdio.h>
#include <stdlib.h>

int main()
{
    long N ;
    int nbr = 0 ;
    printf("Veuillez entrer un nomber :" );
    scanf("%ld",&N);
    do{
          nbr++;
          N = N / 10;
    }while(N != 0);
    printf("Le nomber total de chiffres est : %d",nbr);

    return 0;
}
