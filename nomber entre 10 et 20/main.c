#include <stdio.h>
#include <stdlib.h>

int main()
{
     int N ;
     printf("Veuillez entrer un nombre entre 10 et 20:");
     scanf("%d",&N);
     while ( N < 10 || N >2 0 ){
          if (N<10)
            printf("Plus petit!\n");
          else
              printf("Plus grand!\n");

          printf("Veuillez entrer un nombre entre 10 et 20:");
          scanf("%d",&N);
          }
          printf("Bravo! vous avez tape un nombre compris entre 10 et 20");
     }
    return 0;
}
