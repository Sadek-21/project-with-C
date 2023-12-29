#include <stdio.h>
#include <stdlib.h>
int inverse(int n){
 int In = 0;
 while(n!=0){
    In=(In*10)+(n%10);
    n=n/10;
 }
  return In;

 }
int palindrome(int n){
  int M ;
  M = inverse(n);
 if (M==n)
    return 1 ;
  else
    return 0 ;
}
int main()
{
    int n;
    printf("Entrer un entier positif n:");
    scanf("%d",&n);
    printf("L'inverse de %d est %d\n",n,inverse(n));
    if(palindrome(n))
       printf("%d est un palindrome\n",n);
    else
        printf("%d n'est pas un palindrom",n);
    return 0;
}
