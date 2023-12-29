#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age ;
    printf("Veuillez entrer l'age de l'enfant :");
    scanf("%d",&age);
    if (age >= 6 && age <= 7)
         printf("La categorie de l'enfant est poussin");
    else if (age >= 8 && age <= 9)
         printf("La categorie de l'enfant est pupille");
    else if (age >= 10 && age <= 11)
         printf("La categorie de l'enfant est Minime");
    else
         printf("La categorie de l'enfant est cadet");



    return 0;
}
