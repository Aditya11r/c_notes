#include <stdio.h>
int swap(int *a,int *b);
int main()
{
    int x,y;
    printf("enter a:");
    scanf("%i",&x);
    printf("enter b:");
    scanf("%i",&y);
    printf("before swapping :a=%i,b=%i\n",x,y);
    swap(&x,&y);
    printf("after swapping a=%i,b=%i\n",x,y);
}
int swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}