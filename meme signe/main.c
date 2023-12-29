#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A , B ;
    printf("Veuillez entre le nombre A :");
    scanf("%d",&A);
    printf("Veuillez entre le nombre B :");
    scanf("%d",&B);
    if (A*B>0)
        printf("A et B ont le meme signe");
    else
        printf("A et B ont deux signes differents");
    return 0;
}
