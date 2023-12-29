#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[100] , P[100] , I[100];
    int i ,taille , Pcmp , Icmp ;
    printf("Veuillez saisir la taille du tableau : ");
    scanf("%d", &taille);
    printf("Veuillez saisir les elements du tableau : \n");
    for(i = 0 ; i < taille ; i++){
        printf("T[%d]= ",i+1);
        scanf("%d",&T[i]);
    }
   Pcmp = 0 ;
   Icmp = 0 ;
   for(i=0;i<taille;i++){
    if(T[i]%2==0){
        P[Pcmp]=T[i];
        Pcmp++;
    }
    else{
        I[Icmp]=T[i];
        Icmp++;
     }
   }
   printf("\n Les elements paire du tableau sont : ");
   for(i=0;i<Pcmp;i++)
       printf("%d ",P[i]);

   printf("\nLes elements impairs du tableau sont : ");
   for(i=0;i<Icmp;i++)
       printf("%d ",I[i]);
    return 0;
}
