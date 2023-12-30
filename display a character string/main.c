#include <stdio.h>
#include <stdlib.h>

int main()
{
    //methode 1
    /*char c[10];
    printf("Veuillez saisir une cchanine \n");
    scanf("%s",c);
    printf("La chaine est : %s",c);*/
    // methode 2
    /*char c[100];
    int i ;
    printf("Veuillez saisir une cchanine \n");
    for ( i = 0 ; i < 10 ; i++){
        scanf("%c",&c[i]);
    }
    printf("La chaine est :");
    for ( i = 0 ; i < 10 ; i++){
        printf("%c",c[i]);
    }
*/

    //methode 3
    char c[100];
    puts("Veuillez saisir une chaine");
    gets(c);
    puts("La chaine est :");
    puts(c);
    return 0;
}
