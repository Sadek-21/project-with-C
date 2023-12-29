#include <stdio.h>
#include <stdlib.h>

int main()
{
     char C [100] ;
     int n = 0 ;
     printf("Veuillez entrer une chaine :");
     gets(C);
     for (int i = 0 ; C[i]!='\0' ; i++)
        n++;
     printf("La longeur de la chaine est : %d\n",n);
     printf("La longeur de la chaine est : %d",strlen(C));

    return 0;
}
