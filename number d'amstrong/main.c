#include <stdio.h>
#include <stdlib.h>

int Num_ch(int n){
    int nb_ch = 0 ;
    while( n != 0 ){
        nb_ch++ ;
        n = n/10 ;
    }
    return nb_ch ;
}
int Amstrong_num(int n, int i){
    int S=0,N=n;
    while(n!=0){
     S += pow(n%10, i);
     n /= 10;
    }
     if(S == N){
        printf("%d est un nomber d'amstrong.\n ",N);
        return 1;
    }
   return 0;
}
int main()
{
    int N , nb_ch, i=10,j=0;
    printf("Veuillez saisir Combien de num d'armstrong: ");
    scanf("%d",&N);
    while(j< N){
        nb_ch = Num_ch(i) ;
        if(Amstrong_num(i,nb_ch)) j++ ;
        i++;
    }

    return 0;
}
