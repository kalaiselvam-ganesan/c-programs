
#include<stdio.h>

int main()
{
    int a,b=0;
    while (1)
    {
    printf("\n Enter the number:");
    scanf("%d",&a);
    b=a+b;
    printf("Result : %d \n",b);
    }
}