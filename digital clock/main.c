#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    /*int h , m ,s ;
    int d = 100 ;
    printf("Set time :\n");
    scanf("%d%d%d",&h,&m,&s);
    if (h>12 || m>60 || s>60)
    {
        printf("ERROR ! \n");
        exit(0);
    }
    while(1){
        s++;
        if (s>59){
            m++;
            s=0;
        }
        if(m>59){
            h++;
            m=0;
        }
        if (h>12){
            h=1;
        }
        printf("\n Clock :");
        printf("\n %02d:%02d:%02d",h,m,s);
        Sleep(d);                                                    //this fonction sleep down the while loop and make it more like a real clock
        system("cls");                                              //this clear the screen
    }*/


    printf("Set time like that ==> HH:MM:SS \t");
    int h=0 , m=0 , s=0 ;
    scanf(h ; h<=24 ; h++){
        if (h==24){
            h=0;
        }

        for (m ; m < 60 ; m++){
            for (s ; s<60 ; s++){
                printf("\n\n\n\n\n\n\t\t\t%2d:%2d:%2d\n",h,m,s);
                for (double i =0 ; i<5599999; i++){
                    i++;
                    i--;
                }
                system("cls");
            } s=0;
        }m=0;
    }

    return 0;
}
