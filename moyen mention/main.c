#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N1 , N2 , N3 ,Moyenne ;
    printf("Veuillez saisir les # notes ");
    scanf("%f %f %f", &N1, &N2,&N3);
    Moyenne = (N1 + N2 + N3)/3 ;
    printf("La moyenne de l'etudient est : %f.2\n", Moyenne);
    if (Moyenne <10)
        printf("La mention de l'etudiant est : Insuffisant ");
     else if (Moyenne >=10 && Moyenne < 12)
        printf("La mention de l'etudiant est : Passable ");
     else if (Moyenne >= 12 && Moyenne < 14)
        printf("La mention de l'etudiant est : Assez bien ");
     else if (Moyenne >= 14 && Moyenne <16)
        printf("La mention de l'etudiant est : bien ");
     else if (Moyenne >= 16)
        printf("La mention de l'etudiant est :  ");
    return 0;
}
