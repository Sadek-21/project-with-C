#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Methode 1
    //char c[10];
    //printf("Veuillezz saisir une chaine \n");
    //scanf("%s",c);
    //printf("La chaine est : %s",c);

    //Methode 2
    //char c[10] ;
    //int i ;
    //printf("Veuillezz saisir une chaine :\n");
    //for ( i = 0 ; i<10 ; i++){
    //    scanf("%c",&c[i]);
   // }
    //printf("La chaine est :");
    //for ( i = 0 ; i<10 ; i++){
    //    printf("%c",c[i]);
   // }
    //Methode 3

    char c[100];
    puts ("Veuilez saisir une chaine :\n");
    gets (c);
    puts ("La chaine est : ");
    puts (c);

    return 0;
}
