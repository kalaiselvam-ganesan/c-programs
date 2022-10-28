#include <stdio.h>
/* To represent the size pf the Integer */
#define INT_SIZE sizeof(int) * 8 

int main()
{
    int a, order = -1, i;
    /*  Getting input from the user */
    printf("Enter the value od A: ");
    scanf("%d", &a);
    for(i=0; i<INT_SIZE; i++)
    {
        /* If current bit is set */
        if((a>>i) & 1)
            order = i;
    }
    if (order != -1)
        printf("Highest order set  %d is %d", a, order);
    else 
        printf("0 has no set bits.");

    return 0;
}