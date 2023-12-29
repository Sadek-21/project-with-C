#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char M1[100];
    char M2[100];
    int i , n = 0;
    printf("Veuillez entrer un nmot :");
    gets(M1);
    printf("Veuillez entrer un nmot :");
    gets(M2);
    if (strlen(M1)!=strlen(M2)){
        printf("Les deux mots n'sont pas la meme longeur");
    }
    else{
        for(int i = 0 ; i<strlen(M1) ; i++){
            if(M1[i]!=M2[i])
                n++;

        }
        printf("La distance de hamming entre les deux mots est : %d ",n);
    }

    return 0;
}
