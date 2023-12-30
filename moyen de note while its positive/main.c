#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k=0;
    float note=0, s=0, m ;
    while (note>=0){
    printf("Introduire la note %d : ",k+1);
    scanf("%f",&note);
    if (note>=0) {
    s+=note;
    k++;} }
    m=s/k;
    printf("la moyenne = %.2f\n", m);
    return 0;
}
