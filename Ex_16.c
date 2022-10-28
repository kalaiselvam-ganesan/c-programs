#include<stdio.h>

int main()
{
    int a;
    printf("Enter the Value of A:");
    scanf("%d",&a);
    //a = 10
    if(a & 1)
    /* it convert decimal into binary */
    /* check the condition (a & 1) */
    /* 10 = 1 0 1 0
    The LSB is 1 then it  is odd number */
    {
        printf("Odd\n");
    }
    else
    /* The LSB is 0 then it is Even number */
    {
        printf("Even\n");
    }
    return 0;
}