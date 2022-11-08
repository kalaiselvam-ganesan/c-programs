#include<stdio.h>

// Function Declaration
int natural(int a,int b);

int main()
{
    int a,b,sum;
    // Getting 1st input from the user
    printf("Enter the value of A:");
    scanf("%d",&a);
    // Getting 2nd input from the input
    printf("Enter the value of B:");
    scanf("%d",&b);
    // Function call
    sum=natural(a,b);
    return 0;
}

// Function definition
int natural(int a,int b)
{
    if(a==b)
    {
        return a;
    }
    else
    {
        return a + natural(a+1,b);
    }
}