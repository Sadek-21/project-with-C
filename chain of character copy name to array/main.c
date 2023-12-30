#include <stdio.h>
#include <stdlib.h>

int main()
{
    char C1[100];
    char C2[100];
    int i ;
    printf("Veuillez saisir une chaine : ");
    gets(C1);
    for( i=0 ; C1[i]!='\0' ; i++ )
        C2[i]=C1[i];
    C2[i] = '\0';
    printf("La premier chaine est : %s \n",C1);
    printf("La deuxieme chaine est : %s \n",C2);
    printf("Nomber total de caracters copies est : %d",i);


    return 0;
}
