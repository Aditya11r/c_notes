#include <stdio.h>
int main ()
{
int x,y;
int i=0;

    printf("enter the starting population :");
    scanf("%d",&x);

    printf("enter the ending population :");
    scanf("%d",&y);
while(x<=y)  
{
  x=x+x/3-x/4;
  i++;
}  
printf("years :%d",i-1);

} 
