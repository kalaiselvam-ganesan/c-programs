#include<stdio.h>

int main()
{
    char a;
    // Getting input from the user
    printf("\n Enter the Value of A:");
    scanf("%c",&a);
    // checking the condition of iflse
    if((a>='a' && a<='z') || (a>='A' && a<='z'))
    {
        printf("\n %c it is alphabet",a);
    }
    else if(a>1 || a<1)
    {
        printf("\n %d it is integer",a);
    }
    else
    {
        printf("\n is special special character");
    }
    return 0;
}