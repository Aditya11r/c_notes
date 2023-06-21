#include <stdio.h>
int main()
{
    FILE *ptr=fopen("adi.txt","w");
    /*//FGETC//
    char c= fgetc(ptr);
    printf("%c",c);
    fclose(ptr);
    //FGETS//
    char str[30];
    fgets(str,6,ptr);
    printf("%s",str);*/
    fputc('o',ptr);
    fputs("my name is aditya raj\n",ptr);
    fputs("my name is arun\n",ptr);
    fclose(ptr);
}