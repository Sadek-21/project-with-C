#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N , i , est_premier ;
    printf("Veuillez entrer la valeur de N :");
    scanf("%d",&N);
    est_premier = 1;
    for(i=2 ; i<=N/2 ; i++){
        if (N%i==0){
            est_premier=0;
            break;
        }
    }
    if(est_premier==1)
        printf("%d est un nomber prenmier",N);
    else
        printf("%d est un nomber non prenmier",N);
    return 0;
}
