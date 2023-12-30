#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N , S , i;
    printf("Veuilklez entrer un nomber : ");
    scanf("%d" ,&N);
    S = 0 ;
    /*
    for( i=1 ; i<=N ;i++ )
    {
        S = S+i ;
    }
    printf("La somme S = %d :",S);
    */

    /*
    i = 1;
    do{
        S+=i;
        i++;
    }
    while(i<=N);
    printf("La somme S = %d",S);
 */

    i = 1 ;
    while (i<=N){
    S = S + i ;
    i++;
}
    printf ("La somme S = %d :",S);
    return 0;
}
