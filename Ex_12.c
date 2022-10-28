#include<stdio.h>
/* To Represent the number of bit in interger */
#define int_size sizeof(int)*8

int main()
{
    int a,i,one,zero;
    /* Getting the input from the user */
    printf("Enter the value of A:");
    scanf("%d",&a);
    one=0;
    zero=0;
    // To know the the size of integer in macro
    printf("\n size of interger in macro : %d",int_size);
    for(i=0;i<int_size;i++)
    {
        if(a & 1)
        {
            one++;
        }
        else{
            zero++;
        }
        /*right shift the a at 1 time to calculate the zero's and one's */
        a= a >> 1;
    }
    printf("\n Total ones:%d",one);
    printf("\n Total zeros:%d",zero);
    return 0;
}