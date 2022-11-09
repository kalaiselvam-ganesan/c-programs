#include<stdio.h>
#define MAX 100

// Functionn Declaration
int sum1(int b[], int a, int len)

int main()
{
    int a,b[MAX],i,sum;
    // Getting 1st input from the user
    printf("\n Enter the value of A:");
    scanf("%d",&a);
    printf("\n Enter the Array of elements:");
    for(i=0;i<a;i++)
    {
        // Storing the array elements in integer array of b[i] 
        scanf("%d",&b[i]);
    }
    // Function call
    sum=sum1(b, 0, a);
    return 0;
}

// Function Definition
int sum1(int b[],int a,int len) 
{
    if(a>=len)
        return 0;
    return (b[a] + sum(b,a+1,len));
}