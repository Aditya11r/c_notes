#include <stdio.h>
int main(void)
{
int x,y;
printf("enter x :");
scanf("%d",&x);
printf("enter y :");
scanf("%d",&y);
if (x>y)
{
printf("%s is greater than %s",x,y);
}
else if (y>x)
{
 printf("%s is greater than %s",x,y);
}
else
{
printf(" both number are %s",x);
}
}