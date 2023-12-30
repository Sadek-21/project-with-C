#include <stdio.h>
#include <stdlib.h>
 void TMultiplication (int a){
     int i ;
     printf("La table de multiplication de %d est : \n",a);
     for(i=0 ; i<=10 ; i++){
        printf("d * %d = %d \n",a,i,a*i);
     }
 }
int main()
{
    int N ;
    printf("Veuillez entrer la valeur de N :");
    scanf("%d",&N);
    TMultiplication(N);
    TMultiplication(5);
    TMultiplication(3);
    return 0;
}
