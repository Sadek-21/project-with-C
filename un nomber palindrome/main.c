#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N ,P ;
    int Inverse=0 ;
    printf("Veuillez entrer la valeur de N : ");
    scanf("%d",&N);
    P=N;
    do{
         Inverse = (Inverse*10) + (N%10);
         N = N / 10 ;
    }while(N!=0);
    if(P==Inverse)
           printf("%d est palindrome", P);
     else
            printf("%d est non palindrome", P);

    return 0;
}
