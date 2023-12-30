#include <stdio.h>
#include <stdlib.h>

int main()
{
                                                /*Ecrire un programme en C qui permet de tester si un nombre n donné en entrée est premier ou non.
                                                    Ecrire un programme en C qui lit un entier n puis affiche les n premiers nombres premiers.
                                                    Ecrire un programme en C qui affiche les 100 premiers nombres impairs.*/
  /*
    int N , i , est_premier ;
    printf("Veuillez entrer la valeur de N :");
    scanf("%d",&N);
    est_premier = 1;
    for(i=2 ; i<=N/2 ; i++){
        if (N%i==0){
            est_premier=0;
            break;
        }
    }
    if(est_premier==1)
        printf("%d est un nomber prenmier",N);
    else
        printf("%d est un nomber non prenmier",N);
    */
        int k,num=2,i,j=1;
            printf("Donner un entier positif :\t ");
            scanf("%d",&k);
            do{
            i=2;
            while((num%i)!=0)
            i+=1;
            if (i==num)
                {
            printf("%d est premier \n",num);
            j+=1;
            }
            num+=1;
            }
            while(j<=k);


    return 0;
}

