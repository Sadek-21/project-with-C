#include <stdio.h>
#include <stdlib.h>

int main()
{
   int N,S,i;
   do{
    printf("Veuillez entrer un nomber:");
    scanf("%d",&N);
   }while(N<=1);
   S=0;
   for(i=1;i<=N;i++){
      S=S+i;
   }
   printf("la somme est : %d",S);
    return 0;
}
