#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int Factorielle (int N){
    int F;
      if( N == 0)
        return 1;
      else
        return N*Factorielle(N-1);
}
int main()
{
    int N , S ,X ;
    printf("veuillez entrer la valeur de N :");
    scanf("%d",&N);
    S = 0;
    X=N;
    while(N!=0){
        S+=Factorielle(N%10);
        N=N/10;
    }
    N=X;
    if(X==S)
      printf("%d  est FORT ",X);
    else
        printf("%d n'est pas FORT ",X);
    return 0;
}
