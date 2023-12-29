#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N , i , U , Ui ;
    printf("Veuillez entrer la valeur de N:");
    scanf("%d" ,&N);
    Ui=6;
    for(i=1 ; i<=N ; i++){
        U=4*Ui+10;
        Ui=U;
    }
     printf("U%d = %d",N,U);
    return 0;
}
