#include <stdio.h>

// Function declaration 
int EvenOdd(int a,int b);

int main()
{
    int a,b,sum;
    // Getting 1st input from the user
    printf("Enter the value of A:");
    scanf("%d",&a);
    // Getting 2nd input fromm the user
    printf("Enter the value of B:");
    scanf("%d",&b);
    printf("Even & odd Numbers B/W %d to %d are:",a,b);
    // Functon call
    sum=EvenOdd(a,b); 
    return 0;
}

// Function Definition
int EvenOdd(int a,int b) // Formal Parameters
{
    if(a>b)
        return 0;
    else
     return (a+EvenOdd(a+2,b));
}