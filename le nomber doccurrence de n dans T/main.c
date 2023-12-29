#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10];
    int i ,x , n ;
    printf(" Veullez saisir les elements du tableau : \n ");
    for (i=0 ; i<10 ; i++){
        printf("T[%d]= ",i);
        scanf("%d",&T[i]);
    }
     printf(" Veullez saisir la valeur de  : \n ");
     scanf("%d",&n);
     x = 0 ;
     for(i = 0 ; i<10 ; i++){
        if(T[i]==n)
            x++;

     }
        printf("Le nomber d'occurrence de %d dans le tableau T est :%d",n,x);

    return 0;
}
