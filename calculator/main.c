#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float A , B ;
    char operateur ;
    printf("Veuillez entre la valeur de A :");
    scanf("%f",A);
    printf("Veuillez choisir l'operateur :");
    scanf(" %c",&operateur);
    printf("Veuillez entrer la valeur de B :");
    scanf("%f",&B);
    switch(operateur){
          case '+' : printf("A + B =%.2f",A+B);
                    break;
          case '-' : printf("A - B =%.2f",A-B);
                    break;
          case '*' : printf("A * B =%.2f",A*B);
                    break;
          case '/' :
              if (B!=0)
                printf("A / B =%.2f",A/B);
              else
                printf("La division par 0 est imposible");
                    break;
        default :printf("L'operateur est incorrect");
    }
     return 0;
}
