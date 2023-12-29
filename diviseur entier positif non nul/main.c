#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  N , i ;
    do{
        printf("Veuillez entrer un nomber :");
        scanf("%d", &N);
    }while(N<=0);
    for(i=1 ; i<=N ; i++){
         if(N%i==0){
             printf("%d est un diviseur de %d \n" , i , N);
         }
    }



    return 0;
}
