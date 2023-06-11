#include <stdio.h>
int main ()
{int x;
    do
    {
        printf("enter the teir of pyramid :");
        scanf("%i",&x);
    }
    while(x<=0);

for(int i=0;i<x;i++)
{
    for(int j=0;j<i+1;j++)
    {
        printf("#");
    }
    printf("\n");
}
}