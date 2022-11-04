#include<stdio.h>

int main()
{
    int a;
    // Getting input from the user
    printf("Enter the value of A:");
    scanf("%d",&a);
    // Checking the Switch condition
    switch(a %2)
    {
        case 1:
            printf("\n Odd:%d",a);
            break;
        case 0:
            printf(" Even:%d\n",a);
            break;
    }
    return 0;
}