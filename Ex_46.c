#include<stdio.h>

// Function Declaration
int prime(int a);
int interval(int a,int b);

int main()
{
    int a,b;
    // Getting 1st input from the user
    printf("Enter the value of A:");
    scanf("%d",&a);
    // Getting 2nd input from the user
    printf("Enter the value of B:");
    scanf("%d",&b);
    interval(a,b);
    return 0;
}

// Function Definition
int prime(int a) // Foraml parameters
{
    int i;
    // checking the condition of if-else
    // whether number is prime or not
   
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
}

// Function Definition
int interval(int c,int d) //formal parameters
{
    while (c<=d)
    {
        if(prime(c))
        {
            printf("%d\t\n",c);
        }
        c++;
    }
}

