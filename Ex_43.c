#include<stdio.h>

// Function declaration
int max(int c,int d);
int min(int e,int f);

int main()
{
    int a,b;
    // Getting 1st input from the user
    printf("\n enter the Value of A:");
    scanf("%d",&a);
    // Getting 2nd input from the user
    printf("\n Enter the Value of B:");
    scanf("%d",&b);
    // Function call
    max(a,b);  // Actual parameters
    min(a,b);  // Actual parameters
    // printf("Maximum of %d\n",max(a,b));
    // printf("Minimum of %d\n",min(a,b));
    return 0;
}

// Function Definition
int max(int c,int d)// Formal parameters
{
    if(c>d)
    {
        printf("\n Maximum :%d",c);
    }
    else
    {
        printf("\n Maximum :%d",d);
    }
}

// 2nd function Definition 
int min(int c,int d)// Formal parametrs
{
    // checking the condition of if-else whether number is maximum or minimum
    if(c<d)
    {
        printf("\n Minimum %d",c);
    }
    else
    {
        printf("\n Minimum :%d",d);
    }
}