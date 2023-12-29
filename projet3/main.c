#include <stdio.h>
#include <stdlib.h>

int main()
{

     float Rayon , Surface ;
     const float Pi = 3.14 ;
     printf ( " Veuillez entrer la valeur du rayon de cercle : " );
     scanf ( "%f" , &Rayon ) ;
     Surface = Rayon* Rayon * Pi ;
     printf ( " L'aire de cercle est : %f", Surface ) ;

    return 0;
}
