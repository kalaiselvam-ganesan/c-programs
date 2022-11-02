#include<stdio.h>

int main()
{
    int a;
    // Getting input from the user
    printf("\n Enter the value of A:");
    scanf("%d",&a);
    // checking the condition of if-else
    if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12)
    {
        printf("31 Days\n");
    }
    else if (a==2)
    {
        printf("28/29 Days\n");
    }
    else if (a==4 || a==6 || a==9)
    {
        printf("30 Days\n");
    }
    else
    {
        printf("Wrong choice:");
    }
    return 0;
    
}