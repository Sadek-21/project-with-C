#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N1 , N2 , S , i ;
    printf ( "Veuillez entrer un nomber : \n");
    scanf("%d",&N1);
    printf ( "Veuillez entrer un nomber : \n");
    scanf("%d",&N2);
    S = 0 ;
    for (i=1;i<=N2;i++)
        S+= N1 ;
        printf("Resultat: %d*%d = %d",N1,N2,S);


    return 0;
}
