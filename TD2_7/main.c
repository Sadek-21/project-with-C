#include <stdio.h>
#include <stdlib.h>

int main()
{
     int copie1, copie2, num, dernierchiffre, chiffres, somme;
        printf("Saisir un nombre : ");
        scanf("%d", &num);
        somme = 0;
        copie1 = num;
        copie2 = num;
        chiffres=0 ;
            while(copie2 !=0)
                            {
                    copie2/=10 ;
                    chiffres++ ;
            }
            while(num> 0)
                            {
                dernierchiffre = num % 10;
                somme = somme + round(pow(dernierchiffre, chiffres));
                num = num / 10;
 }
            if(copie1 == somme)
 {
                printf("%d est un nombre Armstrong", copie1);
 }
                else
 {
                    printf("%d n'est pas un nombre Armstrong", copie1);
 }
    return 0;
}
