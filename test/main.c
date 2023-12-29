#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,c=80,n;
    printf("veuillez sasir n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=(c/2)-i;j++){
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
        printf("*");
    }
    printf("\n");
    }
    return 0;
}
