#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float A , B ;
    int operation ;
    char reponse ;
    do{
        printf("------- calculatrice : Menu ------- \n");
        printf("1 - Addition.\n");
        printf("2 - Soustraction.\n");
        printf("3 - Multiplication.\n");
        printf("4 - Division.\n");
        printf("5 - Reste d'une division entier.\n");
        printf("6 - Puissance.\n");
        printf("Qule calcul veux-tu effectuer ? ");
        scanf("%d" , &operation);
        printf("Saisir le premier terme : ");
        scanf("%f" , &A);
        printf("Saisir le deuxieme terme : ");
        scanf("%f" , &B);
        switch(operation){
        case 1 : printf("Le resultat est %.2f \n",A+B );
                break;
        case 2 : printf("Le resultat est %.2f \n",A-B );
                break;
        case 3 : printf("Le resultat est %.2f \n",A*B );
                break;
        case 4 : if(B!=0){
             printf("Le resultat est %.2f \n",A/B );
                break;
        }
                else{
                    printf("La division par 0 est impossible \n");
                break;
                }
        case 5 : printf("Le resultat est %.2d \n",(int)A % (int)B );
                break;
        case 6 : printf("Le resultat est %.2f \n",pow(A,B) );
                break;
        default : printf("L'operateur est incorrect \n");
                break;

        }
        printf("eux-tu faire un autre calcul (O/N) ? ");
        scanf(" %C",&reponse);
    }while(reponse!='N');
    return 0;
}
