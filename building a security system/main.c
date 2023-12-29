#include <stdio.h>
#include <stdlib.h>
                       // We will make the password 2005
int main()
{
    printf("\n                            Welcome to Mr. Lock System ^_^");

    int passowrd;
    int FakeInput;

    printf("\n\nPlease type your password..");
    scanf("%d" , &passowrd);

    if (passowrd <=2005 && passowrd >= 2005){
        printf("\n                             The password is correct :");
        printf("\n                             Hello my close friend  :");

    }
    else{
        printf("\n                             The password is WRONG -_-");
        printf("\n                             You still have two times");

        printf("\nTry again..");
        scanf("%d" ,&passowrd);

        if (passowrd <=2005 && passowrd >= 2005){
        printf("\n                             The password is correct :");
        printf("\n                             Hello my close friend  :");

    }
    else{
        printf("\n                             The password is WRONG -_-");
        printf("\n                             You still have two times");
        printf("\n\nPlease type your password..");
        scanf("%d" , &passowrd);

        if (passowrd <=2005 && passowrd >= 2005){
        printf("\n                             The password is correct :");
        printf("\n                             Hello my close friend  :");

    }
    else{
        printf("\n                              WRONG -_-");
        printf("\n                              WRONG -_-");
        printf("\n                              WRONG -_-");
        printf("\n                              WRONG -_-");
        printf("\n                              WRONG -_-");
        printf("\n                              WRONG -_-");
        printf("\n                              WRONG -_-");
        printf("\n                              WRONG -_-");
        printf("\n                              WRONG -_-");
        printf("\n                              WRONG -_-");
    }
    }
    }
    scanf("\n%d",FakeInput);
    return 0;
}
