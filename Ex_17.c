#include<stdio.h>

int main()
{
    int a,b,c;
    //Getting 1st input from the user
    printf("\n Enter the Value Of A:");
    scanf("%d",&a);
    //Getting 2nd input from the user 
    printf("\n Enter the Value of B:");
    scanf("%d",&b);
    //checking the condition of conditional operator
    c=(a>b)?a:b; 
    printf("\n Maximum munber :%d",c);
    
    //working

    /*if(a>b)
    Ex: a=50 & b=25
    condition a>b
    A is maximum of B
    {
        printf("A is Maximum;%d",a);
    }
    else
    EX: a=25 & b=50
    condition a<b
    B is maximum of A
    {
        printf("\n B is Maximum:%d\n",b);
    }*/
    return 0;
}