#include <stdio.h>
int main ()
{   
    char name [100];
    printf("enter a name :");
    scanf("%c",&name);
    int x=0;
    while (name[x] != '\0')
    {
        x++; 
    }
    printf("%i",x+1);

    }