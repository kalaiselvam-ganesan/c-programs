#include <stdio.h>

// Function declaration 
int sum1(int a);


int main()
{
    int a,sum;
    // Getting input from the user
    printf("Enter the value of A:");
    scanf("%d",&a);
    // Functioin call
    sum = sum1(a);
    printf("Sum of digits of %d = %d",a,sum);
    return 0;
}

//  Function Definition
int sum1(int a) // Formal parameter
{
    if(a==0)
        return 0
    return ((a%10)+sum1(a/10));
}