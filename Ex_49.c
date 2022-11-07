#include <stdio.h>

// Function declarations 
int Perfect(int a);
int printPerfect(int a, int b);

int main()
{
    int a,b;
    // Getting 1st input from the user
    printf("Enter the value of A:");
    scanf("%d",&a);
    // Getting the 2nd input from the user
    printf("Enter the value of B:");
    scanf("%d",&b);
    // Function call 
    printPerfect(a,b);
    return 0;
}


// Function Definition
//  Check whether the given number is perfect or not. 
int isPerfect(int a)
{
    int i, sum;
    sum = 0;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum += i;
        }
    }
    if(sum==a)
        return 1;
    else
        return 0;
}

// Function Definition
int printPerfect(int a,int b) // Formal Parameters
{
    while(a<=b)
    {
        if(isPerfect(a))
        {
            printf("%d",a);
        }
        a++;
    }   
}