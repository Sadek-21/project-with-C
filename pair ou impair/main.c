#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N ;
    printf("Veuillez entrer la valeur de N : ");
    scanf("%D",&N);
    if (N%2 == 0)
        printf("%d est un nombre pair",N);
    else
        printf("%d est un nombre impair",N);
    return 0;
}
