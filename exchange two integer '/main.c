#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A , B  ;
    printf("Veulliez entrer la valeur de A :");
    scanf("%d",&A);
    printf("Veulliez entrer la valeur de B :");
    scanf("%d",&B);
    A = A + B;
    B = A - B;
    A = A - B;
    printf("La nouvelle valeur de A est :%d\n",A);
    printf("La nouvelle valeur de B est :%d\n",B);
    return 0;
}
