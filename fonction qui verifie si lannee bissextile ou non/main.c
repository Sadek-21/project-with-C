#include <stdio.h>
#include <stdlib.h>
 void type_annee (int a){
     if ((a%4==0 && a%100!=0 ) || (a%400==0))
        printf("%d est une annee bissextille \n ",a);
     else
        printf("%d n'est pas une annee bissextille \n ",a);
     }

int main()
{
    int annee ;
    printf("Veuillez entrer une annee :");
    scanf("%d",&annee);
    type_annee(annee);

    printf("Veuillez entrer une annee :");
    scanf("%d",&annee);
    type_annee(annee);

    printf("Veuillez entrer une annee :");
    scanf("%d",&annee);
    type_annee(annee);

    printf("Veuillez entrer une annee :");
    scanf("%d",&annee);
    type_annee(annee);

    return 0;
}
