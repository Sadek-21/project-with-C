#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C[20] ;
    float S ;
    int i ;
    S = 1000 ;
    for (i = 0 ; i<20 ; i++){
        S = S + S*0.02;
        C[i]=S;
    }
    for (i = 0 ; i<20 ; i++){
        printf("A l'anniversiare %d la somme du compte de Mohamed est : %.2f \n",i+1,C[i]);

    }
    return 0;
}
