#include<stdio.h>

int main()
{
    int a,b;
    //Getting input from yhe user
    printf("\n Enter the value of A:");
    scanf("%d",&a);
    //checking the condition of condition operator
    b=(a%4==0) && (a%100!=0)?
    printf("\n Leap year"):
    (a%400==0)?
    printf("\n Leap year"):
    printf("\n comman year");
    return 0;
}