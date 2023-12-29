#include <stdio.h>
#include <stdlib.h>

int main()
{
    int PGCD(int ,int );
{
        int num1 ,num2, pgcd ;
            printf("Entrer deux entier positifs : ");
            scanf("%d%d",&num1,&num2);
            pgcd=PGCD(num1,num2);
            printf("Resultat : pgcd(%d,%d)=%d",num1,num2,pgcd );
        return 0;
}
     int PGCD(int a, int b)
{    int res;
          if(a==b){
          res=a;}
            else
                {
                 if(a>b)
                 res=PGCD(a-b, b);
                     else
                      res=PGCD(a, b-a);
 }
    return 0;
}
