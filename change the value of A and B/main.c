#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A , B , C , D ;
    printf("Veuillez entre le nombre A :");
    scanf("%d",&A);
    printf("Veuillez entre le nombre B :");
    scanf("%d",&B);
    if (A*B>0){
        C = A ;
        A = B;
        B = C;
    }
    else{
        C = A + B ;
        D = A * B ;
        A = C ;
        B = D ;
    }
    printf("La nouvelle valeur de A est : %d\n",A);
    printf("La nouvelle valeur de B est : %d",B);
    return 0;
}
