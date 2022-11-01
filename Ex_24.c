#include<stdio.h>

int main()
{
    int a;
    // Getting the input from the user
    printf("\n Enter the value of A:");
    scanf("%d",&a);
    // Checking the condition of if-else
    if(a>0)
    /* EX: a=10
       condition a>0 --> 10>0 
       condition is true.
       A is positive */
    {
        printf("A is positive:%d",a);
    }
    else if(a<0)
    /* EX: a=-1
       condition a<0 ---> -1<0
       condition is true 
       A is negative  */ 
    {
        printf("A is Negative:%d",a);
    }
    else
    /* EX: a=0  
       condition a==0 
       condition is true
       A is Zero. */ 
    {
        printf("A is Zero:%d",a);
    }
    return 0;
}