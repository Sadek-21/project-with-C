#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T , H , M , S , R ;
    printf("Veuillez entre la duree en seconde :");
    scanf("%d",&T);
    H = T/3600;
    R = T % 3600;
    M = R / 60;
    S = R % 60;
    printf("%dH %dM %dS" ,H,M,S);
    return 0;
}
