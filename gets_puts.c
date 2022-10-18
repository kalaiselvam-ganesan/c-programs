#include<stdio.h>
#include<string.h>

int main()
{
    char name[50];
    printf("\n Enter the name:");
    //scanf("%s",name);
    gets(name);
    printf("\n Your name is ");
    puts(name);
    return 0;
}