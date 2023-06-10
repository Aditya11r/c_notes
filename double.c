#include <stdio.h>
int main()
{   int x,y=0,m=2;
    int num[10];
    printf("enter number of values you want in your array(under 10):");
    scanf("%i",&x);
    while(y<x)
    {
       printf("the walue of %i element is %i\n",y+1,m);
       m=m*2;
       y++;
    }
}