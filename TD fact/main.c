#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N , i , fact ;
    printf("Veuillez entrer un entier positive : ");
    scanf("%d",&N);
    if (N>=0){
    fact = 1 ;
    for (i=1;i<=N ; i++)
        fact = fact*i ;
            printf("Resultat : %d!=%d",N,fact);
    }
    else
        printf("Attention l'entier saisi n'est pas positive ");

    return 0;
}
