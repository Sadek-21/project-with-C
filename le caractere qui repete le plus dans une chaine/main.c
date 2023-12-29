#include <stdio.h>
#include <stdlib.h>

int main()
{
     char  T [100];
     int Frq [100];
     int i ,j ,compteur ;
     int max , indice_max ;
     puts("Veuillez sausr une chaine : ");
     gets(T);
     for (i=0 ; i<strlen(T) ; i++){

        Frq[i] = -1;
     }
     for(i=0;i<strlen(T);i++){
        compteur=1;
        for (j=i+1;j<strlen(T);j++){
            if(T[i]==T[j]){
                compteur++;
                Frq[j]=0;
            }
        }
        if(Frq[i]!=0){
            Frq[i] = compteur ;
        }
     }
     max = Frq[0];
     indice_max = 0;
     for( i=1 ; i<strlen(T) ; i++ ){
        if(Frq[i] > max){
            max = Frq[i];
            indice_max = i ;
        }
     }
     printf("Le caracter qui se repete le plus dans la chaine est : %c = %d fois ",T[indice_max],max);

    return 0;
}
