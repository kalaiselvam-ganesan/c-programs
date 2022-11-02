#include<stdio.h>

int main()
{
    int a;
    //  Getting input from the user
    printf("\n Enter the Value of A:");
    scanf("%d",&a);
    if(a==1)
    {
        printf("Monday\n");
    }
    else if (a==2)
    {
        printf("Tuesday\n");
    }
    else if(a==3)
    {
        printf("Wednsday\n");
    }
    else if (a==4)
    {
        printf("Thusday\n");
    }
    else if (a==5)
    {
        printf("Fridays\n");
    }
    else if (a==6)
    {
        printf("Saturday\n");
    }
    else if (a==7)
    {
        printf("Sunday\n");
    }
    else
    {
        printf("Wrong choice..\n");
    }
    return 0;
}