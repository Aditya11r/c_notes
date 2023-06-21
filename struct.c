#include <stdio.h>
typedef int alo;
typedef struct stu
{
    int roll;
    char name[30];
    float markes;

}muu ;

int main()
{
    int a=5;
    alo b=45;
    printf("%i\n%i\n",a,b);
    struct stu m={23,"aditya",99};
    printf("%i,%s,%f\n",m.roll,m.name,m.markes);
    muu f={23,"aditya",99};
    printf("%i,%s,%f",f.roll,f.name,f.markes);
    
}