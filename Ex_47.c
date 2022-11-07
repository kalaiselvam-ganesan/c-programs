#include<stdio.h>

// function Declaration
int strong(int a,int b);
int fact(int a);

int main()
{
    int a,b;
    // Getting 1st input from the user
    printf("Enter the value of A:");
    scanf("%d",&a);
    // Getting 2nd input from the user
    printf("enter the value of B:");
    scanf("%d",&b);

}

// Function definition
int fact(int a)// formal parameters
{
    if(a==0)
    {
        return 1;
    }
    else
    {
        return (a*fact(a-1));
    }
    /*int i,fact=1;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d number:%d",a,fact);*/
}

// Function definition
int strong(int a,int b)// formal parameters
{
    int sum=0;
    int n;
    while(a!=b)
   {
    n=a;

    while(a!=0)
    {
        sum+=fact(a%10);
        a=a/10;
    }
    if(a==sum)
    {
        printf("%d\n",a);
    }
    a++;
   } 

}