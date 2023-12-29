 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int N ;
    int *P =&N;
    printf("Veuillez saisir un nomber :");
    scanf("%d",P);
    if( *P % 2 == 0)
        printf("%d est un nomber pair ",*P);
    else
        printf("%d est un nomber impair",*P);


    return 0;
}
