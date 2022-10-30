#include<stdio.h>

int main()
{
    int a,b;
    //Getting input from the user
    printf("\n Enter the Value of A:");
    scanf("%d",&a);
    // Checking condition of conditiional operator
    b=(a%2==0)?
        printf("%d is Even ",a):
        printf("%d is Odd",a);
    return 0;
}