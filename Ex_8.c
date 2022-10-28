#include <stdio.h>
/* To represent the size pf the Integer  */
#define INT_SIZE sizeof(int) * 8 

int main()
{
    int a, order, i;
    /* Getting input from the user */
    printf("Enter the value of A: ");
    scanf("%d", &a);
    /* Initially set the order to maximun size of integer */
    order = INT_SIZE - 1;
    for(i=0; i<INT_SIZE; i++)
    {
        /* If current bit is set */
        if((a>>i) & 1)
        {
            order = i;

            /* break the loop */
            break;
        }
    }
    printf("Lowest order set bit in %d is %d", a, order);
    return 0;
}
