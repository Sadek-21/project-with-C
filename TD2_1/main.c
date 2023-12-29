#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Saisir une lettre: ");
    scanf("%c", &ch);
    switch(ch)
           {
    case 'a':
        case 'A':printf("Voyelle");

           break;

    case 'e':
        case 'E':printf("Voyelle");

           break;

    case 'i':
        case 'I':printf("Voyelle");

           break;

    case 'o':
        case 'O':printf("Voyelle");

           break;

    case 'u':
        case 'U':printf("Voyelle");

    default :printf("consonnes");

           }
    return 0;
}
