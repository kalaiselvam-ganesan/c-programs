#include <stdio.h>

int main()
{
    char a[100],b[100];
    char *s=a;
    char *s1=b;
    int len=0;
    // Getting input from the user
    printf("Enter the value of A:");
    gets(a);
    // checking the condition of while loop
    while(*(s++)) len++;
    s--;
    while(len >= 0)
    {
        *(s1++) = *(--s);
        len--;
    }
    *s1='\0';
    printf("Original string=%s\n",a);
    printf("Reverse string=%s",b);
    return 0;
}