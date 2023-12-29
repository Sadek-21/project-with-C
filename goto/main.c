#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N ;
    debut :
    printf("Veuillez entrer un nomber entre 1 et 5 :");
    scanf("%d" ,&N);
    if (N<1 || N>5)
        goto debut;
    printf("Bravo ! vous avez tape un nombre compris entre 1 et 5 ");

    return 0;
}
