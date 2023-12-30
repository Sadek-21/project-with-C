#include <stdio.h>
#include <stdlib.h>

int main()
{
    int date_naissance, age ;
    printf("Quelle est votre anne de naissance ? ");
    scanf("%d",&date_naissance);
    age = 2020-date_naissance;
    printf("Vous aurez alors %d ans cette annee!",age );
    return 0;
}
