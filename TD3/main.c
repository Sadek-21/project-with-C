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
      int  j, num, estPremier;

        printf("Saisir un nombre : ");
        scanf("%d", &num);


            for(i=2; i<=num; i++)
 {

            if(num%i==0)
    {

                estPremier = 1;
        for(j=2; j<=i/2; j++)
 {
        if(i%j==0)
 {
            estPremier = 0;
                break;
            }
                }

            if(estPremier==1)
                            {
                                printf("%d, ", i);
                                }
 }
 }
    return 0;
}
