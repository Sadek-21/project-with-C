#include <stdio.h>
#include <stdlib.h>
float suite_rec(int n){
    float a ;
    a = (float)1/2 ;
    if ( n == 0 ){
        return a ;
    }
    else{
        return (3*suite_rec(n-1))-1 ;
    }

}
int fibonacci(int M){
    if (M==0)
        return 0 ;
    else if (M==1)
        return 1 ;
    else
        return fibonacci(M-1) + fibonacci(M-2) ;
}
int main()
{
    int n , M ;
    printf("Veuillez sasisir la valeur de n : ");
    scanf("%d",&n);
    printf("Le %d ieme terme de la suite est : %.2f\n",n,suite_rec(n));
    printf("Veuillez sasisir la valeur de M : ");
    scanf("%d",&M);
    printf("Le terme de la suite de fibonacci est : %d",fibonacci(M));
    return 0;
}
