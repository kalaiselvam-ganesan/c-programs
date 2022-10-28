#include<stdio.h>
/* To Represent the number of bit in interger */
#define int_size sizeof(int)*8

int main()
{
    int a,msb;
    // Getting input from the user 
    printf("\n enter the value of A:");
    scanf("%d",&a);

    /*move the 1st bit to MSB or highest bit*/
    msb=1<<(int_size-1);
    if(a & msb)
    {
        printf("MSB is 1");
    }
    else
    {
        printf("MSB is 0");
    }
    return 0;
    
}