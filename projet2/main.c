#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Rayon , Surface ;
    const float pi = 3.14 ;
    printf ("Veuillez entrer la valeur du rayon de cercle :");
    scanf ( "%f" , &Rayon ) ;
    Surface = Rayon *Rayon * pi ;
    printf ( " L'air de cerle est : %f " , Surface ) ;
    return 0;
}
