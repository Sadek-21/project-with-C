#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[8];
    int i , j , Tmp ;
    printf("Veuillez saisir les elements du tableau : \n");
    for(i=0;i<8;i++){
        printf("T[%d]= ", i+1);
        scanf("%d",&T[i]);
    }
    for (i=0 ; i<8 ; i++ ){
        for(j=i+1;j<8;j++){
            if(T[i]>T[j]){
                Tmp = T[i];
                T[i] = T[j] ;
                T[j] = Tmp ;
            }
        }
    }
    printf("\nLes elements du tableau par order croissant sont :");
    for(i=0 ; i<8 ; i++)
        printf("%d ",T[i]);
    return 0;
}
