#include <stdio.h>
int fun(int a,int b);
int main()
{
  int x,y;
  printf("enter a:");
  scanf("%d",&x);
  printf("enter b:");
  scanf("%d",&y);
  printf("before swaping x=%i,y=%i\n",x,y);
  fun(x,y);
}
int fun (int a,int b)
{
    printf("after swapping x=%i,y=%i\n",b,a);

}