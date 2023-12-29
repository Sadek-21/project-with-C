#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int nomberAleatoire ;
    int nomberEntre=0;
    int nomberTentative = 0 ;
    int estCorrect = 0 ;
    const int MAX = 30, MIN = 1 ;
    srand(time(NULL));
    nomberAleatoire = (rand() % (MAX - MIN + 1)) + MIN ;
    printf("L'ordinateur a cosi un nomber entre 1 et 30. A vous de le deviner en 5 tentatives au maximum \n :" );

    do{
        nomberTentative++;
        printf("Quel est le nomber ?");
        scanf("%d",&nomberEntre);
        if(nomberAleatoire>nomberEntre)
            printf("C'est plus! \n\n");
            else if (nomberAleatoire<nomberEntre)
                 printf("C'est moins! \n\n");
        else{
            estCorrect=1;
            break;
        }
    }while(nomberTentative<5);
    if(estCorrect==1)
        printf("Bravo! vous avez trouve %d en %d essais", nomberAleatoire,nomberTentative);
    else
        printf("Oups! vous avez depasse les 5 tentatives autorisees. Le nomber etait : %d",nomberAleatoire);
    return 0;
}
