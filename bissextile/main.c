#include <stdio.h>
#include <stdlib.h>

int main()
{
    int annee ;
    printf("Veuillez saisir une annee :");
    scanf("%d",&annee);
    if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0))
        printf("%d est une annee bissextille",annee);
    else
        printf("%d n'est pas une annee bissextile", annee);
    return 0;
}
