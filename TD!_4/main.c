#include <stdio.h>
#include <stdlib.h>
                    /*On dit qu’un nombre entier n est parfait s’il est égal à la somme de ses diviseurs stricts positifs.
                        Par exemple 6=1+2+3 est parfait.
                            a- Ecrire un programme en C qui permet de lire un entier et de vérifier s’il est parfait ou non.
                            b- Ecrire un programme en C qui permet d’afficher les n premiers nombres parfaits.


                            Un nombre égal à la somme de ses diviseurs propres est parfait. Un diviseur propre est un diviseur autre que le nombre lui-même.
                            Le premier nombre parfait est 6. En effet 1, 2 et 3 sont les diviseurs propres de 6 et 1+2+3=6.
                            28 est également un nombre parfait : 1+2+4+7+14=28. */
int main()
{
    /*
    int N , i , S ;
    do{
        printf("Donner un nentier positif dtrictement :");
        scanf("%d",&N);
        if ( N!=0 ){
            S = 0;
            for(i=1 ;i<N; i++)
                if (N%i==0)
                S=S+i;
            if (S==N)
                printf("%d, est parfait \n\n",N);
            else
                printf("%d, n'est pas parfait \n\n",N);
        }
        else
            printf("au revoir et merci");
    }
    while(N!=0);
        */
        int K , N=1 , i , S ,j=1 ;
        printf("Donner un entierf positif : ");
        scanf("%d",&K);
        do{
            S=0;
            for(i=1;i<N;i++)
                if (N%i==0)
                S=S+i;
            if(S==N){
                printf("%d, est parfait \n\n",N);
                j+=1;
            }
            N+=1;
        }
        while(j<=K);


    return 0;
}
