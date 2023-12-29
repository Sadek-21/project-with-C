#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;
    float U;
    printf("Donner un entier positif : ");
    scanf("%d",&num);
    U=0;
    for(i=num;i>=1;i--)
    U=sqrt(U+i);
    printf("Un= %.2f",U);
    return 0;
}
