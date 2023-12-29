#include <stdio.h>
#include <stdlib.h>
float T[10];
void remplirT(){
    int i ;
    printf("Veuillez saisir les elements du tableau : \n");
    for(i=0;i<10;i++){
        printf("T[%d]= ",i+1);
        scanf("%f",&T[i]);

    }
}
void trierCT(){
    int i , j , Tmp;
    for (i=0;i<10;i++){
        for (j=0;j<10;j++){
                if (T[i]<T[j]){
                    Tmp = T[i];
                    T[i] = T[j];
                    T[j] = Tmp ;
     }
    }
   }
   printf("\nLes elements du tableau par ordre croissant : ");
   afficherT(T);
}
void trierDT(){
    int i , j , Tmp ;
    for (i=0;i<10;i++){
        for (j=0;j<10;j++){
                if (T[i]>T[j]){
                    Tmp = T[i];
                    T[i] = T[j];
                    T[j] = Tmp ;
     }
    }
   }
   printf("\nLes elements du tableau par ordre decroissant : ");
   afficherT(T);
}
void afficherT(float T[]){
    int i ;
     for (i=0;i<10;i++){
        printf("%.2f ",T[i]);
     }
}

int main()
{
    remplirT() ;
    trierCT ();
    trierDT ();

    return 0;
}
