#include <stdio.h>

// Function declaration 
void Natural(int a, int b);

int main()
{
    int a,b;
    // Getting 1st input from the user    
    printf("Enter the value of A:");
    scanf("%d",&a);
    // Getting 2nd input from the user
    printf("Enter the value of B:");
    scanf("%d",&b);
    printf("All natural numbers B/W %d and %d :",a,b);
    Natural(a,b);
    return 0;
}

// Function Definition
void Natural(int c, int d)
{
    if(c>d)
        return;
    printf("%d\t", c);
    Natural(c+1,d);
}