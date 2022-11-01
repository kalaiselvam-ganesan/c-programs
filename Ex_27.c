#include<stdio.h>

int main()
{
    int a;
    // Getting Input from the user
    printf("\n Enter the Value of A:");
    scanf("%d",&a);
    // checking the condition of if-else
    if((a%4==0 && a%100!=0) || a%400==0)
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Not a leap year\n ");
    }
        
}