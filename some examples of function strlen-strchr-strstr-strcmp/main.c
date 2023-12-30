#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[100],n;
    char c[100],k;
    char b[100];
    char d[100];
    char u[100];
    puts("Veuillez saiir un chaine :");
    gets(a);
    int m = strlen(a);
    printf("the number of caracter %d",m);
    printf("\nwhats the caracter you want to search for:");
    scanf("%c",&n);
    printf("%s",strchr(a,n));
    getchar();
    puts("\nVeuillez saiir un chaine pour cherche :");
    gets(u);
    printf("%s",strstr(a,u));
    puts("\nVeuillez saiir un chaine pour compare:");
    gets(c);
    printf("%d",strcmp(a,c));
    printf("\n");
    printf("copier la chine a dans d.\n");
    strcpy(d,a);
    puts(d);
    printf("\n");
    printf("copier la chine c dans b.\n");
    strcpy(b,c);
    puts(b);
    printf("\n");
    printf("contacte la chine c et a.\n");
    strcat(a,c);
    puts(a);



    return 0;
}
