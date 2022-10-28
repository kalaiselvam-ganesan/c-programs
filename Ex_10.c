#include <stdio.h>

#define INT_SIZE sizeof(int) * 8

int main()
{
    int a, count, msb, i;
    count = 0;  // actual initialization
    /* Getting input from the user */
    printf("Enter the value of A: ");
    scanf("%d", &a);
    msb = 1 << (INT_SIZE - 1);
    for(i=0; i<INT_SIZE; i++)
    {
        /* If leading set bit is found */
        if((a << i) & msb)
        {
            /* Breaking the loop */
            break;
        }

        count++;
    }
    printf("Total number of leading zeros in %d is %d", a, count);
    return 0;
}