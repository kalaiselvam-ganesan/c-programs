#include<stdio.h>

// Function Declaration
int cube(int a);

int main()
{
    int b,d;
    // Getting input from the user
    printf("\n Enter the value of B:");
    scanf("%d",&b);
    // Function call
    d=cube(b);//actual parameters
    printf("\n Cube of NUmber:%d",d);
    return 0;
}

// Function Definition
int cube(int a)// formal parameters
{
    a=a*a*a;
    return a;
}