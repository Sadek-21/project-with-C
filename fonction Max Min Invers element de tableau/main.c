#include <stdio.h>
#include <stdlib.h>
float maximum (float T[]){
   float max ;
   int i ;
   max = T[0] ;
   for (i=0;i<10;i++){
    if (max<T[i]){
        max = T[i];
    }
   }
   return max ;
}
float minimum (float T[]){
   float min ;
   int i ;
   min = T[0] ;
   for (i=0;i<10;i++){
    if (min>T[i]){
        min = T[i];
    }
   }
   return min ;
}
void Inverse (float T[]){
   float TS[10];
   int i ;
   for (i=0;i<10;i++)
         TS[9-i] = T[i] ;
         printf("Les elements du tableau inversee sont : \n ");
        for (i=0;i<10;i++)
            printf("%.2f \n",TS[i]);
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
    printf("Le maximum des elements du tableau est : %.2f \n ",maximum(T));
    printf("Le minimum des elements du tableau est : %.2f \n ",minimum(T));
    Inverse(T);

    return 0;
}
