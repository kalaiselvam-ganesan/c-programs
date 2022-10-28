#include<stdio.h>

int main()
{
    int a;
    /* Getting input from the user */
    printf("\n Enter the value of A:");
    scanf("%d",&a);
    /* condition checking */
    if(a & 1)
    {
        printf("LSB is 1");
    }
    else
    {
        printf("LSB is 0");
    }
    return 0;
}

    /* Algorithm

       Least Significant Bit is right side of the value. 
       The rignt side binary code value start from 1. 
       It is a binary code-(128 64 32 16 8 4 2 1..) 
       Bitwise And operator accept the condition whether both the condition is true.
       Ex: 11    is the decimal value.
           8 4 2 1  -- binary code
           1 0 1 1  -- 11th binary value
           0 0 0 1  -- 1  is the least significant bit
         ----------- 
           0 0 0 1
         -----------  
         11 is the LSB of 1.
       Ex: 10    is the decimal value
          8 4 2 1  -- binary code
          1 0 1 0  -- 10th binary value
          0 0 0 1  -- 1  is the least significant bit
         ----------
          0 0 0 0
         ----------
         10 is the LSB of 0.
         */

