#include <stdio.h>
int main()
{   
    long x,y=0,m=2;
    int num[100];
    do
    {
    printf("enter number of values you want in your array(under 100):");
    scanf("%i",&x);
    }
    while(x<1);
    while(y<x)
    {
       printf("the walue of %i element is %i\n",y+1,m);
       m=m*2;
       y++;
    }
}