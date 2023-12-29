#include <stdio.h>
#include <stdlib.h>
void echange_cond(int *A , int *B ){
    int C , D ;
    if ( *A * *B > 0){
        C = *A ;
        *A = *B ;
        *B = C ;
    }
    else{
        C = *A + *B ;
        D = *A * *B ;
        *A = C;
        *B = D;
    }
}
int main()
{
    int A , B ;
    printf("Veuillez saisir la valeur de A :" );
    scanf("%d",&A);
    printf("Veuillez saisir la valeur de B :" );
    scanf("%d",&B);

    echange_cond(&A,&B);

    printf("la nouvelle valeur de A : %d \n" , A );
    printf("la nouvelle valeur de B : %d" , B );

    return 0;
}
