#include <stdio.h> 
int main()
{
    int score[10];
    int x,m=0;
    printf("enter the number of scores you wanna save :");
    scanf("%d",&x);
    int i=0;
    while (i<x)
    {
        printf("the score %i :",i+1);
        scanf("%d",&score[i]);
        i++;
    }
    while(m<x)
    {
        printf("score %i =%d\n",m+1,score[m]);
        m++;
    }
}