#include<stdio.h>

int main()
{
    int a;
    // Getting input from the user
    printf("\n Enter the value of A:");
    scanf("%d",&a);
    // checking the condition of if-else
    if(a%2==0)
    {
        printf("\n Even number:%d",a);
    }
    else
    {
        printf("Odd Number:%d",a);
    }
}