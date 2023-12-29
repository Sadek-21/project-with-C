#include <stdio.h>
#include <stdlib.h>
int PGCD(int ,int );


   int main()
{
    int num1 ,num2, pgcd, pgcd;
    printf("Entrer deux entier positifs : ");
    scanf("%d%d",&num1,&num2);
    pgcd = PGCD(num1,num2);
    printf("Resultat : pgcd(%d,%d)=%d",num1,num2,pgcd );


    return 0;
}
