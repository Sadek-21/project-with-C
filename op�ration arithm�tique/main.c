#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    float num1, num2, resultat=0.2f;

    printf("Saisir une op�ration arithm�tique :\n");
    scanf("%f %c %f", &num1, &op, &num2);
    switch(op)
    {
        case '+':
            resultat = num1 + num2;
                break;
        case '-':
            resultat = num1 - num2;
                break;
        case '*':
            resultat = num1 * num2;
                break;
        case '/':
        resultat = num1 / num2;
                break;
            default:
     printf("Op�ration invalid");
}

            printf("=%.2f",resultat);
    return 0;
}
