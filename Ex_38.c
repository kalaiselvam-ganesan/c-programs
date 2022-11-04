#include<stdio.h>

int main()
{
    int a,b;
    // Getting input from the user
    printf("Enter the value of A:");
    scanf("%d",&a);
    // Getting 2nd input from the user
    printf("Enter the VAlue of B:");
    scanf("%d",&b);
    // Checking the Switch condition
    switch(a > b)
    {
        case 0:
            printf("\n maximum:%d",b);
            break;
        case 1:
            printf(" Maminum:%d\n",a);
            break;
    }
    return 0;
}