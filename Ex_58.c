#include<stdio.h>

// Functionn Declaration
int fact(int a);

int main()
{
    int a,c;
    // Getting input from the user
    printf("\n Enter the value of A:");
    scanf("%d",&a);
    // Function call
    c=fact(a);
    printf("Factorial of number:%d",c);
}

// Function Definition
int fact(int a) // Formal parameter
{
    if(a==1)
        return a;
    return a*fact(a-1);
}