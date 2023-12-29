#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , n1 , inverse =  0 , ch=0 ;
    printf("Veuillez entrer un nomber :");
    scanf("%d",&num);
    n1 = num ;
    while(n1 !=0){
        n1/=10 ;
        ch++;
    }
    while(num != 0)
    {
        inverse = (inverse * 10) + (num % 10);
        num/=10;
        }
        while(inverse!=0)
        {
    switch(inverse%10){
     case '1' :
         printf("  Un ");
             break;
     case '2' :
         printf(" Deux ");
            break;
     case '3' :
          printf(" Trois ");
            break;
     case '4' :
         printf(" Qutre ");
            break;
     case '5' :
         printf(" Cinq ");
            break;
     case '6' :
         printf("  Six ");
            break;
     case '7' :
         printf(" Sept ");
            break;
     case '8' :
         printf(" Huit ");
            break;
     case '9' :
         printf(" Neuf ");
            break;
     case '0' :
         printf("Zero ");
         }
         inverse /10;
         ch--;
         }
        while(ch){
                printf("Zero ");
                ch--;
        }
    return 0;
}
