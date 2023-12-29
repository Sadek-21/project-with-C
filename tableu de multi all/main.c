#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i;
    printf("Veuillez entrer un nombre:");
    scanf("%d",&N);
     while(N<0 || N>10){
          printf("Veuillez entrer un nombre:");
          scanf("%d",&N);
     }
     /*}
     i = 0;
     while(i<=10){
        printf("%d x %d=%d\n",N,i,N*i);
    i++;
     }*/
     for(i=0; i<=10; i++){
      printf("%d x % d= %d \n",N,i,N*i);
     }
    return 0;
}
