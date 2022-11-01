#include<stdio.h>

int main()
{
    char a;
    // Getting input from the user 
    printf("\n Enter the Value of A:");
    scanf("%c",&a);
    // checking the condition of if-else
    if((a>='a' && a<='z') || (a>='A' && a<='z'))
    {
        printf("\n %c it is alphabet",a);
    }
    else
    {
        printf("\n %c it is not a alphabet",a);
    }
    return 0;

}