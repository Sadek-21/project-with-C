#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A [100] , B [100];
    int N , M ;
    int *PA , *PB ;
    PA = A ;
    printf("Veuillez saisir la taille du tableau A: ");
    scanf("%d",&N);

    printf("Veuillez saisir les elements du tableau A: \n");
    for( PA = A ; PA < N + A  ; PA++){
        printf("T[%i] = ",PA - A);
        scanf("%d", PA);
    }
    PB = B ;
    printf("Veuillez saisir la taille du tableau B : ");
    scanf("%d",&M);

    printf("Veuillez saisir les elements du tableau B : \n");
    for( PB = B ; PB < M + B  ; PB++){
        printf("T[%i] = ",PB - B);
        scanf("%d", PB);
    }


    for (PA = A + N , PB = B ; PB < B + M ; PB++ , PA++){
        *PA = *PB;
    }
    N = N + M;

    printf("les elements du tableau A sont : \n");
    for( PA = A ; PA < N + A ; PA++){
        printf("%d ", *PA );
    }
    return 0;
}
