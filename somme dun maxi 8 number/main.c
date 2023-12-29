#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N , S , i ;
    S=0 ;
    for(i=1;i<=8;i++){
        printf("Entrer N%d : ",i);
        scanf("%d",&N);
        if (N<0)
            break;
        S=S+N;
    }
    printf("La somme est : %d ",S);
    return 0;
}
