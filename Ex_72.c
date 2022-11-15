#include <stdio.h>

// Function Declaration
int compare(char *a, char *b);

int main()
{
    char a[100],b[100];
    int res;
    // Getting 1st Input from the user */
    printf("Enter first string: ");
    gets(a);
    // Getting 2nd input from the user
    printf("Enter second string: ");
    gets(b);
    res = compare(a,b);
    // Checking the condition of if-else
    if(res==0)
    {
        printf("Both strings are equal.");
    }
    else if(res<0)
    {
        printf("First string is smaller than second.");
    }
    else
    {
        printf("First string is greater than second.");
    }
    return 0;
}

// Function Definition
int compare(char *a, char *b) // Formal parameter
{
    // Checking the conditiion of while loop
    while((*a && *b) && (*a==*b)) 
    {
        a++; 
        b++; 
    }
    return *a-*b;
}