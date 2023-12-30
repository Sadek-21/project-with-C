#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N , i ;
    printf("Veuillez entrer la valeur de N :");
    scanf("%d",&N);
    for(i= N+1 ;i<=N+10;i++)
        printf("%d ",i);

    i=N+1;
    printf("\nLa boucle While : \n");
    while(i<=N+10){
        printf("%d ",i);
        i++;
    }
    i=N+1;
    printf("\nLa boucle do .... While ...: \n");
    do {
        printf("%d ",i);
        i++;
    }while(i<=N+10);
    return 0;
}
