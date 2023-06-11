#include <stdio.h>
int main()
{
    int num[100];
    int x,i=0,e;
    do
    {
        printf("enter the numbers of value of array ;");
        scanf("%i",&x);
    }
    while(x<0);
    while(i<x)
    {
        printf("enter the  value of %i position ;",i+1);
        scanf("%i",&num[i]);
        i++;
    }
    do
    {
        printf("enter the numbers of value of u wanna search ;");
        scanf("%i",&e);
    }
    while(e<0);
    for(int s=0;s<x;s++)
    {
        if (num[s]==e)
            {
               printf("number is found\n");
               return 0;
            }
    }
printf("not found");

}