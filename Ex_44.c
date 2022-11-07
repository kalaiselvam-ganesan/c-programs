#include<stdio.h>

// Function Declaration
int EvenOdd(int a);

int main()
{
    int a;
    // Getting input from the user
    printf("\n Enter the value of A:");
    scanf("%d",&a);
    // Function call
    EvenOdd(a); // Actual parametrs
    return 0;
}

// Function Definition
int EvenOdd(int b) // Formal parametrs
{
    // Checking the condition of if-else for Even or Odd 
    if(b%2==0)
    {
        printf("%d is Even \n",b);
    }
    else
    {
        printf("%d is odd \n",b);
    }
}
