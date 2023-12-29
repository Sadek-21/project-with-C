#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10];
    int i , min ;
    printf("Veuillez saisir les elements du tableau : \n ");
    for(i=0 ; i<10 ; i++){
         printf("T[%d]= ",i);
         scanf("%d",&T[i]);
    }
    min = T[0];
    for (i = 0 ; i<10 ; i++ ){
          if (min > T[i])
              min = T[i];
    }
    printf("Le minimum des elements du tableau est : %d",min);
    return 0;
}
