#include <stdio.h>

int main()
{
    char a[100]; 
    char * str=a;  
    int count = 0;
    // Getting input from the user
    printf("Enter any string: ");
    gets(a);
    // Checking the condition of While loop
    while(*(str++) != '\0')
        count++;
    printf("Length of '%s' = %d",a,count);
    return 0;
}