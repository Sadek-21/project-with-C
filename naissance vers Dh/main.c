#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age , i ;
    float S ;
    printf("Veuillez entrer l'age d'Amal :" );
    scanf("%d" ,&age);
    S = 0 ;
    for(i = 1 ; i<=age ; i++ )
        S = S + (500+(i*3));

    printf("Le compte d'Amal au %dieme anniversaire est : %.2f",age,S);
    return 0;
}
