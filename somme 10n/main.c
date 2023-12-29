#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int N ;
    float S , i ;
    printf("veuillez entrer la valeur de N :");
    scanf("%d",&N);
    S = 0 ;
    for(i=0;i<=N;i++)
        S=S+pow(10,i);
    printf("La somme est : %.2f" ,S);
    return 0;
}
