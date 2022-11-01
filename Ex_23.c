#include<stdio.h>

int main()
{
    int a,b,c;
    //Getting the input from the user
    printf("\n Enter the value of A:");
    scanf("%d",&a);
    //Getting 2nd input from the user
    printf("\n Enter the Value of B:");
    scanf("%d",&b);
    //Getting 3rd input from the user
    printf("\n Enter the value of C:");
    scanf("%d",&c);
    // checking the condition of if-else
    if(a>b && a>c)
    /* Ex: a=50 & b=25 & c=10
    condition a>b && a>c
    A is maximum of B and C */
    {
        printf("A is Maximum;%d",a);
    }
    else if (b>a && b>c)
    /* Ex: a=10 & b=50 & c=25
    comdition b>a && b>c
    B is maximum of A and */
    {
        printf("\n B is Maximum:%d\n",b);
    }
    else
    /* Ex: a=10 & b=25 & c=50
    condition c>a && c>b
    C is maximum of A and B */
    {
        printf("\n C is Maximum:%d",c);
    }
    return 0;
}