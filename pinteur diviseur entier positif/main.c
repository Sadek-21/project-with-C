#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N ,i ;
    int *P =&N;
    do{
        printf("Veuillez saisir un nomber :");
        scanf("%d",P);
    }while(*P <= 0);
    printf("Les diviseurs de %d sont : ", *P);
    for (i=1 ; i<=*P ; i++){
        if(*P % i == 0)
            printf("%d ", i);

    }




    return 0;
}
