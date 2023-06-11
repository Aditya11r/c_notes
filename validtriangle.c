#include <stdio.h>
int main()
{float x,y,z;
    do
    {
        printf("enter the lenght of first side:");
        scanf("%f",&x);
        printf("enter the lenght of second side:");
        scanf("%f",&y);
        printf("enter the lenght of third side:");
        scanf("%f",&z);
    }while(x<=0 && y<=0 && z<=0);
if (x+y<z || x+z<y || z+y<x )
{
    printf("the triangle is not valid");
}
else
{
    printf("trianle is valid!!!");
}

}