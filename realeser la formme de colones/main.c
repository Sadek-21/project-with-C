#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C , p ;
    int i , j ;
    printf("Veuillez saisir le nomber de colones : ") ;
    scanf("%d",&C);
    p = 1 ;
    for(i=1 ; i<=(2*C-1) ; i++){
        for(j=1 ; j<=p ;  j++){
                printf("*  ");
        }
            if (i<C)
                p++;
            else
                p--;
        printf("\n");
    }

    return 0;
}
