#include <stdio.h>
#include <stdlib.h>

int main()
{
    int L ;
    int i , j ;
    printf("Veuillez saisir le nombre de lignes : ");
    scanf("%d",&L);
    for(i=1 ; i<=L ; i++){
        for(j=1 ; j<=i ;  j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
