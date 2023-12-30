#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N ;
    printf("Veuillez entre un nombre entre 1 et 7");
    scanf("%d", &N);
    switch(N){
         case 1 :printf("Lundi");
                 break;
          case 2 :printf("Mardi");
                 break;
          case 3 :printf("Mercredi");
                 break;
          case 4 :printf("jeudi");
                 break;
          case 5 :printf("vendredi");
                 break;
          case 6 :printf("samedi");
                 break;
          case 7 :printf("Dimanche");
                 break;
          default: printf("Le nombre est incorrect");
                 break;


    }
    return 0;
}
