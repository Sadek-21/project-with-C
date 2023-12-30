#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N , i ;
     do{
        printf("veuillez entrer un nomber :");
        scanf("%d", &N);
     }while(N<0 || N>10);

     for(i=0 ;i<=10 ; i++){
            printf("%d * %d = %d \n" ,N,i,N*i);
     }
    return 0;
}
