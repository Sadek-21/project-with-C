#include <stdio.h>
#include <stdlib.h>

int main()
{
    int L ;
    int i , j ;
    printf("Veuillez saisir le nomber de lignes : ") ;
    scanf("%d",&L);
    for(i=1 ; i<=L ; i++){
        for(j=1 ; j<=L ;  j++){
                if(i==1 || j==1 || i==L || j==L || i==j || j==L-i+1)
                    printf("* ");
                else
                    printf("  ");
        }
        printf("\n");
    }
    return 0;
}
