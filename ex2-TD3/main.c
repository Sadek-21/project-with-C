#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int T1[100];
int T2[100];
void lire(int T[], int n ){
     int i;
        for (i=0; i<n; i++){
             printf("enter T[%d] : ", i);
             scanf("%d", &T[i]);
          }
}
void Afficher(int T[], int n){
    int i;
       for (i=0; i<n; i++){
            printf("%d ", T[i]);
          }
          printf("\n");
}
void trierCT(int T[], int n){
    int i , j , Tmp;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
                if (T[i]<T[j]){
                    Tmp = T[i];
                    T[i] = T[j];
                    T[j] = Tmp ;
     }
    }
   }
   printf("\nLes elements du tableau par ordre croissant : ");
          for (i=0;i<n;i++){
              printf("%d ",T[i]);
         }
}


int main()
{
                //exercice 2
    /*
    float A , B ;
    float *P1;
    float *P2 ;
    P1 = &A ;
    P2 = &B ;
    printf("Veuillez saisir la valeur de A :");
    scanf("%f",P1);
    printf("Veuillez saisir la valeur de B :");
    scanf("%f",P2);
    printf("A + B = %.2f \n",*P1 + *P2);
    */
                                //exercice 3
/*
    char tmp , X , Y ;
    char *PX , *PY ;
    PX = &X ;
    PY = &Y ;
    printf("Veuillez saisir le premier et le deusieme caracter ");
    scanf("%c %c",PX,PY);
    /* getchar();
    printf("\nVeuillez saisir le deuxieme caracter ");
    scanf("%c",PY);*/

/*  printf("\nX = %c et Y = %c ", X , Y );
    tmp = *PX;
    *PX = *PY;
    *PY = tmp;
    printf("\nX = %c et Y = %c ",X , Y );
*/
                        //exercice 4
    /*
    int T [100];
    int N , S;
    int *P ;
    P = T ;
    printf("Veuillez saisir la taille du tableau : ");
    scanf("%d",&N);
    printf("Veuillez saisir les elements du tableau : \n");
    for( P = T ; P< T + N  ; P++){
        printf("%d %d",P,T);
        printf("T[%d] = ",P - T);
        scanf("%d", P );
         }
    printf("les elements du tableau sont : \n");
    for( P = T ; P< T + N ; P++){
        printf("%d ", *P );
    }
    S = 0 ;
    for ( P = T ; P < T + N ; P++){
        S = S + *P ;
    }
    printf("\n");
    printf("\nLa somme des elements du tableau est : %d",S);*/

    /*char a[100],n;
    puts("enter a character string :");
    gets(a);
    printf("\n whats the character you want to search for:");
    scanf("%c",&n);
    printf("%s",strchr(a,n));
*/

                        //exercice 5
    /*char c[100],n;
    char *P ;
    puts("enter a character string :");
    gets(c);
    printf("\nwhats the character you want to search for:");
    scanf("%c",&n);
    printf("%s \n",strchr(c,n));
    if (P = strchr(c,n)){
        for ( ; P<c+strlen(c) ; P++){
                printf("%p  %d\n",P,*P);
                printf("%c\t",*P);
          }
    }
    else{
            printf("%p \n",P);
            printf("%d \n",&P);
            printf("the character does not exist in this string ");
          }*/

                    //exercice 1

    int N ,M;
    printf("enter taille tableau 1: \n");
    scanf("%d",&N);
    lire(T1,N);
    Afficher(T1,N);
    printf("enter taille tableau 2: \n");
    scanf("%d",&M);
    lire(T2,M);
    Afficher(T2,M);
    trierCT(T1,N);
    trierCT(T2,M);


    return 0;
}
