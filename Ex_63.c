#include<stdio.h>

int main()
{
    int a,b,sum;
    int *ptr1,*ptr2;
    // Getting 1st input from the user
    printf("Enter the value of A:");
    scanf("%d",&a);
    // Getting 2nd input from the user
    printf("Enter the value of B:");
    scanf("%d",&b);
    // Assigning the value of A to pointer ptr1
    ptr1=&a;
    ptr2=&b;
    // Assigning the value of B to pointer ptr2
    sum= *ptr1 + *ptr2;
    printf(" Sum:%d\n",sum);
    return 0;
}