#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ;
    int j ;
    i = 0;
    j = 2;
    while((i<10)&& (j<14))
    {

        if(i==1){
            j-=7;
        }
        else if (i==1){
            i+=j;
        }
        else if (i==6)
        {
         while(j>0){
            j--;
            i++;
         }
         }
         printf("i=%d\n",i);
         printf("j=%d\n",j);
            i++;
            j+=2;
    }
    return 0;
}
