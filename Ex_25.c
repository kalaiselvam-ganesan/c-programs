#include<stdio.h>

int main()
{
    int a;
    // Getting input from the user
    printf("\n Enter the value of A:");
    scanf("%d",&a);
    // checking the condition of if-else
    if(a%5==0 && a%11==0)
    {
        printf("It is Divisible");
    }
    else
    {
        printf("It is not Divisible");
    }
    return 0;
}