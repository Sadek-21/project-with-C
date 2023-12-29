 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10];
    int max1 , max2 ;
    int i ;
    printf("Veuillez saisir les elements du tableau : \n");
    for(i = 0 ; i < 10 ; i++){
        printf("T[%d] = " ,i+1);
        scanf("%d",&T[i]);
    }
    max1 = T[0];
    max2 = T[0];
    for(i = 0 ; i< 10 ;i++){
        if (T[i]>max1){
            max2 = max1 ;
            max1 = T[i] ;
        }
        if (T[i]>max2 &&T[i]<max1){
            max2 = T[i];
        }
    }
     printf("Le premier plus grand element du tableau est : %d \n",max1);
     printf("Le deuxieme plus grand element du tableau est : %d \n",max2);
    return 0;
}
