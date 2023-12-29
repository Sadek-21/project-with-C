#include <stdio.h>
#include <stdlib.h>
 void premier (int N){
     int i , estPremier ;
     estPremier = 1 ;
     for(i=2;i<=N/2;i++){
        if(N%i==0){
            estPremier = 0 ;
            break ;
        }
     }
     if (estPremier==1)
        printf("%d est un nomber premier. \n",N);
     else
        printf("%d est un nomber non premier. \n",N);
 }
int main()
{
    int N ;
    printf("\nVeuillez entrer un nomber : ");
    scanf("%d",&N);
    premier(N);



    return 0;
}
