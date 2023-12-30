#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A , B ;
    printf("Veuillez entrer le dividende :");
    scanf("%f",&A);
    printf("Veuillez entrer le diviseur :");
    scanf("%f",&B);
    if (B!=0){
      printf("Le resultat est:\n");
      printf("%.2f",A/B);
    }
    else
        printf("Le division par 0 impossible ");
    return 0;
}
