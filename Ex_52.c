#include <stdio.h>

// Function declaration 
void EvenOdd(int a,int b);

int main()
{
    int a,b;
    // Getting 1st input from the user
    printf("Enter the value of A:");
    scanf("%d",&a);
    // Getting 2nd input fromm the user
    printf("Enter the value of B:");
    scanf("%d",&b);
    printf("Even & odd Numbers B/W %d to %d are:",a,b);
    // Functon call
    EvenOdd(a,b); 
    return 0;
}

// Function Definition
void EvenOdd(int a,int b) // Formal Parameters
{
    if(a>b)
        return;
    printf("%d\n",a);
    EvenOdd(a+2,b);
}