#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stbool.h>
int main()
{
    int age ;
    char sexe ;
    printf("Veuillez entrer le sexe de l'habitant :");
    scanf("%c",&sexe);
    printf("Veuillez entrer l'age de l'habitant :");
    scanf("%d",&age);
    /*if ((sexe == 'H' &&age >= 20) || (sexe == 'F' && age>= 18 && age<=35 ))
        printf("L'habitant est imposable");
    else
        printf("L'habitant est non imposable");*/
        bool c1 , c2 ;
        c1 = (sexe == 'H' &&age >= 20);
        c2 = (sexe == 'F' && age>= 18 && age<=35 );
        if (c1 || c2 )
            printf("L'habitant est imposable");
    else
        printf("L'habitant est non imposable")
    return 0;
}
