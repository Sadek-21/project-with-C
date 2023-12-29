#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* Inverse(char *A){
    char M ;
    int n,i;
    n = strlen(A)-1;
    for(i=0; i<n/2; i++){
          M = *(A+i);
          *(A+i)= *(A+n-i);
          *(A+n-i)= M ;
 }
    return A;
}
char Palindrome(char A[]) {
  int i, n;
  n = strlen(A);
  for (i=0; i<n/2; i++)
    if (A[i] != A[n-1-i]) return 0;
    return 1;
}
int main()
{
    char A[100];
    char IN[100];
    int n, i, j;
    printf(" Entrez une chaîne de caractère :  ");
    gets(A);
    printf(" l'inverse est:%s \n",Inverse(A));
    if(Palindrome(A)){
       printf("la chaine est palindrome.\n");
    }
    else
    printf("la chaine n'est pas palindrome.");


    return 0;
}



/* char C [100];
    char M [100];
    int n ;
    printf("Veuillez saisir une chaine :");
    gets(C);
    printf("l'inverse de la chaine est : %s\n",strrev(C));
    strcpy(M,C);
    strrev(M);
    n = strcmp(M,C);
    if (n==0){
          printf("la chaine est palindrome.\n");
       }
    else{
        printf("la chaine n'est pas palindrome.");
       }*/
