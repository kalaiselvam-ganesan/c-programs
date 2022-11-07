#include <stdio.h>

// function declaration 
int pow(double b, int ex);

int main()
{
    double b, p;
    int ex;    
    // Getting 1st input from the user
    printf("Enter base: ");
    scanf("%lf", &b);
    // Getting 2nd input from the user
    printf("Enter exponent: ");
    scanf("%d", &ex);
    // function call
    p=pow(b,ex); 
    printf("%.2lf^%d=%f",b,ex,p);
    return 0;
}

// Function Definition
int pow(double b,int ex) //  Formal parameter
{
    // checking the condition of if-else
    if(ex== 0)
        return 1;
    else if(ex>0)
        return b*pow(b,ex-1);
    else
        return 1/pow(b,-ex);
}