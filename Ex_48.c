#include <stdio.h>

// Function declarations  
int Armstrong(int a);
int printArmstrong(int a, int b);

int main()
{
    int a,b;
    // Getting 1st input from the user
    printf("Enter the value of A: ");
    scanf("%d", &a);
    // Getting 2nd input from the user
    printf("Enter the value of B: ");
    scanf("%d", &b);
    // function call
    printArmstrong(a,b); 
    return 0;
}

// Function Definition
//  Check whether the given number is armstrong number or not.
int isArmstrong(int a)// Formal parameters
{
    int temp, lastDigit, sum;    
    temp = a;
    sum = 0;
    // Calculate sum of cube of digits 
    while(temp != 0)
    {
        lastDigit=temp%10;
        sum =sum + lastDigit*lastDigit*lastDigit;
        temp=temp/10;
    }
    // Recursion functiion
    if(a==sum)
        return 1;
    else 
        return 0;
}

// Function declaration
int printArmstrong(int a, int b)
{
    while(a<=b)
    {
        if(Armstrong(a)) 
        {
            printf("%d, ", a);
        }
        
        a++;
    }
}