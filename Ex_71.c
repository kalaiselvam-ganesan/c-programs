#include <stdio.h>

int main()
{
    char a[100],b[100];
    char *s1 =a;
    char *s2 =b;
    // Getting 1st input from the user
    printf("Enter first string: ");
    gets(a);
    // Getting 2nd input from the user
    printf("Enter second string: ");
    gets(b);
    while(*(++s1));
    // Copy str2 to str1 
    while(*(s1++) = *(s2++));
    printf("Concatenated string = %s",a);
    return 0;
}