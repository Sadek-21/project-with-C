#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, copie, num, dernierchiffre, somme;
    long fact;
        printf("Saisir un nombre : ");
        scanf("%d", &num);
        copie = num;
        somme = 0;
            while(num> 0)
                        {
                        dernierchiffre = num % 10;
                        fact = 1;
            for(i=1; i<=dernierchiffre; i++)
                                    {
                                fact = fact * i;
                        }
                        somme = somme + fact;

                        num = num / 10;
                }
                    if(somme == copie)
                                            {
                    printf("%d est un nombre fort", copie);
                            }
                        else
                {
                        printf("%d n'est pas un nombre chiffre fort", copie);
            }

    return 0;
}
