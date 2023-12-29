#include <stdio.h>
#include <stdlib.h>

void maximum (int *x, int *y , int *m){
   if (*x>*y)
    *m = *x;
   else
    *m = *y;
}
int main()
{
    int a , b , max;
    printf("Veuillez saisir la valeur de a :");
    scanf("%d",&a);
    printf("Veuillez saisir la valeur de b :");
    scanf("%d",&b);
    maximum(&a,&b,&max);
    printf("Le maximum de deux valeur est : %d", max );

    return 0;
}

  int main()
{

 int r , c ;

   for (r=1 ; r<=3 ; r++){
    for (c=1;c<=3;c++){
        printf("%c",r+96);
    }
    printf("\n");
   }
   return 0;
}
