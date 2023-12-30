#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, num_changer;
    int premier, dernier;
    int ch, n1;
    printf("Saisir un entier positif n : ");
    scanf("%d", &num);
    ch = 0 ;
    n1=num ;
    while(n1 !=0){
           n1/=10 ;
           ch++ ;
        }

    dernier = num % 10;
    premier = (int)(num /pow(10, ch-1

    num_changer = dernier;
    num_changer *= (int) pow(10, ch-1);
    num_changer += num % ((int) pow(10, ch-1));
    num_changer -= dernier;
    num_changer += premier;
    printf("Nombre initial : %d\n", num);
    printf("Apres l'echange : %d", num_changer);

    int num, som_ch = 0;

    printf("Saisir un nombre : ");
    scanf("%d", &num);

    while(num != 0){
            som_ch+=num%10 ;
            num /= 10;
    }
    printf("La somme de ses chiffres = %d", som_ch);
    return 0;
}
