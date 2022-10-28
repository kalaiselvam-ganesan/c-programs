#include <stdio.h>
/* To represent the size pf the Integer  */
#define INT_SIZE sizeof(int) * 8 

int main()
{
    int a, count, i;
    count = 0;     // actual initialization
    /* Getting input from the user */
    printf("Enter the value of A: ");
    scanf("%d", &a);
    for(i=0; i<INT_SIZE; i++)
    {
        /* If set bit is found the terminate from loop*/
        if((a >> i ) & 1)
        {
            /* Break from loop */
            break;
        }
        count++;
    }
    printf("Total number of trailing zeros in %d is %d.", a, count);
    return 0;
}
