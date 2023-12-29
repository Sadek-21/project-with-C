#include <stdio.h>
#include <stdlib.h>
float somme (float T[]){
   float S ;
   int i ;
   S = 0 ;
   for(i=0;i<10;i++)
    S = S + T[i];
    return S ;

}
float produit (float T[]){
   float p ;
   int i ;
   p = 1 ;
   for(i=0;i<10;i++)
    p = p * T[i];
    return p ;

}
 float moyenne (float T[]){
   float M , S ;
   S = somme(T);
   M = S / 10;
    return M ;
   }
void PN (float T[]){
   int i ;
   printf("\nLes elements positifs du tableau sont : ");
   for(i=0;i<10;i++){
        if(T[i]>0)
            printf("%.2f ",T[i]);
   }
   printf("\nLes elements negative du tableau sont : ");
   for(i=0;i<10;i++){
        if(T[i]<0)
            printf("%.2f ",T[i]);
   }
}

int main()
{
    float T[10];
    int i ;
    printf("Veuillez entrer les elements du tableau : \n");
    for(i=0;i<10;i++){
        printf("T[%d]= ",i+1);
        scanf("%f",&T[i]);
    }
    printf("La somme des elements du tableau est : %.2f \n ",somme(T));
    printf("Le produit des elements du tableau est : %.2f \n ",produit(T));
    printf("La moyenne des elements du tableau est : %.2f \n ",moyenne(T));
    PN(T);
    return 0;
}
