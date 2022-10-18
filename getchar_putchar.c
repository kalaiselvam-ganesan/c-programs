#include<stdio.h>
#include<string.h>

int main()
{
    char a;
    printf("Enter the character:");
    //scanf("%c",&a);
    a=getchar();
    printf("\n Your character is ");
    putchar(a);
    return 0;
}