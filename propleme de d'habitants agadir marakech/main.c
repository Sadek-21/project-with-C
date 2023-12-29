#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int nbr_ans ;
    float p_aga , p_kech ;
    p_aga = 500000 ;
    p_kech = 1000000 ;
    nbr_ans = 0;
    while(p_aga< p_kech){
        p_aga = p_aga + p_aga*0.08;
        p_kech = p_kech + 50000;
        nbr_ans++;
    }
    printf("Agadir depassera Marrakech apres %d ans ",nbr_ans);

    return 0;
}
