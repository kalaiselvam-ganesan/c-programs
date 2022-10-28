#include<stdio.h>

int main()
{
    int a,b,n,c;
    // Getting the input from the user
    printf("Enter the value of A:");
    scanf("%d",&a);
    //Getting the input from the user for nth position
    printf("\n Enter the value of Nth:");
    scanf("%d",&n);
    /*right shift input, n times and execute the condition of bitwise operator  */
    b=(a>>n);
    c=b & 1;
    printf("%d bit set %d",n,c);
    return 0;
}