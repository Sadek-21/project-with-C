#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N , N1 ,i;
    int S , nb_ch  ;
    printf("veuillez sasir un nomber :");
    scanf("%d",&N);
    N1 = N;
    nb_ch = 0 ;
    while(N!=0){
        nb_ch++ ;
        N=N/10 ;
    }
    N = N1;
    S = 0 ;

    while(N!=0){
        S += pow(N%10,nb_ch);
        N /= 10 ;
    }
     N = N1;
    if(N1 == S){
        printf("%d est un nomber d'amstrong.\n ",N1);
    }
    else{
        printf("%d n'est pas d'amstrong.",N1);
    }

    int X , X1 ;
    printf("How much numbr d'amstrang you want:");
    scanf("%d",X);
    nb_ch=0;
    S = 0 ;
    X1 = X;
    for (i=10 ;i>0 ; i++){
            while (X!=0){
                   nb_ch++ ;
                   X = X/10 ;
                    }
            X = X1;
            while(X!=0){
                S+=pow(X%10,nb_ch);
                X/=10;
            }
            X = X1;
            if (X1==S){
               printf("%d est un nomber d'amstrong.\n",i);
            }
    }

    return 0;
}
