#include<stdio.h>
/* To Represent the number of bit in interger */
#define int_size sizeof(int)*8; 

int main()
{
    int a,i,index,b[index];
    printf("\n Enter the Value of A:");
    scanf("%d",&a);
    /*To know the the size of integer in macro*/ 
    printf("size of the integer in macro:%d",int_size);
    index=int_size-1;
    while (index>=0)
    {
        b[index]=a & 1;
        //Decrement the index for storing the values in binary index
        index--;
        /*right shift the value a by 1 to eliminate the stored values */
        a=a>>1;
    }
    for(i=0; i<int_size;i++)
    {
        printf("%d",b[i]);

    }
    return 0;
}