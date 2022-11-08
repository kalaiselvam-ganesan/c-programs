#include <stdio.h>

// Function declaration 
int Natural(int a,int b);

int main()
{
    int a,b,sum;
    // Getting 1st input from the user
    printf("Enter the valiue of A:");
    scanf("%d",&a);
    // Gettind 2nd input from the user
    printf("Enter the value of B:");
    scanf("%d",&b);
    // Function call
    sum=Natural(a,b);
    printf("Sum of natural numbers B/W %d and %d = %d",a,b,sum);
    return 0;
}

// Function Definition
int Natural(int a, int b)
{
    if(a==b)
        return a;
    else
        return a+Natural(a+1,b); 
}