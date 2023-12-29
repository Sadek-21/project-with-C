#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , i , U , Un , Ui , Uj ;
    do{
    printf("Veuillez entrer la valeur de n:");
    scanf("%d" ,&n);
    }while(n<2);
    Ui=0;
    Uj=1;
    printf("U1 = %d \n" ,Uj);
    for(i=2 ; i<=n ; i++){
        U=Ui+Uj;
        printf("U%d = %d \n" ,i,U);
        Ui=Uj;
        Uj=U;
    }
    return 0;
}
