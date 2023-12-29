#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N ;
    printf("Veuillez entrer la valeur de N :");
    scanf("%d",&N);
    if (N>0)
        printf("Ce nomber est positif ");
    else if (N<0)
        printf("Ce nomber est negatif ");
    else
        printf("Ce nombre est nul");

    return 0;
}
