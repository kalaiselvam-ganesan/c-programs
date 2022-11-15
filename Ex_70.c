#include <stdio.h>

int main()
{
    char a[100],b[100];
    char *str1= a;
    char *str2= b; 
    // Getting input from the user
    printf("Enter the value of A: ");
    gets(a);
    // Checking the condition of while loop
    while(*(str2++) = *(str1++));
    printf("First string = %s\n",a);
    printf("Second string = %s\n",b);
    return 0;
}