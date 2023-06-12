#include <stdio.h>
int factorial(int x);
 int main()
 {
    int x,n;
    printf("enter the number");
    scanf("%i",&x);
    n=factorial(x);
    printf("%i",n);
 }

 int factorial(int x)
 {
    if(x==1)
    {
        return 1;
    }

    return x * factorial (x-1);
 }