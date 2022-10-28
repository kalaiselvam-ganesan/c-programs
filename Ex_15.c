#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of A:");
    // a=5
    scanf("%d",&a);
    printf("Enter the value of B:");
    //b=4
    scanf("%d",&b);
    printf("\n Before swap A:%d and B:%d",a,b);
    a=a^b; //a=5^4
    /* it convert decimal to binary 
        5 = 0 1 0 1
        4 = 0 1 0 0 ^
       -------------
        1 = 0 0 0 1
        ------------
        a = 1*/

    b=a^b; //b=1^4 
    /*  1 = 0 0 0 1
        4 = 0 1 0 0 ^
       --------------
        5 = 0 1 0 1
       --------------
       b = 5*/

    a=a^b; //a=1^5
    /*  1 = 0 0 0 1
        5 = 0 1 0 1 ^
       -------------
        4 = 0 1 0 0
       -------------
       a = 4*/
    printf("\n After swap A:%d and B:%d",a,b);
    return 0;
}