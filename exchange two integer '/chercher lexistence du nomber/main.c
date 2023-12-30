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
     if(x==0)
        printf("%d ne se trouve pas dans le tableau ",n);
     else
        printf("%d se trouve pas dans le tableau ",n);
    return 0;
}
